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

	const static std::string_view rivet_version_detailed_string = "ra815";

	auto
	ddl_version_detailed() -> std::string_view {
		return rivet_version_detailed_string;
	}
} // namespace rivet::ddl
