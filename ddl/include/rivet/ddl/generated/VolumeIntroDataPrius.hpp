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

#include <rivet/ddl/generated/enums/xb717d73b.hpp>
#include <rivet/ddl/generated/IntroDataPrius.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED VolumeIntroDataPrius : IntroDataPrius {
		constexpr static std::string_view type_name = "VolumeIntroDataPrius";
		constexpr static rivet::rivet_type_id type_id = 0xbae45010;

		constexpr static std::string_view Volume_type_name = "Volume";
		constexpr static rivet::rivet_type_id Volume_type_id = 0x87e283b9;
		constexpr static std::string_view Position_type_name = "Position";
		constexpr static rivet::rivet_type_id Position_type_id = 0xbc2d5985;
		constexpr static std::string_view WantsFlank_type_name = "WantsFlank";
		constexpr static rivet::rivet_type_id WantsFlank_type_id = 0xf989be2b;
		constexpr static std::string_view FaceVolumeOrientation_type_name = "FaceVolumeOrientation";
		constexpr static rivet::rivet_type_id FaceVolumeOrientation_type_id = 0xdd83bdc7; 

		explicit VolumeIntroDataPrius() = default;
		explicit VolumeIntroDataPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint64_t Volume {};
		rivet::ddl::generated::xb717d73b Position {};
		bool WantsFlank {};
		bool FaceVolumeOrientation {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VolumeIntroDataPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
