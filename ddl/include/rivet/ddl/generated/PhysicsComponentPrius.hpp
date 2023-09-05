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

#include <rivet/ddl/generated/enums/x11c6712d.hpp> 

namespace rivet::ddl::generated {
	struct PhysicsCustomizationProperties; 

	struct RIVET_DDL_SHARED PhysicsComponentPrius : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "PhysicsComponentPrius";
		constexpr const static rivet::rivet_type_id type_id = 0xcc30dca6;

		constexpr const static std::string_view CollisionOn_type_name = "CollisionOn";
		constexpr const static rivet::rivet_type_id CollisionOn_type_id = 0xc9cff538;
		constexpr const static std::string_view SpawnAs_type_name = "SpawnAs";
		constexpr const static rivet::rivet_type_id SpawnAs_type_id = 0x7ab90501;
		constexpr const static std::string_view RemoveFromAllDomains_type_name = "RemoveFromAllDomains";
		constexpr const static rivet::rivet_type_id RemoveFromAllDomains_type_id = 0x14981a04;
		constexpr const static std::string_view WantsContactEvent_type_name = "WantsContactEvent";
		constexpr const static rivet::rivet_type_id WantsContactEvent_type_id = 0xe426c107;
		constexpr const static std::string_view MatchJointsOnSpawn_type_name = "MatchJointsOnSpawn";
		constexpr const static rivet::rivet_type_id MatchJointsOnSpawn_type_id = 0x61875ae9;
		constexpr const static std::string_view ClothTeleportDistance_type_name = "ClothTeleportDistance";
		constexpr const static rivet::rivet_type_id ClothTeleportDistance_type_id = 0xa3701f0d;
		constexpr const static std::string_view ClothSettleIterations_type_name = "ClothSettleIterations";
		constexpr const static rivet::rivet_type_id ClothSettleIterations_type_id = 0x824abbe3;
		constexpr const static std::string_view ClothSettlingFrameCount_type_name = "ClothSettlingFrameCount";
		constexpr const static rivet::rivet_type_id ClothSettlingFrameCount_type_id = 0xdd1fea4c;
		constexpr const static std::string_view ClothSettleOnSpawn_type_name = "ClothSettleOnSpawn";
		constexpr const static rivet::rivet_type_id ClothSettleOnSpawn_type_id = 0x280c6a7f;
		constexpr const static std::string_view HandleStateActionEvents_type_name = "HandleStateActionEvents";
		constexpr const static rivet::rivet_type_id HandleStateActionEvents_type_id = 0x1771dac9;
		constexpr const static std::string_view CustomProperties_type_name = "CustomProperties";
		constexpr const static rivet::rivet_type_id CustomProperties_type_id = 0x8e301f6c; 

		explicit PhysicsComponentPrius() = default;
		explicit PhysicsComponentPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		bool CollisionOn {};
		rivet::ddl::generated::x11c6712d SpawnAs {};
		bool RemoveFromAllDomains {};
		bool WantsContactEvent {};
		bool MatchJointsOnSpawn {};
		float ClothTeleportDistance {};
		uint8_t ClothSettleIterations {};
		uint8_t ClothSettlingFrameCount {};
		bool ClothSettleOnSpawn {};
		bool HandleStateActionEvents {};
		std::shared_ptr<rivet::ddl::generated::PhysicsCustomizationProperties> CustomProperties {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PhysicsComponentPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
