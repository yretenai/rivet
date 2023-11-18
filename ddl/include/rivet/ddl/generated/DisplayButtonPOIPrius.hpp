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

#include <rivet/ddl/generated/enums/HeroTypes.hpp>
#include <rivet/ddl/generated/enums/x89e6bc43.hpp>
#include <rivet/ddl/generated/EnabledComponentBasePrius.hpp> 

namespace rivet::ddl::generated {
	struct DDLVector3; 

	struct RIVET_DDL_SHARED DisplayButtonPOIPrius : EnabledComponentBasePrius {
		constexpr static std::string_view type_name = "DisplayButtonPOIPrius";
		constexpr static rivet::rivet_type_id type_id = 0x5de47d7f;

		constexpr static std::string_view Button_type_name = "Button";
		constexpr static rivet::rivet_type_id Button_type_id = 0x47ee25a;
		constexpr static std::string_view POIOffset_type_name = "POIOffset";
		constexpr static rivet::rivet_type_id POIOffset_type_id = 0x5a1dc6d9;
		constexpr static std::string_view Range_type_name = "Range";
		constexpr static rivet::rivet_type_id Range_type_id = 0x8ad49688;
		constexpr static std::string_view PreviewRange_type_name = "PreviewRange";
		constexpr static rivet::rivet_type_id PreviewRange_type_id = 0x1a4186b9;
		constexpr static std::string_view RequiredHeroType_type_name = "RequiredHeroType";
		constexpr static rivet::rivet_type_id RequiredHeroType_type_id = 0x2553353; 

		explicit DisplayButtonPOIPrius() = default;
		explicit DisplayButtonPOIPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::x89e6bc43 Button {};
		std::shared_ptr<rivet::ddl::generated::DDLVector3> POIOffset {};
		float Range {};
		float PreviewRange {};
		rivet::ddl::generated::HeroTypes RequiredHeroType {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DisplayButtonPOIPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
