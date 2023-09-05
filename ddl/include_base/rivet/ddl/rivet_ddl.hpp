// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

#include <cstdint>
#include <string_view>

#include <rivet/rivet_keywords.hpp>

namespace rivet::ddl {
	const uint64_t local_version = 815;

	RIVET_DDL_SHARED auto
	ddl_version() -> uint64_t;

	RIVET_DDL_SHARED auto
	ddl_version_detailed() -> std::string_view;

	RIVET_DDL_SHARED void
	register_ddl_types();
} // namespace rivet::ddl
