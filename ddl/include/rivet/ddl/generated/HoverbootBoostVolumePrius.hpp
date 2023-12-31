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
	struct RIVET_DDL_SHARED HoverbootBoostVolumePrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "HoverbootBoostVolumePrius";
		constexpr static rivet::rivet_type_id type_id = 0x278734e7;

		constexpr static std::string_view IsOmnidirectional_type_name = "IsOmnidirectional";
		constexpr static rivet::rivet_type_id IsOmnidirectional_type_id = 0xac0f3253;
		constexpr static std::string_view IsJump_type_name = "IsJump";
		constexpr static rivet::rivet_type_id IsJump_type_id = 0x38f65d7d;
		constexpr static std::string_view JumpTargetActor_type_name = "JumpTargetActor";
		constexpr static rivet::rivet_type_id JumpTargetActor_type_id = 0xac22c0f; 

		explicit HoverbootBoostVolumePrius() = default;
		explicit HoverbootBoostVolumePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		bool IsOmnidirectional {};
		bool IsJump {};
		uint64_t JumpTargetActor {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HoverbootBoostVolumePrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
