// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

#include <cstdint>

#include "signature_engine.hpp"

namespace rivet_hook {
	MAKE_SIGNATURE(DDL_HASH_MAP, "0f 57 c0 48 8d ?? ?? ?? ?? ?? 0f 11 05 ?? ?? ?? ?? 0f 11 05 ?? ?? ?? ?? 0f 11 05")
	MAKE_SIGNATURE(DDL_TYPE_LIST, "48 8d ?? ?? ?? ?? ?? 66 89 41 14 8b ?? ?? ?? ?? ?? 48 89 ?? ?? ff c0 89 ?? ?? ?? ?? ?? c3")
	MAKE_SIGNATURE(CONTEXT_LOG, "65 48 8b 04 25 58 00 00 00 48 85 c9 44 8b 05")
	MAKE_SIGNATURE(LOG, "48 89 54 24 10 33 c0 4c 89 44 24 18 4c 89 4c 24 20")
	MAKE_SIGNATURE(CRASH_HANDLER, "40 53 48 83 ec 20 80 79 38 00 48 8b d9 75 ?? e8 ?? 00 00 00 48 8d")
	MAKE_SIGNATURE(VERSION, "48 0F BE C1 48 8D 0D ?? ?? ?? ?? 48 8B 04 C1 C3 8B")
	MAKE_SIGNATURE(VERSION_HASH, "48 0F BE C1 48 8D 0D ?? ?? ?? ?? 8B 04 81 C3")

	constexpr const uint32_t VERSION_ADDRESS = 0x6;
	constexpr const uint32_t VERSION_HASH_ADDRESS = 0x6;
	constexpr const uint32_t VERSION_RIP = 0xA;
	constexpr const uint32_t VERSION_HASH_RIP = 0xA;
} // namespace rivet_hook
