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

#include <rivet/ddl/generated/ConfigBase.hpp> 

namespace rivet::ddl::generated {
	struct MountAbilityContainer;
	struct BotMountData;
	struct HeroMountData; 

	struct RIVET_DDL_SHARED MountConfig : ConfigBase {
		constexpr static std::string_view type_name = "MountConfig";
		constexpr static rivet::rivet_type_id type_id = 0x58612f37;

		constexpr static std::string_view HeroData_type_name = "HeroData";
		constexpr static rivet::rivet_type_id HeroData_type_id = 0x34ae7542;
		constexpr static std::string_view BotData_type_name = "BotData";
		constexpr static rivet::rivet_type_id BotData_type_id = 0x59da994b;
		constexpr static std::string_view MountCameraConfig_type_name = "MountCameraConfig";
		constexpr static rivet::rivet_type_id MountCameraConfig_type_id = 0x1bf25fc0;
		constexpr static std::string_view CameraStickConfig_type_name = "CameraStickConfig";
		constexpr static rivet::rivet_type_id CameraStickConfig_type_id = 0xb3806672;
		constexpr static std::string_view CameraStickAltConfig_type_name = "CameraStickAltConfig";
		constexpr static rivet::rivet_type_id CameraStickAltConfig_type_id = 0x6427a241;
		constexpr static std::string_view Abilities_type_name = "Abilities";
		constexpr static rivet::rivet_type_id Abilities_type_id = 0x3ac512a8; 

		explicit MountConfig() = default;
		explicit MountConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::HeroMountData> HeroData {};
		std::shared_ptr<rivet::ddl::generated::BotMountData> BotData {};
		std::string_view MountCameraConfig {};
		std::string_view CameraStickConfig {};
		std::string_view CameraStickAltConfig {};
		std::vector<std::shared_ptr<rivet::ddl::generated::MountAbilityContainer>> Abilities {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MountConfig>;
	};
} // namespace rivet::ddl::generated

// clang-format on
