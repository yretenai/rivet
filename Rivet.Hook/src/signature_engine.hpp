// SPDX-FileCopyrightText: 2025-2026 Neptuwunium
//
// SPDX-License-Identifier: EUPL-1.2

#pragma once

#define WIN32_LEAN_AND_MEAN
#include <windows.h>

#include <cstdint>
#include <string_view>
#include <vector>

#include "signature_types.hpp"

namespace rivet_hook {
	auto scan(HMODULE module, const hex_signature &signature) -> std::vector<uint8_t *>;
} // namespace rivet_hook
