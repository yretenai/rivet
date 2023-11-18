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

#include <rivet/ddl/generated/enums/x5c4496c6.hpp> 

namespace rivet::ddl::generated {
	struct DDLVector3;
	struct GalacticMapAccessCinematic;
	struct InteractGeneralOfferPrius; 

	struct RIVET_DDL_SHARED GalacticMapAccessPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "GalacticMapAccessPrius";
		constexpr static rivet::rivet_type_id type_id = 0x11ea6377;

		constexpr static std::string_view StartEnabled_type_name = "StartEnabled";
		constexpr static rivet::rivet_type_id StartEnabled_type_id = 0x6f36ca8b;
		constexpr static std::string_view DoManualLevelChange_type_name = "DoManualLevelChange";
		constexpr static rivet::rivet_type_id DoManualLevelChange_type_id = 0x7349997a;
		constexpr static std::string_view ShipType_type_name = "ShipType";
		constexpr static rivet::rivet_type_id ShipType_type_id = 0xde246fbe;
		constexpr static std::string_view InteractOfferPrius_type_name = "InteractOfferPrius";
		constexpr static rivet::rivet_type_id InteractOfferPrius_type_id = 0xb5acc8f8;
		constexpr static std::string_view UseActorAsActorA_type_name = "UseActorAsActorA";
		constexpr static rivet::rivet_type_id UseActorAsActorA_type_id = 0x163e137;
		constexpr static std::string_view LandCinematic_type_name = "LandCinematic";
		constexpr static rivet::rivet_type_id LandCinematic_type_id = 0xb752d0f8;
		constexpr static std::string_view AccessMapCinematic_type_name = "AccessMapCinematic";
		constexpr static rivet::rivet_type_id AccessMapCinematic_type_id = 0xac2102f5;
		constexpr static std::string_view ExitMapCinematic_type_name = "ExitMapCinematic";
		constexpr static rivet::rivet_type_id ExitMapCinematic_type_id = 0xcc28c433;
		constexpr static std::string_view TakeOffCinematic_type_name = "TakeOffCinematic";
		constexpr static rivet::rivet_type_id TakeOffCinematic_type_id = 0xd138225d;
		constexpr static std::string_view CineOffset_type_name = "CineOffset";
		constexpr static rivet::rivet_type_id CineOffset_type_id = 0x127014d;
		constexpr static std::string_view GetOutHeroOffset_type_name = "GetOutHeroOffset";
		constexpr static rivet::rivet_type_id GetOutHeroOffset_type_id = 0x64e8d641;
		constexpr static std::string_view DoorActor_type_name = "DoorActor";
		constexpr static rivet::rivet_type_id DoorActor_type_id = 0x1432f73b;
		constexpr static std::string_view LandHeroWarpVol_type_name = "LandHeroWarpVol";
		constexpr static rivet::rivet_type_id LandHeroWarpVol_type_id = 0x921cae9d;
		constexpr static std::string_view LocationText_type_name = "LocationText";
		constexpr static rivet::rivet_type_id LocationText_type_id = 0x748ea216;
		constexpr static std::string_view LocTextDuration_type_name = "LocTextDuration";
		constexpr static rivet::rivet_type_id LocTextDuration_type_id = 0xf6a78361;
		constexpr static std::string_view LocTextDelay_type_name = "LocTextDelay";
		constexpr static rivet::rivet_type_id LocTextDelay_type_id = 0x21073557; 

		explicit GalacticMapAccessPrius() = default;
		explicit GalacticMapAccessPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		bool StartEnabled {};
		bool DoManualLevelChange {};
		rivet::ddl::generated::x5c4496c6 ShipType {};
		std::shared_ptr<rivet::ddl::generated::InteractGeneralOfferPrius> InteractOfferPrius {};
		bool UseActorAsActorA {};
		std::shared_ptr<rivet::ddl::generated::GalacticMapAccessCinematic> LandCinematic {};
		std::shared_ptr<rivet::ddl::generated::GalacticMapAccessCinematic> AccessMapCinematic {};
		std::shared_ptr<rivet::ddl::generated::GalacticMapAccessCinematic> ExitMapCinematic {};
		std::shared_ptr<rivet::ddl::generated::GalacticMapAccessCinematic> TakeOffCinematic {};
		std::shared_ptr<rivet::ddl::generated::DDLVector3> CineOffset {};
		std::shared_ptr<rivet::ddl::generated::DDLVector3> GetOutHeroOffset {};
		uint64_t DoorActor {};
		uint64_t LandHeroWarpVol {};
		std::string_view LocationText {};
		float LocTextDuration {};
		float LocTextDelay {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GalacticMapAccessPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
