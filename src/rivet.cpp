// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/rivet.hpp>

namespace rivet {
	auto
	rivet_version() -> uint64_t {
		return rivet::local_version;
	}
} // namespace rivet
