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
	struct AnimDriverBlendElemDef; 

	struct RIVET_DDL_SHARED UI_AnimDriverBlendElemDefList : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "UI_AnimDriverBlendElemDefList";
		constexpr static rivet::rivet_type_id type_id = 0xa849bc26;

		constexpr static std::string_view Intervals_type_name = "Intervals";
		constexpr static rivet::rivet_type_id Intervals_type_id = 0x955c8dd0; 

		explicit UI_AnimDriverBlendElemDefList() = default;
		explicit UI_AnimDriverBlendElemDefList([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<std::shared_ptr<rivet::ddl::generated::AnimDriverBlendElemDef>> Intervals {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UI_AnimDriverBlendElemDefList>;
	};
} // namespace rivet::ddl::generated

// clang-format on
