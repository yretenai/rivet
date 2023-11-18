// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/rivet_ddl.hpp>
#include <rivet/structures/rivet_serialization.hpp>

namespace rivet::ddl {
	auto
	ddl_version() -> uint64_t {
		return rivet::ddl::local_version;
	}

	static constexpr std::string_view rivet_version_detailed_string = "ra815";

	// ReSharper disable once CppDFAConstantFunctionResult
	auto
	ddl_version_detailed() -> std::string_view {
		return rivet_version_detailed_string;
	}
} // namespace rivet::ddl
