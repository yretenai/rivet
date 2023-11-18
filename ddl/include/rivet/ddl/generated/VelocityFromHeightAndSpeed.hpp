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

#include <rivet/ddl/generated/GrenadeVelocityMode.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED VelocityFromHeightAndSpeed : GrenadeVelocityMode {
		constexpr static std::string_view type_name = "VelocityFromHeightAndSpeed";
		constexpr static rivet::rivet_type_id type_id = 0x67daf6ce;

		constexpr static std::string_view Height_type_name = "Height";
		constexpr static rivet::rivet_type_id Height_type_id = 0xcb35ab68;
		constexpr static std::string_view Speed_type_name = "Speed";
		constexpr static rivet::rivet_type_id Speed_type_id = 0x16753237; 

		explicit VelocityFromHeightAndSpeed() = default;
		explicit VelocityFromHeightAndSpeed([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float Height {};
		float Speed {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VelocityFromHeightAndSpeed>;
	};
} // namespace rivet::ddl::generated

// clang-format on
