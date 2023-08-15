// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

#include <cstdint>

#include <rivet/rivet_keywords.hpp>

namespace rivet {
	const uint64_t local_version = 1;
	RIVET_SHARED uint64_t rivet_version();
}
