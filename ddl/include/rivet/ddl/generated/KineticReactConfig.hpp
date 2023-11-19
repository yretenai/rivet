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
	struct AirborneData;
	struct FlyBackData;
	struct DazeData; 

	struct RIVET_DDL_SHARED KineticReactConfig : ConfigBase {
		constexpr static std::string_view type_name = "KineticReactConfig";
		constexpr static rivet::rivet_type_id type_id = 0xfaa83c66;

		constexpr static std::string_view Daze_type_name = "Daze";
		constexpr static rivet::rivet_type_id Daze_type_id = 0x48dda44;
		constexpr static std::string_view FlyBack_type_name = "FlyBack";
		constexpr static rivet::rivet_type_id FlyBack_type_id = 0x13ac3913;
		constexpr static std::string_view Airborne_type_name = "Airborne";
		constexpr static rivet::rivet_type_id Airborne_type_id = 0xcac2cb78;
		constexpr static std::string_view PopUp_type_name = "PopUp";
		constexpr static rivet::rivet_type_id PopUp_type_id = 0x86de8c3b;
		constexpr static std::string_view BaseCollisionDamage_type_name = "BaseCollisionDamage";
		constexpr static rivet::rivet_type_id BaseCollisionDamage_type_id = 0x25ffad5a;
		constexpr static std::string_view MinCollisionSpeed_type_name = "MinCollisionSpeed";
		constexpr static rivet::rivet_type_id MinCollisionSpeed_type_id = 0xa594196c;
		constexpr static std::string_view AutoKillFallDistance_type_name = "AutoKillFallDistance";
		constexpr static rivet::rivet_type_id AutoKillFallDistance_type_id = 0x9e091598;
		constexpr static std::string_view AutoTargetCone_type_name = "AutoTargetCone";
		constexpr static rivet::rivet_type_id AutoTargetCone_type_id = 0xd2eed65b; 

		explicit KineticReactConfig() = default;
		explicit KineticReactConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::DazeData> Daze {};
		std::shared_ptr<rivet::ddl::generated::FlyBackData> FlyBack {};
		std::shared_ptr<rivet::ddl::generated::AirborneData> Airborne {};
		std::shared_ptr<rivet::ddl::generated::AirborneData> PopUp {};
		float BaseCollisionDamage {};
		float MinCollisionSpeed {};
		float AutoKillFallDistance {};
		float AutoTargetCone {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<KineticReactConfig>;
	};
} // namespace rivet::ddl::generated

// clang-format on