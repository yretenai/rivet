// SPDX-FileCopyrightText: 2025-2026 Neptuwunium
//
// SPDX-License-Identifier: EUPL-1.2

#pragma once

#define WIN32_LEAN_AND_MEAN
#include <windows.h>

#include <vector>
#include <string_view>
#include <fstream>

#include "signature_types.hpp"
#include "settings.hpp"

namespace rivet_hook {
	extern std::ofstream g_output;
	extern rivet_hook::Settings g_settings;
	extern HMODULE g_game_module;

	auto
	find_function(const std::string_view &name, HMODULE game, const hex_signature &signature) -> std::vector<uint8_t *>;

	auto
	create_hook(const std::string_view &name, LPVOID pointer, LPVOID detour, LPVOID *original) -> void;

	auto
	create_hook(const std::string_view &name, HMODULE game, const hex_signature &signature, LPVOID detour, LPVOID *original, size_t limit = 1, int select = 0) -> void;

	namespace runtime {
		auto init() -> void;
		auto fini() -> void;
	} // namespace runtime
} // namespace rivet_hook
