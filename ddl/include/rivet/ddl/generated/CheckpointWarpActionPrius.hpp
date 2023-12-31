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

#include <rivet/ddl/generated/enums/HeroTypes.hpp>
#include <rivet/ddl/generated/enums/x10228b34.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED CheckpointWarpActionPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "CheckpointWarpActionPrius";
		constexpr static rivet::rivet_type_id type_id = 0x12d39e83;

		constexpr static std::string_view ActionType_type_name = "ActionType";
		constexpr static rivet::rivet_type_id ActionType_type_id = 0x874b2194;
		constexpr static std::string_view CheckpointName_type_name = "CheckpointName";
		constexpr static rivet::rivet_type_id CheckpointName_type_id = 0x71d061f1;
		constexpr static std::string_view DimensionCheckpointName_type_name = "DimensionCheckpointName";
		constexpr static rivet::rivet_type_id DimensionCheckpointName_type_id = 0x821e4847;
		constexpr static std::string_view DesiredHero_type_name = "DesiredHero";
		constexpr static rivet::rivet_type_id DesiredHero_type_id = 0xa8d61efb;
		constexpr static std::string_view ImmediatelySaveCheckpoint_type_name = "ImmediatelySaveCheckpoint";
		constexpr static rivet::rivet_type_id ImmediatelySaveCheckpoint_type_id = 0x6741a7f7; 

		explicit CheckpointWarpActionPrius() = default;
		explicit CheckpointWarpActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::x10228b34 ActionType {};
		std::string_view CheckpointName {};
		std::string_view DimensionCheckpointName {};
		rivet::ddl::generated::HeroTypes DesiredHero {};
		bool ImmediatelySaveCheckpoint {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CheckpointWarpActionPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
