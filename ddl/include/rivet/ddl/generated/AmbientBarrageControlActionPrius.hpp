// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

// clang-format off

#include <cstdint>
#include <memory>
#include <string_view>
#include <vector>

#include <rivet/hash/type_id.hpp>
#include <rivet/rivet_array.hpp>
#include <rivet/rivet_keywords.hpp>
#include <rivet/structures/rivet_serialization.hpp>

#include <rivet/ddl/generated/enums/x10228b34.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED AmbientBarrageControlActionPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "AmbientBarrageControlActionPrius";
		constexpr static rivet::rivet_type_id type_id = 0xcc8aca13;

		constexpr static std::string_view ActionType_type_name = "ActionType";
		constexpr static rivet::rivet_type_id ActionType_type_id = 0x874b2194;
		constexpr static std::string_view BarrageConfig_type_name = "BarrageConfig";
		constexpr static rivet::rivet_type_id BarrageConfig_type_id = 0x93fb811c; 

		explicit AmbientBarrageControlActionPrius() = default;
		explicit AmbientBarrageControlActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::x10228b34 ActionType {};
		std::string_view BarrageConfig {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AmbientBarrageControlActionPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
