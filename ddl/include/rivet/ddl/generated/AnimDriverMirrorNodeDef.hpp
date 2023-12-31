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

#include <rivet/ddl/generated/enums/xf92271f3.hpp> 

namespace rivet::ddl::generated {
	struct AnimDriverConnectionDef; 

	struct RIVET_DDL_SHARED AnimDriverMirrorNodeDef : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "AnimDriverMirrorNodeDef";
		constexpr static rivet::rivet_type_id type_id = 0xa6e49e13;

		constexpr static std::string_view Name_type_name = "Name";
		constexpr static rivet::rivet_type_id Name_type_id = 0x6eb3beb6;
		constexpr static std::string_view DisplayName_type_name = "DisplayName";
		constexpr static rivet::rivet_type_id DisplayName_type_id = 0xeaf33243;
		constexpr static std::string_view x_type_name = "x";
		constexpr static rivet::rivet_type_id x_type_id = 0x655d6145;
		constexpr static std::string_view y_type_name = "y";
		constexpr static rivet::rivet_type_id y_type_id = 0x125a51d3;
		constexpr static std::string_view Axis_type_name = "Axis";
		constexpr static rivet::rivet_type_id Axis_type_id = 0xb59f464a;
		constexpr static std::string_view Connection_type_name = "Connection";
		constexpr static rivet::rivet_type_id Connection_type_id = 0xf2c12d5f; 

		explicit AnimDriverMirrorNodeDef() = default;
		explicit AnimDriverMirrorNodeDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view Name {};
		std::string_view DisplayName {};
		float x {};
		float y {};
		rivet::ddl::generated::xf92271f3 Axis {};
		std::shared_ptr<rivet::ddl::generated::AnimDriverConnectionDef> Connection {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AnimDriverMirrorNodeDef>;
	};
} // namespace rivet::ddl::generated

// clang-format on
