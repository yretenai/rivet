// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SetActorAnimDriverEngineItem.hpp>

namespace rivet::ddl::generated {
	SetActorAnimDriverEngineItem::SetActorAnimDriverEngineItem([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		AddLayer = serialized->get_bool(AddLayer_type_id);
		AnimDriverName = serialized->get_string(AnimDriverName_type_id); 
	}

	[[nodiscard]] auto
	SetActorAnimDriverEngineItem::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SetActorAnimDriverEngineItem::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SetActorAnimDriverEngineItem> {
		if (incoming_type_id == SetActorAnimDriverEngineItem::type_id) {
			return std::make_shared<SetActorAnimDriverEngineItem>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
