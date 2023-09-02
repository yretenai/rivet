// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

#include <cstdint>
#include <string_view>

#include <rivet/rivet_keywords.hpp>

namespace rivet {
	const uint64_t local_version = 6;

	RIVET_SHARED auto
	rivet_version() -> uint64_t;

	RIVET_SHARED auto
	rivet_version_detailed() -> std::string_view;
} // namespace rivet
