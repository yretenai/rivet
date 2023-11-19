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

#include <rivet/ddl/generated/enums/x855c1439.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED BreakableCommandEngineItem : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "BreakableCommandEngineItem";
		constexpr static rivet::rivet_type_id type_id = 0x681e6c3e;

		constexpr static std::string_view ActorInstEngineItemId_type_name = "ActorInstEngineItemId";
		constexpr static rivet::rivet_type_id ActorInstEngineItemId_type_id = 0x520a1e16;
		constexpr static std::string_view ActorHandleList_type_name = "ActorHandleList";
		constexpr static rivet::rivet_type_id ActorHandleList_type_id = 0xce335e20;
		constexpr static std::string_view BreakableAssetId_type_name = "BreakableAssetId";
		constexpr static rivet::rivet_type_id BreakableAssetId_type_id = 0xbc9b1502;
		constexpr static std::string_view Command_type_name = "Command";
		constexpr static rivet::rivet_type_id Command_type_id = 0x8f2089ec;
		constexpr static std::string_view AnimationDriverName_type_name = "AnimationDriverName";
		constexpr static rivet::rivet_type_id AnimationDriverName_type_id = 0xf9c7e746;
		constexpr static std::string_view GameEventName_type_name = "GameEventName";
		constexpr static rivet::rivet_type_id GameEventName_type_id = 0x9ab9d761;
		constexpr static std::string_view HealthAfter_type_name = "HealthAfter";
		constexpr static rivet::rivet_type_id HealthAfter_type_id = 0x85f9973a;
		constexpr static std::string_view HealthBefore_type_name = "HealthBefore";
		constexpr static rivet::rivet_type_id HealthBefore_type_id = 0xcde2a74e;
		constexpr static std::string_view LookName_type_name = "LookName";
		constexpr static rivet::rivet_type_id LookName_type_id = 0xad8c1e16;
		constexpr static std::string_view ReplaceActorAssetPath_type_name = "ReplaceActorAssetPath";
		constexpr static rivet::rivet_type_id ReplaceActorAssetPath_type_id = 0x9781341c; 

		explicit BreakableCommandEngineItem() = default;
		explicit BreakableCommandEngineItem([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint64_t ActorInstEngineItemId {};
		std::vector<uint32_t> ActorHandleList {};
		uint64_t BreakableAssetId {};
		rivet::ddl::generated::x855c1439 Command {};
		std::string_view AnimationDriverName {};
		std::string_view GameEventName {};
		float HealthAfter {};
		float HealthBefore {};
		std::string_view LookName {};
		std::string_view ReplaceActorAssetPath {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BreakableCommandEngineItem>;
	};
} // namespace rivet::ddl::generated

// clang-format on