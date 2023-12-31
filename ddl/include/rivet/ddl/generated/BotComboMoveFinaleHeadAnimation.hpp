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

#include <rivet/ddl/generated/BotComboMoveBase.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED BotComboMoveFinaleHeadAnimation : BotComboMoveBase {
		constexpr static std::string_view type_name = "BotComboMoveFinaleHeadAnimation";
		constexpr static rivet::rivet_type_id type_id = 0xa764b97b;

		constexpr static std::string_view PortalActorAsset_type_name = "PortalActorAsset";
		constexpr static rivet::rivet_type_id PortalActorAsset_type_id = 0xfec29c86;
		constexpr static std::string_view HeadActorAsset_type_name = "HeadActorAsset";
		constexpr static rivet::rivet_type_id HeadActorAsset_type_id = 0x7e95e9fa;
		constexpr static std::string_view HeadActorVol_type_name = "HeadActorVol";
		constexpr static rivet::rivet_type_id HeadActorVol_type_id = 0x53f23acb;
		constexpr static std::string_view LookAtActor_type_name = "LookAtActor";
		constexpr static rivet::rivet_type_id LookAtActor_type_id = 0xa37bf657;
		constexpr static std::string_view AnimDriver_type_name = "AnimDriver";
		constexpr static rivet::rivet_type_id AnimDriver_type_id = 0x10f54dce;
		constexpr static std::string_view RemainAfterAttack_type_name = "RemainAfterAttack";
		constexpr static rivet::rivet_type_id RemainAfterAttack_type_id = 0xe09d2afc; 

		explicit BotComboMoveFinaleHeadAnimation() = default;
		explicit BotComboMoveFinaleHeadAnimation([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view PortalActorAsset {};
		std::string_view HeadActorAsset {};
		uint64_t HeadActorVol {};
		uint64_t LookAtActor {};
		std::string_view AnimDriver {};
		bool RemainAfterAttack {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BotComboMoveFinaleHeadAnimation>;
	};
} // namespace rivet::ddl::generated

// clang-format on
