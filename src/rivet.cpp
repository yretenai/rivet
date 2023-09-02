// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/rivet.hpp>

namespace rivet {
	auto
	rivet_version() -> uint64_t {
		return rivet::local_version;
	}

	const static std::string_view rivet_version_detailed_string = "0.0.6";

	auto
	rivet_version_detailed() -> std::string_view {
		return rivet_version_detailed_string;
	}
} // namespace rivet
