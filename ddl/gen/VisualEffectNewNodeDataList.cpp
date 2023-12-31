// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/VisualEffectNewNodeData.hpp> 

#include <rivet/ddl/generated/VisualEffectNewNodeDataList.hpp>

namespace rivet::ddl::generated {
	VisualEffectNewNodeDataList::VisualEffectNewNodeDataList([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		NewNodeDataList = serialized->unwrap_into_many<rivet::ddl::generated::VisualEffectNewNodeData>(NewNodeDataList_type_id); 
	}

	[[nodiscard]] auto
	VisualEffectNewNodeDataList::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	VisualEffectNewNodeDataList::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VisualEffectNewNodeDataList> {
		if (incoming_type_id == VisualEffectNewNodeDataList::type_id) {
			return std::make_shared<VisualEffectNewNodeDataList>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
