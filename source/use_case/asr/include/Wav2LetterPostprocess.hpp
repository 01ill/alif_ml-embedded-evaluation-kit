/*
 * Copyright (c) 2021 Arm Limited. All rights reserved.
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef ASR_WAV2LETTER_POSTPROCESS_HPP
#define ASR_WAV2LETTER_POSTPROCESS_HPP

#include "TensorFlowLiteMicro.hpp" /* TensorFlow headers. */
#include "hal.h"    /* stdout facility. */

namespace arm {
namespace app {
namespace audio {
namespace asr {

    /**
     * @brief   Helper class to manage tensor post-processing for "wav2letter"
     *          output.
     */
    class Postprocess {
    public:
        /**
         * @brief       Constructor
         * @param[in]   contextLen      Left and right context length for
         *                              output tensor.
         * @param[in]   innerLen        This is the length of the section
         *                              between left and right context.
         **/
        Postprocess(uint32_t contextLen,
                    uint32_t innerLen,
                    uint32_t blankTokenIdx);

        Postprocess() = delete;
        ~Postprocess() = default;

        /**
         * @brief       Erases the required part of the tensor based
         *              on context lengths set up during initialisation.
         * @param[in]   tensor          Pointer to the tensor.
         * @param[in]   axisIdx         Index of the axis on which erase is
         *                              performed.
         * @param[in]   lastIteration   Flag to signal this is the
         *                              last iteration in which case
         *                              the right context is preserved.
         * @return      true if successful, false otherwise.
         */
        bool Invoke(TfLiteTensor*  tensor,
                    uint32_t axisIdx,
                    bool lastIteration = false);

    private:
        uint32_t    _m_contextLen;      /* lengths of left and right contexts. */
        uint32_t    _m_innerLen;        /* Length of inner context. */
        uint32_t    _m_totalLen;        /* Total length of the required axis. */
        uint32_t    _m_countIterations; /* Current number of iterations. */
        uint32_t    _m_blankTokenIdx;   /* Index of the labels blank token. */
        /**
         * @brief       Checks if the tensor and axis index are valid
         *              inputs to the object - based on how it has been
         *              initialised.
         * @return      true if valid, false otherwise.
         */
        bool _IsInputValid(TfLiteTensor*  tensor,
                           uint32_t axisIdx) const;

        /**
         * @brief       Gets the tensor data element size in bytes based
         *              on the tensor type.
         * @return      Size in bytes, 0 if not supported.
         */
        uint32_t _GetTensorElementSize(TfLiteTensor* tensor);

        /**
         * @brief       Erases sections from the data assuming row-wise
         *              arrangement along the context axis.
         * @return      true if successful, false otherwise.
         */
        bool _EraseSectionsRowWise(uint8_t* ptrData,
                                   uint32_t strideSzBytes,
                                   bool lastIteration);

        /**
         * @brief       Erases sections from the data assuming col-wise
         *              arrangement along the context axis.
         * @return      true if successful, false otherwise.
         */
        bool _EraseSectionsColWise(uint8_t* ptrData,
                                   uint32_t strideSzBytes,
                                   bool lastIteration);
    };

} /* namespace asr */
} /* namespace audio */
} /* namespace app */
} /* namespace arm */

#endif /* ASR_WAV2LETTER_POSTPROCESS_HPP */