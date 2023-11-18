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
	struct DDLVector3; 

	struct RIVET_DDL_SHARED WindGustEventData : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "WindGustEventData";
		constexpr static rivet::rivet_type_id type_id = 0xcb00dec0;

		constexpr static std::string_view Attack_type_name = "Attack";
		constexpr static rivet::rivet_type_id Attack_type_id = 0x79b8635c;
		constexpr static std::string_view Sustain_type_name = "Sustain";
		constexpr static rivet::rivet_type_id Sustain_type_id = 0x17e67af0;
		constexpr static std::string_view Decay_type_name = "Decay";
		constexpr static rivet::rivet_type_id Decay_type_id = 0xa0950b67;
		constexpr static std::string_view Position_type_name = "Position";
		constexpr static rivet::rivet_type_id Position_type_id = 0xbc2d5985;
		constexpr static std::string_view Direction_type_name = "Direction";
		constexpr static rivet::rivet_type_id Direction_type_id = 0xbcb74ebf;
		constexpr static std::string_view Speed_type_name = "Speed";
		constexpr static rivet::rivet_type_id Speed_type_id = 0x16753237;
		constexpr static std::string_view Drag_type_name = "Drag";
		constexpr static rivet::rivet_type_id Drag_type_id = 0x5dd56ddb;
		constexpr static std::string_view Radius_type_name = "Radius";
		constexpr static rivet::rivet_type_id Radius_type_id = 0x504203d;
		constexpr static std::string_view Height_type_name = "Height";
		constexpr static rivet::rivet_type_id Height_type_id = 0xcb35ab68;
		constexpr static std::string_view RadialFalloff_type_name = "RadialFalloff";
		constexpr static rivet::rivet_type_id RadialFalloff_type_id = 0x454d6db6;
		constexpr static std::string_view HeightFalloff_type_name = "HeightFalloff";
		constexpr static rivet::rivet_type_id HeightFalloff_type_id = 0x1eb37744;
		constexpr static std::string_view Type_type_name = "Type";
		constexpr static rivet::rivet_type_id Type_type_id = 0xbc4e9799; 

		explicit WindGustEventData() = default;
		explicit WindGustEventData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float Attack {};
		float Sustain {};
		float Decay {};
		std::shared_ptr<rivet::ddl::generated::DDLVector3> Position {};
		std::shared_ptr<rivet::ddl::generated::DDLVector3> Direction {};
		float Speed {};
		float Drag {};
		float Radius {};
		float Height {};
		float RadialFalloff {};
		float HeightFalloff {};
		uint32_t Type {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WindGustEventData>;
	};
} // namespace rivet::ddl::generated

// clang-format on
