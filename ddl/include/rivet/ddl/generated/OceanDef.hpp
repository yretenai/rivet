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

	struct RIVET_DDL_SHARED OceanDef : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "OceanDef";
		constexpr static rivet::rivet_type_id type_id = 0xc0ecb8c1;

		constexpr static std::string_view ReflectionMap_type_name = "ReflectionMap";
		constexpr static rivet::rivet_type_id ReflectionMap_type_id = 0xc29852b9;
		constexpr static std::string_view FoamColor_type_name = "FoamColor";
		constexpr static rivet::rivet_type_id FoamColor_type_id = 0xba580abe;
		constexpr static std::string_view WaveAmplitude_type_name = "WaveAmplitude";
		constexpr static rivet::rivet_type_id WaveAmplitude_type_id = 0x6a71a734;
		constexpr static std::string_view ChopScale_type_name = "ChopScale";
		constexpr static rivet::rivet_type_id ChopScale_type_id = 0x9f6d419d;
		constexpr static std::string_view WindSpeed_type_name = "WindSpeed";
		constexpr static rivet::rivet_type_id WindSpeed_type_id = 0x7fbbc235;
		constexpr static std::string_view TimeScale_type_name = "TimeScale";
		constexpr static rivet::rivet_type_id TimeScale_type_id = 0x5fe2ecba;
		constexpr static std::string_view Darkening_type_name = "Darkening";
		constexpr static rivet::rivet_type_id Darkening_type_id = 0x857bffc4;
		constexpr static std::string_view Depth_type_name = "Depth";
		constexpr static rivet::rivet_type_id Depth_type_id = 0xe3f0d0a8;
		constexpr static std::string_view Color_type_name = "Color";
		constexpr static rivet::rivet_type_id Color_type_id = 0x7f058428;
		constexpr static std::string_view WindIndependence_type_name = "WindIndependence";
		constexpr static rivet::rivet_type_id WindIndependence_type_id = 0x45d79277;
		constexpr static std::string_view Normalz_type_name = "Normalz";
		constexpr static rivet::rivet_type_id Normalz_type_id = 0xc47eb79e;
		constexpr static std::string_view FoamAmp_type_name = "FoamAmp";
		constexpr static rivet::rivet_type_id FoamAmp_type_id = 0x11528a14;
		constexpr static std::string_view FoamBias_type_name = "FoamBias";
		constexpr static rivet::rivet_type_id FoamBias_type_id = 0x95a28253;
		constexpr static std::string_view FoamEmit_type_name = "FoamEmit";
		constexpr static rivet::rivet_type_id FoamEmit_type_id = 0x59c10d9d;
		constexpr static std::string_view FoamFade_type_name = "FoamFade";
		constexpr static rivet::rivet_type_id FoamFade_type_id = 0x9d7005a8;
		constexpr static std::string_view FoamPower_type_name = "FoamPower";
		constexpr static rivet::rivet_type_id FoamPower_type_id = 0x778443f7;
		constexpr static std::string_view WaveElongate_type_name = "WaveElongate";
		constexpr static rivet::rivet_type_id WaveElongate_type_id = 0xffd4376b;
		constexpr static std::string_view Cascade0_type_name = "Cascade0";
		constexpr static rivet::rivet_type_id Cascade0_type_id = 0x4db5ac36;
		constexpr static std::string_view Cascade1_type_name = "Cascade1";
		constexpr static rivet::rivet_type_id Cascade1_type_id = 0x3ab29ca0;
		constexpr static std::string_view Cascade2_type_name = "Cascade2";
		constexpr static rivet::rivet_type_id Cascade2_type_id = 0xa3bbcd1a;
		constexpr static std::string_view Cascade3_type_name = "Cascade3";
		constexpr static rivet::rivet_type_id Cascade3_type_id = 0xd4bcfd8c;
		constexpr static std::string_view Tile0_type_name = "Tile0";
		constexpr static rivet::rivet_type_id Tile0_type_id = 0xea935850;
		constexpr static std::string_view Tile1_type_name = "Tile1";
		constexpr static rivet::rivet_type_id Tile1_type_id = 0x9d9468c6;
		constexpr static std::string_view Tile2_type_name = "Tile2";
		constexpr static rivet::rivet_type_id Tile2_type_id = 0x49d397c;
		constexpr static std::string_view Tile3_type_name = "Tile3";
		constexpr static rivet::rivet_type_id Tile3_type_id = 0x739a09ea;
		constexpr static std::string_view Wave0_type_name = "Wave0";
		constexpr static rivet::rivet_type_id Wave0_type_id = 0x79362cc9;
		constexpr static std::string_view Wave1_type_name = "Wave1";
		constexpr static rivet::rivet_type_id Wave1_type_id = 0xe311c5f;
		constexpr static std::string_view Wave2_type_name = "Wave2";
		constexpr static rivet::rivet_type_id Wave2_type_id = 0x97384de5;
		constexpr static std::string_view Wave3_type_name = "Wave3";
		constexpr static rivet::rivet_type_id Wave3_type_id = 0xe03f7d73; 

		explicit OceanDef() = default;
		explicit OceanDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view ReflectionMap {};
		std::shared_ptr<rivet::ddl::generated::DDLVector3> FoamColor {};
		float WaveAmplitude {};
		float ChopScale {};
		float WindSpeed {};
		float TimeScale {};
		float Darkening {};
		float Depth {};
		std::shared_ptr<rivet::ddl::generated::DDLVector3> Color {};
		float WindIndependence {};
		float Normalz {};
		float FoamAmp {};
		float FoamBias {};
		float FoamEmit {};
		float FoamFade {};
		float FoamPower {};
		float WaveElongate {};
		float Cascade0 {};
		float Cascade1 {};
		float Cascade2 {};
		float Cascade3 {};
		float Tile0 {};
		float Tile1 {};
		float Tile2 {};
		float Tile3 {};
		float Wave0 {};
		float Wave1 {};
		float Wave2 {};
		float Wave3 {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<OceanDef>;
	};
} // namespace rivet::ddl::generated

// clang-format on
