// SPDX-FileCopyrightText: 2025-2026 Neptuwunium
//
// SPDX-License-Identifier: EUPL-1.2

#pragma once

#define WIN32_LEAN_AND_MEAN
#include <windows.h>

#include <vector>
#include <string_view>

#include "signature_types.hpp"

namespace rivet_hook {
	std::vector<uint8_t *>
	find_function(const std::string_view &name, HMODULE game, const hex_signature &signature);

	void
	create_hook(const std::string_view &name, LPVOID pointer, LPVOID detour, LPVOID *original);

	void
	create_hook(const std::string_view &name, HMODULE game, const hex_signature &signature, LPVOID detour, LPVOID *original, size_t limit = 1, int select = 0);
	
	namespace runtime {
		void
		init();

		void
		fini();
	} // namespace runtime
} // namespace rivet_hook
