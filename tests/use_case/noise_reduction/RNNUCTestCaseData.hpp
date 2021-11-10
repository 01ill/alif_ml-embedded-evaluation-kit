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
#ifndef RNNUC_TEST_DATA
#define RNNUC_TEST_DATA

#include <cstdint>

/* 1st inference denoised output. */
int16_t denoisedInf0 [480] = {
        0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
        0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
        0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
        0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
        0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
        0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
        0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
        0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
        0x0, 0x0, 0x0, 0x0, 0x1, 0x0, 0x1, 0x1, 0x1, 0x1,
        0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1,
        0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1,
        0x1, 0x1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
        0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
        0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1,
        0x0, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
        0x0, 0x0, 0x0, 0x0, 0x0, -0x1, -0x1, -0x1, -0x1, -0x1,
        -0x1, -0x1, -0x1, -0x1, -0x1, -0x1, -0x1, -0x1, 0x0, -0x1,
        0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
        0x0, -0x1, -0x1, -0x1, -0x1, -0x1, -0x1, -0x1, -0x1, -0x1,
        -0x1, -0x1, -0x1, -0x1, -0x1, -0x1, -0x1, -0x1, -0x1, -0x1,
        -0x1, -0x1, -0x1, -0x1, 0x0, -0x1, 0x0, 0x0, 0x0, 0x0,
        0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
        0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
        0x1, 0x0, 0x1, 0x1, 0x0, 0x1, 0x0, 0x1, 0x1, 0x0,
        0x1, 0x0, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1,
        0x1, 0x1, 0x2, 0x1, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2,
        0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2,
        0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2,
        0x2, 0x2, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3,
        0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x3, 0x3, 0x3,
        0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3,
        0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3,
        0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3,
        0x3, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x2, 0x3, 0x2,
        0x3, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x2,
        0x3, 0x2, 0x2, 0x2, 0x2, 0x2, 0x1, 0x1, 0x1, 0x0,
        0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1,
        0x1, 0x1, 0x2, 0x2, 0x3, 0x3, 0x3, 0x4, 0x4, 0x4,
        0x4, 0x5, 0x4, 0x4, 0x5, 0x4, 0x5, 0x4, 0x4, 0x4,
        0x3, 0x3, 0x2, 0x3, 0x2, 0x1, 0x2, 0x1, 0x1, 0x1,
        0x1, 0x2, 0x2, 0x3, 0x3, 0x4, 0x5, 0x5, 0x7, 0x7,
        0x8, 0x8, 0x9, 0xa, 0x9, 0xa, 0xa, 0xb, 0xa, 0xa,
        0xb, 0xa, 0xa, 0x9, 0xa, 0xa, 0x9, 0xa, 0x8, 0x9,
        0x9, 0x9, 0x9, 0x8, 0xa, 0x9, 0xa, 0xb, 0xb, 0xc,
        0xc, 0xe, 0xf, 0xf, 0x11, 0x11, 0x13, 0x13, 0x14, 0x15,
        0x14, 0x16, 0x14, 0x14, 0x12, 0x11, 0x10, 0xd, 0xd, 0xb,
        0xb, 0xb, 0xa, 0xc, 0xb, 0xd, 0xd, 0xe, 0x11, 0x11,
        0x14, 0x15, 0x17, 0x19, 0x1a, 0x1d, 0x1c, 0x1c, 0x1b, 0x1a,
};

/* 2nd inference denoised output. */
int16_t denoisedInf1 [480] = {
        0x11, 0x17, 0x29, 0x23, 0x33, 0x43, 0x3f, 0x53, 0x52, 0x4b,
        0x46, 0x32, 0x27, 0x13, -0x2, -0x1c, -0x2f, -0x2f, -0x2e, -0x2c,
        -0x34, -0x31, -0x2f, -0x34, -0x30, -0x4a, -0x38, -0x18, -0x25, -0x1a,
        -0x15, -0x14, -0x12, -0x1d, -0x21, -0x2f, -0x32, -0x36, -0x33, -0x29,
        -0x31, -0x23, -0x26, -0x30, -0x2b, -0x38, -0x2e, -0x22, -0x36, -0x53,
        -0x60, -0x5a, -0x62, -0x6c, -0x84, -0xa1, -0xa0, -0xb1, -0xc2, -0xb0,
        -0xa9, -0x9c, -0x85, -0x97, -0xa2, -0x99, -0x9f, -0x9e, -0xa4, -0xa6,
        -0x97, -0x92, -0x8e, -0x9f, -0xb1, -0xb6, -0xbf, -0xc4, -0xcc, -0xae,
        -0x91, -0x8a, -0x7f, -0x8a, -0x84, -0x8e, -0x98, -0x88, -0xa5, -0x9f,
        -0x97, -0xa2, -0x8e, -0x97, -0x88, -0x76, -0x7c, -0x7c, -0x91, -0x85,
        -0x82, -0x88, -0x78, -0x78, -0x5f, -0x55, -0x48, -0x3c, -0x4b, -0x2f,
        -0x3a, -0x48, -0x31, -0x3b, -0x21, -0xc, -0x18, -0x16, -0x29, -0x2e,
        -0x30, -0x39, -0x39, -0x3f, -0x30, -0x2f, -0x3b, -0x30, -0x33, -0x31,
        -0x29, -0x38, -0x3d, -0x36, -0x3e, -0x48, -0x46, -0x46, -0x3a, -0x39,
        -0x42, -0x3a, -0x44, -0x52, -0x53, -0x60, -0x60, -0x66, -0x6d, -0x5b,
        -0x53, -0x47, -0x35, -0x2b, -0x24, -0x26, -0x24, -0x20, -0x20, -0x26,
        -0x23, -0x17, -0xf, -0x6, -0xb, -0xc, -0x22, -0x39, -0x21, -0x25,
        -0x21, -0x17, -0x23, -0x10, -0x24, -0x2b, -0x31, -0x5c, -0x43, -0x42,
        -0x53, -0x33, -0x19, -0x14, -0x28, -0x29, -0x33, -0x36, -0x29, -0x46,
        -0x3c, -0x35, -0x3e, -0x30, -0x49, -0x52, -0x55, -0x5f, -0x56, -0x50,
        -0x47, -0x4b, -0x4f, -0x5e, -0x5e, -0x47, -0x56, -0x4f, -0x37, -0x27,
        -0x15, -0x10, 0x6, 0x15, 0x2b, 0x36, 0x31, 0x45, 0x47, 0x53,
        0x4d, 0x3f, 0x55, 0x53, 0x5d, 0x65, 0x5a, 0x55, 0x45, 0x40,
        0x39, 0x35, 0x32, 0x35, 0x44, 0x36, 0x3d, 0x4b, 0x4c, 0x51,
        0x4c, 0x5a, 0x5b, 0x60, 0x69, 0x58, 0x53, 0x3f, 0x22, -0x1,
        -0x21, -0x20, -0x2a, -0x30, -0x2c, -0x2a, -0x2f, -0x34, -0x28, -0x30,
        -0x31, -0x2d, -0x29, -0x1d, -0x2b, -0x23, -0x1c, -0x20, -0x13, -0x12,
        -0x9, -0x18, -0x1d, -0x17, -0x2c, -0x24, -0x26, -0x2e, -0x29, -0x3c,
        -0x46, -0x51, -0x62, -0x74, -0x80, -0x88, -0x9d, -0xa4, -0xac, -0xa1,
        -0x92, -0x8c, -0x6f, -0x65, -0x53, -0x42, -0x4b, -0x3a, -0x35, -0x44,
        -0x44, -0x46, -0x5c, -0x6f, -0x77, -0x8d, -0x90, -0x96, -0xa3, -0x9c,
        -0xa8, -0xa1, -0x8e, -0x7e, -0x5d, -0x50, -0x40, -0x35, -0x36, -0x30,
        -0x3a, -0x32, -0x2b, -0x34, -0x33, -0x40, -0x51, -0x51, -0x4a, -0x47,
        -0x35, -0x20, -0x19, -0xa, -0xd, -0x1b, -0x15, -0x19, -0x22, -0x1f,
        -0x1c, -0x21, -0x21, -0x17, -0x1e, -0x1d, -0x4, 0x4, 0xd, 0x24,
        0x2c, 0x3d, 0x54, 0x50, 0x58, 0x5f, 0x5d, 0x64, 0x56, 0x5b,
        0x67, 0x60, 0x76, 0x7d, 0x77, 0x8b, 0x96, 0x9b, 0x9e, 0xa3,
        0xa8, 0x9d, 0x9a, 0x9a, 0x87, 0x78, 0x64, 0x49, 0x44, 0x38,
        0x11, -0x11, -0x24, -0x29, -0x35, -0x3f, -0x35, -0x32, -0x20, -0x1a,
        -0x2a, -0x1d, -0x28, -0x3a, -0x3f, -0x53, -0x56, -0x5e, -0x59, -0x41,
        -0x40, -0x2e, -0x22, -0x1a, 0x7, 0x19, 0x27, 0x32, 0x37, 0x38,
        0x23, 0x11, -0x7, -0x1f, -0x29, -0x36, -0x34, -0x35, -0x2f, -0xb,
        0xb, 0x14, 0x25, 0x3f, 0x51, 0x49, 0x54, 0x6a, 0x5f, 0x5b,
        0x66, 0x5d, 0x59, 0x4f, 0x3a, 0x3b, 0x30, 0x2f, 0x2d, 0x1b,
        0x2f, 0x2e, 0x28, 0x3a, 0x2c, 0x37, 0x47, 0x4c, 0x5e, 0x58,
        0x52, 0x4b, 0x45, 0x43, 0x36, 0x3f, 0x42, 0x49, 0x54, 0x4e,
        0x61, 0x60, 0x59, 0x6b, 0x65, 0x60, 0x5e, 0x4e, 0x3d, 0x2e,
        0x2a, 0x2c, 0x2f, 0x2b, 0x30, 0x3d, 0x47, 0x57, 0x61, 0x6d,
};

/* Final denoised results after 134 steps */
int16_t denoisedInf2 [480] = {
        -0x66, -0x8a, -0x8a, -0x6f, -0x99, -0x9c, -0x92, -0xbf, -0xa4, -0xb1,
        -0xf0, -0xf1, -0xf3, -0xe5, -0xf9, -0x107, -0xd2, -0xe8, -0x100, -0xdb,
        -0xda, -0xec, -0xfa, -0xfd, -0xe7, -0xd6, -0xe6, -0xfd, -0x102, -0xfc,
        -0xfd, -0x11f, -0x123, -0x119, -0x11c, -0xf6, -0x10a, -0x130, -0x10f, -0x107,
        -0x106, -0x10e, -0x11f, -0xff, -0xed, -0xf3, -0xee, -0xfb, -0x10f, -0x108,
        -0xe9, -0xd4, -0xda, -0xe7, -0xed, -0xf0, -0xf1, -0x10c, -0xff, -0xd3,
        -0xfb, -0xed, -0xc9, -0x107, -0xe4, -0xbb, -0xe9, -0xeb, -0xf6, -0xfb,
        -0x114, -0x12e, -0x105, -0x116, -0x134, -0x138, -0x149, -0x12a, -0x11a, -0x13c,
        -0x151, -0x13f, -0x13a, -0x16f, -0x176, -0x15d, -0x16d, -0x169, -0x163, -0x170,
        -0x176, -0x181, -0x17d, -0x173, -0x18b, -0x1af, -0x1ad, -0x185, -0x18c, -0x1b0,
        -0x1aa, -0x1b9, -0x1c0, -0x1b7, -0x1d5, -0x1d7, -0x1ca, -0x1cd, -0x1e8, -0x1f3,
        -0x1c6, -0x1cd, -0x1c2, -0x191, -0x1a2, -0x1a3, -0x193, -0x187, -0x19b, -0x1b0,
        -0x184, -0x199, -0x1bb, -0x1a9, -0x196, -0x18c, -0x1b7, -0x1b0, -0x19d, -0x1b9,
        -0x1b2, -0x1c2, -0x1d1, -0x1dd, -0x1ce, -0x1a6, -0x1cf, -0x1e4, -0x1dc, -0x1c9,
        -0x1bc, -0x1e2, -0x1c8, -0x1c7, -0x1d5, -0x1c1, -0x1dc, -0x1bd, -0x1cd, -0x1fe,
        -0x1d7, -0x1e6, -0x1f3, -0x1f3, -0x201, -0x1f0, -0x1f8, -0x1f0, -0x1f4, -0x206,
        -0x1f3, -0x206, -0x20d, -0x1f5, -0x1e1, -0x1d5, -0x1fe, -0x214, -0x1f4, -0x1f3,
        -0x21a, -0x232, -0x214, -0x203, -0x20b, -0x1fc, -0x1f9, -0x1ef, -0x1e5, -0x1ef,
        -0x1de, -0x1dd, -0x1ea, -0x1f2, -0x219, -0x21d, -0x201, -0x1ff, -0x1fa, -0x205,
        -0x21f, -0x215, -0x210, -0x217, -0x20c, -0x21f, -0x223, -0x202, -0x208, -0x21f,
        -0x233, -0x22f, -0x221, -0x229, -0x233, -0x239, -0x218, -0x21d, -0x242, -0x22e,
        -0x23d, -0x239, -0x22f, -0x251, -0x238, -0x22e, -0x22e, -0x234, -0x236, -0x1fc,
        -0x220, -0x254, -0x241, -0x249, -0x250, -0x260, -0x25e, -0x244, -0x24c, -0x267,
        -0x268, -0x25d, -0x272, -0x24e, -0x245, -0x275, -0x259, -0x254, -0x251, -0x252,
        -0x27e, -0x251, -0x23f, -0x25b, -0x24c, -0x254, -0x270, -0x274, -0x265, -0x267,
        -0x265, -0x274, -0x27f, -0x25c, -0x279, -0x282, -0x266, -0x281, -0x271, -0x264,
        -0x26e, -0x262, -0x262, -0x267, -0x270, -0x25e, -0x260, -0x276, -0x269, -0x273,
        -0x286, -0x282, -0x27d, -0x27d, -0x282, -0x292, -0x289, -0x25e, -0x263, -0x253,
        -0x22b, -0x24a, -0x26d, -0x27c, -0x263, -0x251, -0x269, -0x256, -0x25d, -0x263,
        -0x259, -0x26b, -0x267, -0x26e, -0x267, -0x267, -0x265, -0x24f, -0x277, -0x25e,
        -0x24d, -0x28e, -0x26b, -0x251, -0x25b, -0x256, -0x26f, -0x256, -0x245, -0x25c,
        -0x266, -0x26d, -0x266, -0x260, -0x25f, -0x265, -0x25d, -0x254, -0x26b, -0x257,
        -0x252, -0x27d, -0x270, -0x265, -0x274, -0x25a, -0x24d, -0x25b, -0x258, -0x255,
        -0x256, -0x25c, -0x260, -0x247, -0x24b, -0x25a, -0x24e, -0x250, -0x23b, -0x234,
        -0x254, -0x242, -0x22b, -0x241, -0x247, -0x231, -0x22a, -0x223, -0x20c, -0x212,
        -0x219, -0x209, -0x203, -0x203, -0x200, -0x205, -0x217, -0x212, -0x205, -0x20c,
        -0x1ec, -0x1ef, -0x20d, -0x1f2, -0x1ee, -0x1f3, -0x1eb, -0x1e4, -0x1ca, -0x1c6,
        -0x1b7, -0x1b2, -0x1d4, -0x1d9, -0x1b7, -0x199, -0x1b7, -0x1c7, -0x1a5, -0x199,
        -0x18d, -0x1a7, -0x1c0, -0x1a9, -0x1b6, -0x1a7, -0x17f, -0x18c, -0x186, -0x172,
        -0x173, -0x178, -0x192, -0x190, -0x16d, -0x174, -0x17f, -0x179, -0x173, -0x15b,
        -0x167, -0x17b, -0x16b, -0x169, -0x15c, -0x160, -0x16c, -0x156, -0x159, -0x151,
        -0x13f, -0x147, -0x13f, -0x144, -0x133, -0x116, -0x12b, -0x134, -0x120, -0x118,
        -0x115, -0x110, -0x114, -0x125, -0x128, -0x11f, -0x112, -0xfb, -0xf1, -0xe9,
        -0xc2, -0xa7, -0xb3, -0xc3, -0xbf, -0x9f, -0x96, -0xa6, -0xa8, -0xb6,
        -0xa8, -0x8e, -0xa6, -0xb9, -0xb1, -0x9e, -0x96, -0x80, -0x69, -0x6a,
        -0x55, -0x5b, -0x67, -0x69, -0x7b, -0x5d, -0x67, -0x6a, -0x48, -0x66,
        -0x50, -0x37, -0x41, -0x42, -0x45, -0x1a, -0x23, -0x33, -0x27, -0x3a,
        -0x1b, -0xf, -0x4, 0x2, -0x12, 0x8, -0x11, 0x7, 0x29, 0x8,
};

static int16_t* ofms[3] = {denoisedInf0, denoisedInf1, denoisedInf2};

#endif  /* RNNUC_TEST_DATA */