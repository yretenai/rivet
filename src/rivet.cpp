// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/rivet.hpp>

namespace rivet {
	auto
	rivet_version() -> uint64_t {
		return local_version;
	}

	// ReSharper disable once CppDFAConstantFunctionResult
	auto
	rivet_version_detailed() -> std::string_view {
		return local_version_detailed;
	}
} // namespace rivet
