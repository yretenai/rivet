// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/rivet_ddl.hpp>
#include <rivet/structures/rivet_serialization.hpp>

namespace rivet::ddl {
	auto
	ddl_version() -> uint64_t {
		return local_ddl_version;
	}

	// ReSharper disable once CppDFAConstantFunctionResult
	auto
	ddl_version_detailed() -> std::string_view {
		return local_ddl_version_detailed;
	}
} // namespace rivet::ddl
