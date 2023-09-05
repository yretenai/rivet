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

#include <rivet/ddl/generated/ConfigBase.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED RewardHomeRunHitterConfig : ConfigBase {
		constexpr const static std::string_view type_name = "RewardHomeRunHitterConfig";
		constexpr const static rivet::rivet_type_id type_id = 0x9cd64ec9;

		constexpr const static std::string_view DeathAnimScaleXZ_type_name = "DeathAnimScaleXZ";
		constexpr const static rivet::rivet_type_id DeathAnimScaleXZ_type_id = 0xe94266da;
		constexpr const static std::string_view DeathAnimScaleY_type_name = "DeathAnimScaleY";
		constexpr const static rivet::rivet_type_id DeathAnimScaleY_type_id = 0x56c4dfca; 

		explicit RewardHomeRunHitterConfig() = default;
		explicit RewardHomeRunHitterConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float DeathAnimScaleXZ {};
		float DeathAnimScaleY {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RewardHomeRunHitterConfig>;
	};
} // namespace rivet::ddl::generated

// clang-format on
