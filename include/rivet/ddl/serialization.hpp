// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

#include <functional>
#include <memory>
#include <optional>
#include <string_view>
#include <vector>

#include <ankerl/unordered_dense.h>

#include <rivet/hash/type_id.hpp>
#include <rivet/rivet_keywords.hpp>
#include <rivet/structures/rivet_serialization.hpp> // IWYU pragma: keep

namespace rivet::ddl {
	struct RIVET_SHARED serialized : rivet::structures::rivet_serialized_object {
		constexpr const static rivet_type_id magic_a = 0;
		constexpr const static rivet_type_id magic_b = 0x03150044;

		std::shared_ptr<rivet_data_array> buffer;
		std::shared_ptr<rivet_array<rivet::structures::rivet_serialized_field>> field_info;

		explicit serialized(const std::shared_ptr<rivet_data_array> &buffer, const std::shared_ptr<rivet_data_array> &dat1);
	};
} // namespace rivet::ddl
