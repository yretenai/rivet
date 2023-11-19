// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/StructuredLogAnimTreePerformanceClipNodeGesture.hpp>

namespace rivet::ddl::generated {
	StructuredLogAnimTreePerformanceClipNodeGesture::StructuredLogAnimTreePerformanceClipNodeGesture([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ClipName = serialized->get_string(ClipName_type_id);
		ModelFrom = serialized->get_string(ModelFrom_type_id);
		ModelTo = serialized->get_string(ModelTo_type_id);
		ClipTime = serialized->get_float(ClipTime_type_id);
		ClipWeight = serialized->get_float(ClipWeight_type_id);
		Flags = serialized->get_bitset<rivet::ddl::generated::x442dee57>(Flags_type_id, rivet::ddl::generated::x442dee57_values); 
	}

	[[nodiscard]] auto
	StructuredLogAnimTreePerformanceClipNodeGesture::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	StructuredLogAnimTreePerformanceClipNodeGesture::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<StructuredLogAnimTreePerformanceClipNodeGesture> {
		if (incoming_type_id == StructuredLogAnimTreePerformanceClipNodeGesture::type_id) {
			return std::make_shared<StructuredLogAnimTreePerformanceClipNodeGesture>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated