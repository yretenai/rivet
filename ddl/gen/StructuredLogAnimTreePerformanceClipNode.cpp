// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/StructuredLogAnimTreePerformanceClipNodeGesture.hpp> 

#include <rivet/ddl/generated/StructuredLogAnimTreePerformanceClipNode.hpp>

namespace rivet::ddl::generated {
	StructuredLogAnimTreePerformanceClipNode::StructuredLogAnimTreePerformanceClipNode([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): StructuredLogAnimTreeNode(serialized) {
		Time = serialized->get_float(Time_type_id, 0.000000);
		ClipDuration = serialized->get_float(ClipDuration_type_id, 0.000000);
		Rate = serialized->get_float(Rate_type_id, 0.000000);
		ClipNodeFlags = serialized->get_enum<rivet::ddl::generated::x38a2d189>(ClipNodeFlags_type_id, rivet::ddl::generated::x38a2d189_values, rivet::ddl::generated::x38a2d189::FlagsNone);
		Gestures = serialized->unwrap_into_many<rivet::ddl::generated::StructuredLogAnimTreePerformanceClipNodeGesture>(Gestures_type_id);
		FacialPosesScale = serialized->get_float(FacialPosesScale_type_id, 0.000000); 
	}

	[[nodiscard]] auto
	StructuredLogAnimTreePerformanceClipNode::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	StructuredLogAnimTreePerformanceClipNode::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<StructuredLogAnimTreePerformanceClipNode> {
		if (incoming_type_id == StructuredLogAnimTreePerformanceClipNode::type_id) {
			return std::make_shared<StructuredLogAnimTreePerformanceClipNode>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
