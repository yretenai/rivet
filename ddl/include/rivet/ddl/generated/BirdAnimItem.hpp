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
	struct RIVET_DDL_SHARED BirdAnimItem : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "BirdAnimItem";
		constexpr static rivet::rivet_type_id type_id = 0x4a126c51;

		constexpr static std::string_view Anim_type_name = "Anim";
		constexpr static rivet::rivet_type_id Anim_type_id = 0x573ba4eb;
		constexpr static std::string_view AnimWeight_type_name = "AnimWeight";
		constexpr static rivet::rivet_type_id AnimWeight_type_id = 0x65e6456; 

		explicit BirdAnimItem() = default;
		explicit BirdAnimItem([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view Anim {};
		float AnimWeight {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BirdAnimItem>;
	};
} // namespace rivet::ddl::generated

// clang-format on
