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

#include <rivet/ddl/generated/enums/x6a2f1d70.hpp>
#include <rivet/ddl/generated/enums/xf44aa9d7.hpp>
#include <rivet/ddl/generated/enums/x4cedff8f.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED SoundEventDef : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "SoundEventDef";
		constexpr static rivet::rivet_type_id type_id = 0x934a6afb;

		constexpr static std::string_view Name_type_name = "Name";
		constexpr static rivet::rivet_type_id Name_type_id = 0x6eb3beb6;
		constexpr static std::string_view WwiseId_type_name = "WwiseId";
		constexpr static rivet::rivet_type_id WwiseId_type_id = 0x6bbe2d12;
		constexpr static std::string_view PlatformMask_type_name = "PlatformMask";
		constexpr static rivet::rivet_type_id PlatformMask_type_id = 0xe79ebf67;
		constexpr static std::string_view LanguageMask_type_name = "LanguageMask";
		constexpr static rivet::rivet_type_id LanguageMask_type_id = 0x803ee258;
		constexpr static std::string_view Type_type_name = "Type";
		constexpr static rivet::rivet_type_id Type_type_id = 0xbc4e9799;
		constexpr static std::string_view Dimension_type_name = "Dimension";
		constexpr static rivet::rivet_type_id Dimension_type_id = 0x48665e90;
		constexpr static std::string_view Playback_type_name = "Playback";
		constexpr static rivet::rivet_type_id Playback_type_id = 0x4859572;
		constexpr static std::string_view ExternalSource_type_name = "ExternalSource";
		constexpr static rivet::rivet_type_id ExternalSource_type_id = 0xb20b14fe;
		constexpr static std::string_view MaxAttenuation_type_name = "MaxAttenuation";
		constexpr static rivet::rivet_type_id MaxAttenuation_type_id = 0x5bc7556f;
		constexpr static std::string_view MaxDuration_type_name = "MaxDuration";
		constexpr static rivet::rivet_type_id MaxDuration_type_id = 0x124e0874;
		constexpr static std::string_view MinDuration_type_name = "MinDuration";
		constexpr static rivet::rivet_type_id MinDuration_type_id = 0xde43737b; 

		explicit SoundEventDef() = default;
		explicit SoundEventDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view Name {};
		uint32_t WwiseId {};
		uint32_t PlatformMask {};
		uint32_t LanguageMask {};
		rivet::ddl::generated::x4cedff8f Type {};
		rivet::ddl::generated::xf44aa9d7 Dimension {};
		rivet::ddl::generated::x6a2f1d70 Playback {};
		bool ExternalSource {};
		float MaxAttenuation {};
		float MaxDuration {};
		float MinDuration {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SoundEventDef>;
	};
} // namespace rivet::ddl::generated

// clang-format on