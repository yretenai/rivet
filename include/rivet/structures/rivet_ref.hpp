// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

#include <rivet/rivet_keywords.hpp>

namespace rivet::structures {
	struct rivet_ref {
		rivet_asset_id asset_id;
		rivet_off name_offset;
		rivet_hash hash;
	};

	static_assert(sizeof(rivet_ref) == 16);
} // namespace rivet::structures
