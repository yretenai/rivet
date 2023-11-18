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

#include <rivet/ddl/generated/enums/AllegianceRelation.hpp>
#include <rivet/ddl/generated/enums/x6bdf4ba1.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED AutoDoorTrigger : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "AutoDoorTrigger";
		constexpr static rivet::rivet_type_id type_id = 0x2d27195;

		constexpr static std::string_view OpenVolume_type_name = "OpenVolume";
		constexpr static rivet::rivet_type_id OpenVolume_type_id = 0xa4855a4b;
		constexpr static std::string_view CloseVolume_type_name = "CloseVolume";
		constexpr static rivet::rivet_type_id CloseVolume_type_id = 0x93c926ff;
		constexpr static std::string_view OpenRange_type_name = "OpenRange";
		constexpr static rivet::rivet_type_id OpenRange_type_id = 0x346adb7f;
		constexpr static std::string_view CloseRange_type_name = "CloseRange";
		constexpr static rivet::rivet_type_id CloseRange_type_id = 0xa02d9f94;
		constexpr static std::string_view AllegianceChoice_type_name = "AllegianceChoice";
		constexpr static rivet::rivet_type_id AllegianceChoice_type_id = 0xa55d1592;
		constexpr static std::string_view AlleginaceRelation_type_name = "AlleginaceRelation";
		constexpr static rivet::rivet_type_id AlleginaceRelation_type_id = 0x245f06f6;
		constexpr static std::string_view AllowBots_type_name = "AllowBots";
		constexpr static rivet::rivet_type_id AllowBots_type_id = 0xa6278caf; 

		explicit AutoDoorTrigger() = default;
		explicit AutoDoorTrigger([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint64_t OpenVolume {};
		uint64_t CloseVolume {};
		float OpenRange {};
		float CloseRange {};
		rivet::ddl::generated::x6bdf4ba1 AllegianceChoice {};
		rivet::ddl::generated::AllegianceRelation AlleginaceRelation {};
		bool AllowBots {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AutoDoorTrigger>;
	};
} // namespace rivet::ddl::generated

// clang-format on
