#!/usr/bin/env python3
#  SPDX-FileCopyrightText:  Copyright 2021-2023 Arm Limited and/or its affiliates <open-source-office@arm.com>
#  SPDX-License-Identifier: Apache-2.0
#
#  Licensed under the Apache License, Version 2.0 (the "License");
#  you may not use this file except in compliance with the License.
#  You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
#  Unless required by applicable law or agreed to in writing, software
#  distributed under the License is distributed on an "AS IS" BASIS,
#  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
#  See the License for the specific language governing permissions and
#  limitations under the License.

"""This script does effectively the same as "git submodule update --init" command."""
import json
import logging
import sys
import tarfile
import tempfile
import typing
from pathlib import Path
from urllib.request import urlopen
from zipfile import ZipFile

TF = "https://github.com/tensorflow/tflite-micro/archive/80cb11b131e9738dc60b2db3e2f1f8e2425ded52.zip"
CMSIS = "https://github.com/ARM-software/CMSIS_5/archive/a75f01746df18bb5b929dfb8dc6c9407fac3a0f3.zip"
CMSIS_DSP = "https://github.com/ARM-software/CMSIS-DSP/archive/refs/tags/v1.15.0.zip"
CMSIS_NN = "https://github.com/ARM-software/CMSIS-NN/archive/refs/tags/23.08.zip"
CMSIS_ENSEMBLE_A = "https://github.com/alifsemi/alif_ensemble-cmsis-dfp/archive/5bfce4020fa27d91fcd950725d35ecee8ba364ad.zip"
CMSIS_ENSEMBLE = "https://github.com/alifsemi/b0-cmsis-dfp_DEV/archive/a0ce958356afd431c11c3272f0f164f049081218.zip"
BOARDLIB = "https://github.com/alifsemi/boardlib_DEV/archive/ec601aa027932c65f9856a3a30a8bfc2914226ce.zip"
ETHOS_U_CORE_DRIVER = "https://git.mlplatform.org/ml/ethos-u/ethos-u-core-driver.git/snapshot/ethos-u-core-driver-23.08.tar.gz"
ETHOS_U_CORE_PLATFORM = "https://git.mlplatform.org/ml/ethos-u/ethos-u-core-platform.git/snapshot/ethos-u-core-platform-23.08.tar.gz"
LVGL = "https://github.com/lvgl/lvgl/archive/refs/tags/v8.3.7.zip"
ARM2D = "https://github.com/ARM-software/Arm-2D/archive/refs/tags/v1.1.3.zip"

def download(
        url_file: str,
        to_path: Path,
):
    """
    Download a file from the specified URL

    @param url_file:    The URL of the file to download
    @param to_path:     The location to download the file to
    """
    with urlopen(url_file) as response, tempfile.NamedTemporaryFile() as temp:
        logging.info("Downloading %s ...", url_file)
        temp.write(response.read())
        temp.seek(0)
        logging.info("Finished downloading %s.", url_file)
        if url_file.endswith(".tar.gz"):
            untar(temp.name, to_path)
        else:
            unzip(temp, to_path)


def unzip(
        file: typing.IO[bytes],
        to_path: Path
):
    """
    Unzip the specified file

    @param file:    The file to unzip
    @param to_path: The location to extract to
    """
    with ZipFile(file) as f:
        for archive_path in f.infolist():
            archive_path.filename = archive_path.filename[archive_path.filename.find("/") + 1:]
            if archive_path.filename:
                f.extract(archive_path, to_path)
                target_path = to_path / archive_path.filename
                attr = archive_path.external_attr >> 16
                if attr != 0:
                    target_path.chmod(attr)


def untar(
        file: bytes,
        to_path: Path
):
    """
    Untar the specified file

    @param file:    The file to untar
    @param to_path: The location to extract to
    """
    with tarfile.open(file) as f:
        for archive_path in f.getmembers():
            index = archive_path.name.find("/")
            if index < 0:
                continue
            archive_path.name = archive_path.name[index + 1:]
            if archive_path.name:
                f.extract(archive_path, to_path)


def main(dependencies_path: Path):
    """
    Download all dependencies

    @param dependencies_path:   The path to which the dependencies will be downloaded
    """
    dependency_urls_path = (
            Path(__file__).parent.resolve() / "scripts" / "py" / "dependency_urls.json")
    with open(dependency_urls_path, encoding="utf8") as f:
        dependency_urls = json.load(f)

    for name, url in dependency_urls.items():
        download(url, dependencies_path / name)


if __name__ == '__main__':
    logging.basicConfig(filename='download_dependencies.log', level=logging.DEBUG, filemode='w')
    logging.getLogger().addHandler(logging.StreamHandler(sys.stdout))

    download_dir = Path(__file__).parent.resolve() / "dependencies"

    if download_dir.is_dir():
        logging.info('%s exists. Skipping download.', download_dir)
    else:
        main(download_dir)
