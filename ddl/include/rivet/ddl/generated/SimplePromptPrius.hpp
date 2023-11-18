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

#include <rivet/ddl/generated/enums/x275d9b04.hpp> 

namespace rivet::ddl::generated {
	struct DDLVector3; 

	struct RIVET_DDL_SHARED SimplePromptPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "SimplePromptPrius";
		constexpr static rivet::rivet_type_id type_id = 0x38b128e6;

		constexpr static std::string_view TriggerCount_type_name = "TriggerCount";
		constexpr static rivet::rivet_type_id TriggerCount_type_id = 0xebd996d0;
		constexpr static std::string_view RetriggerDelay_type_name = "RetriggerDelay";
		constexpr static rivet::rivet_type_id RetriggerDelay_type_id = 0xffff3a00;
		constexpr static std::string_view PromptText_type_name = "PromptText";
		constexpr static rivet::rivet_type_id PromptText_type_id = 0x4e875b9d;
		constexpr static std::string_view Tag_type_name = "Tag";
		constexpr static rivet::rivet_type_id Tag_type_id = 0x29dc9e4a;
		constexpr static std::string_view UseRange_type_name = "UseRange";
		constexpr static rivet::rivet_type_id UseRange_type_id = 0x6a4e2be2;
		constexpr static std::string_view VolumeRange_type_name = "VolumeRange";
		constexpr static rivet::rivet_type_id VolumeRange_type_id = 0xa8fbfba2;
		constexpr static std::string_view AltPromptVolume_type_name = "AltPromptVolume";
		constexpr static rivet::rivet_type_id AltPromptVolume_type_id = 0x5feec1a4;
		constexpr static std::string_view PromptOffset_type_name = "PromptOffset";
		constexpr static rivet::rivet_type_id PromptOffset_type_id = 0xec8ca6ca;
		constexpr static std::string_view PromptAngleMin_type_name = "PromptAngleMin";
		constexpr static rivet::rivet_type_id PromptAngleMin_type_id = 0x34a61898;
		constexpr static std::string_view PromptAngleMax_type_name = "PromptAngleMax";
		constexpr static rivet::rivet_type_id PromptAngleMax_type_id = 0x8ab27c1;
		constexpr static std::string_view UsePOI_type_name = "UsePOI";
		constexpr static rivet::rivet_type_id UsePOI_type_id = 0x72826ad6;
		constexpr static std::string_view POISubtype_type_name = "POISubtype";
		constexpr static rivet::rivet_type_id POISubtype_type_id = 0xfeb66587;
		constexpr static std::string_view PreviewRange_type_name = "PreviewRange";
		constexpr static rivet::rivet_type_id PreviewRange_type_id = 0x1a4186b9;
		constexpr static std::string_view StartActive_type_name = "StartActive";
		constexpr static rivet::rivet_type_id StartActive_type_id = 0x3e035e82;
		constexpr static std::string_view Priority_type_name = "Priority";
		constexpr static rivet::rivet_type_id Priority_type_id = 0x98a76157; 

		explicit SimplePromptPrius() = default;
		explicit SimplePromptPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint32_t TriggerCount {};
		float RetriggerDelay {};
		std::string_view PromptText {};
		std::string_view Tag {};
		float UseRange {};
		bool VolumeRange {};
		uint64_t AltPromptVolume {};
		std::shared_ptr<rivet::ddl::generated::DDLVector3> PromptOffset {};
		float PromptAngleMin {};
		float PromptAngleMax {};
		bool UsePOI {};
		rivet::ddl::generated::x275d9b04 POISubtype {};
		float PreviewRange {};
		bool StartActive {};
		float Priority {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SimplePromptPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
