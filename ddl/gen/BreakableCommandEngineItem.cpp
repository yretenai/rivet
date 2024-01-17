// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/BreakableCommandEngineItem.hpp>

namespace rivet::ddl::generated {
	BreakableCommandEngineItem::BreakableCommandEngineItem([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ActorInstEngineItemId = serialized->get_uint64(ActorInstEngineItemId_type_id, 0);
		ActorHandleList = serialized->get_uint32s(ActorHandleList_type_id);
		BreakableAssetId = serialized->get_uint64(BreakableAssetId_type_id, 0);
		Command = serialized->get_enum<rivet::ddl::generated::x855c1439>(Command_type_id, rivet::ddl::generated::x855c1439_values, rivet::ddl::generated::x855c1439::DestroyActor);
		AnimationDriverName = serialized->get_string(AnimationDriverName_type_id, {});
		GameEventName = serialized->get_string(GameEventName_type_id, {});
		HealthAfter = serialized->get_float(HealthAfter_type_id, 0.000000);
		HealthBefore = serialized->get_float(HealthBefore_type_id, 0.000000);
		LookName = serialized->get_string(LookName_type_id, {});
		ReplaceActorAssetPath = serialized->get_string(ReplaceActorAssetPath_type_id, {}); 
	}

	[[nodiscard]] auto
	BreakableCommandEngineItem::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BreakableCommandEngineItem::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BreakableCommandEngineItem> {
		if (incoming_type_id == BreakableCommandEngineItem::type_id) {
			return std::make_shared<BreakableCommandEngineItem>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
