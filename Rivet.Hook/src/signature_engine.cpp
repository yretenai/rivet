// SPDX-FileCopyrightText: 2025-2026 Neptuwunium
//
// SPDX-License-Identifier: EUPL-1.2

#define WIN32_LEAN_AND_MEAN
#include <windows.h>

#include <psapi.h>
#include <algorithm>
#include <array>
#include <cstdint>
#include <string_view>
#include <vector>

#include "signature_types.hpp"
#include "signature_engine.hpp"

#pragma clang diagnostic push
#pragma ide diagnostic ignored "cppcoreguidelines-pro-bounds-pointer-arithmetic"

auto
rivet_hook::scan(HMODULE module, const hex_signature &signature) -> std::vector<uint8_t *> {
	std::vector<uint8_t *> results;

	MODULEINFO module_info;
	if (!GetModuleInformation(GetCurrentProcess(), module, &module_info, sizeof(module_info))) {
		return results;
	}

	auto *start = reinterpret_cast<uint8_t *>(module);
	auto *module_end = start + module_info.SizeOfImage;
	auto *cur = start;

	while (cur < module_end) {
		// get the memory information
		MEMORY_BASIC_INFORMATION mem;
		if ((VirtualQuery(cur, &mem, sizeof(mem)) == 0u) || mem.State != MEM_COMMIT || ((mem.Protect & PAGE_GUARD) != 0u)) {
			break;
		}

		auto *begin = reinterpret_cast<uint8_t *>(mem.BaseAddress);
		auto *end = begin + mem.RegionSize;

		// search for the signature
		uint8_t *found = std::search(begin, end, signature.signature.begin(), signature.signature.begin() + signature.size);
		while (found < end && found >= begin) {
			results.push_back(found);
			found = std::search(found + signature.size, end, signature.signature.begin(), signature.signature.begin() + signature.size);
		}

		cur = end;
		mem = {};
	}

	return results;
}

#pragma clang diagnostic pop
