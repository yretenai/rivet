// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/StructuredLogAnimTreeCinematicClipNode.hpp> 

#include <rivet/ddl/generated/StructuredLogAnimTreeClipNode.hpp>

namespace rivet::ddl::generated {
	StructuredLogAnimTreeClipNode::StructuredLogAnimTreeClipNode([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): StructuredLogAnimTreeNode(serialized) {
		Time = serialized->get_float(Time_type_id, 0.000000f);
		TimeMotion = serialized->get_float(TimeMotion_type_id, 0.000000f);
		TimePrevMotion = serialized->get_float(TimePrevMotion_type_id, 0.000000f);
		Rate = serialized->get_float(Rate_type_id, 0.000000f); 
	}

	[[nodiscard]] auto
	StructuredLogAnimTreeClipNode::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	StructuredLogAnimTreeClipNode::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<StructuredLogAnimTreeClipNode> {
		if (incoming_type_id == StructuredLogAnimTreeClipNode::type_id) {
			return std::make_shared<StructuredLogAnimTreeClipNode>(serialized);
		}

		auto StructuredLogAnimTreeCinematicClipNode_ptr = StructuredLogAnimTreeCinematicClipNode::from_substruct(incoming_type_id, serialized);
		if (StructuredLogAnimTreeCinematicClipNode_ptr != nullptr) {
			return StructuredLogAnimTreeCinematicClipNode_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
