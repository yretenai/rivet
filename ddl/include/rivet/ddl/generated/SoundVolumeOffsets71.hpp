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
	struct RIVET_DDL_SHARED SoundVolumeOffsets71 : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "SoundVolumeOffsets71";
		constexpr static rivet::rivet_type_id type_id = 0x308e1c61;

		constexpr static std::string_view FrontLeft_type_name = "FrontLeft";
		constexpr static rivet::rivet_type_id FrontLeft_type_id = 0x1dbb6602;
		constexpr static std::string_view FrontRight_type_name = "FrontRight";
		constexpr static rivet::rivet_type_id FrontRight_type_id = 0xcbc8ce5e;
		constexpr static std::string_view Center_type_name = "Center";
		constexpr static rivet::rivet_type_id Center_type_id = 0x7e88a543;
		constexpr static std::string_view RearLeft_type_name = "RearLeft";
		constexpr static rivet::rivet_type_id RearLeft_type_id = 0x13736fac;
		constexpr static std::string_view RearRight_type_name = "RearRight";
		constexpr static rivet::rivet_type_id RearRight_type_id = 0xfaa888b8;
		constexpr static std::string_view SideLeft_type_name = "SideLeft";
		constexpr static rivet::rivet_type_id SideLeft_type_id = 0x9a74df67;
		constexpr static std::string_view SideRight_type_name = "SideRight";
		constexpr static rivet::rivet_type_id SideRight_type_id = 0xf6979430;
		constexpr static std::string_view LFE_type_name = "LFE";
		constexpr static rivet::rivet_type_id LFE_type_id = 0x344c9f03; 

		explicit SoundVolumeOffsets71() = default;
		explicit SoundVolumeOffsets71([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float FrontLeft {};
		float FrontRight {};
		float Center {};
		float RearLeft {};
		float RearRight {};
		float SideLeft {};
		float SideRight {};
		float LFE {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SoundVolumeOffsets71>;
	};
} // namespace rivet::ddl::generated

// clang-format on
