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
	struct AnimGestureDef; 

	struct RIVET_DDL_SHARED AnimGestureUpdateData : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "AnimGestureUpdateData";
		constexpr static rivet::rivet_type_id type_id = 0x1c9848c1;

		constexpr static std::string_view Elems_type_name = "Elems";
		constexpr static rivet::rivet_type_id Elems_type_id = 0xa810b7fd; 

		explicit AnimGestureUpdateData() = default;
		explicit AnimGestureUpdateData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<std::shared_ptr<rivet::ddl::generated::AnimGestureDef>> Elems {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AnimGestureUpdateData>;
	};
} // namespace rivet::ddl::generated

// clang-format on
