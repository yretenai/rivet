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

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED JointShrinkDeathPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "JointShrinkDeathPrius";
		constexpr static rivet::rivet_type_id type_id = 0x6de00c16;

		constexpr static std::string_view StartDelay_type_name = "StartDelay";
		constexpr static rivet::rivet_type_id StartDelay_type_id = 0xcaf1ec7f;
		constexpr static std::string_view ShrinkTime_type_name = "ShrinkTime";
		constexpr static rivet::rivet_type_id ShrinkTime_type_id = 0xdc74a2;
		constexpr static std::string_view JointMoveSpeed_type_name = "JointMoveSpeed";
		constexpr static rivet::rivet_type_id JointMoveSpeed_type_id = 0x452317af; 

		explicit JointShrinkDeathPrius() = default;
		explicit JointShrinkDeathPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float StartDelay {};
		float ShrinkTime {};
		float JointMoveSpeed {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<JointShrinkDeathPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
