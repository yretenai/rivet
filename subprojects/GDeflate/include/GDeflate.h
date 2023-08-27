/*
 * SPDX-FileCopyrightText: Copyright (c) 2020, 2021, 2022 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
 * SPDX-FileCopyrightText: Copyright (c) Microsoft Corportaion. All rights reserved.
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#include <stddef.h>
#include <stdint.h>

#if defined _MSC_VER || defined __CYGWIN__
	#ifdef GDEFLATE_BUILDING
		#define GDEFLATE_SHARED __declspec(dllexport)
	#else
		#define GDEFLATE_SHARED __declspec(dllimport)
	#endif
#else
	#ifdef GDEFLATE_BUILDING
		#define GDEFLATE_SHARED __attribute__ ((visibility ("default")))
	#else
		#define GDEFLATE_SHARED
	#endif
#endif

namespace GDeflate
{
    static constexpr uint8_t kGDeflateId = 4;

    static const size_t kDefaultTileSize = 64 * 1024; /*!< Default tile size */

    // See README.MD in libdeflate_1_8 for details on Compression Levels
    static const uint32_t MinimumCompressionLevel = 1;
    static const uint32_t MaximumCompressionLevel = 12;

    enum Flags
    {
        COMPRESS_SINGLE_THREAD = 0x200, /*!< Force compression using a single thread. */
    };

    GDEFLATE_SHARED size_t CompressBound(size_t size);

    GDEFLATE_SHARED bool Compress(
        uint8_t* output,
        size_t* outputSize,
        const uint8_t* in,
        size_t inSize,
        uint32_t level,
        uint32_t flags);

    GDEFLATE_SHARED bool Decompress(uint8_t* output, size_t outputSize, const uint8_t* in, size_t inSize, uint32_t numWorkers);

} // namespace GDeflate
