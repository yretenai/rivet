// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SegmentedHealthSegment.hpp> 

#include <rivet/ddl/generated/SegmentedHealthPrius.hpp>

namespace rivet::ddl::generated {
	SegmentedHealthPrius::SegmentedHealthPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): HealthPrius(serialized) {
		HealthSegments = serialized->unwrap_into_many<rivet::ddl::generated::SegmentedHealthSegment>(HealthSegments_type_id); 
	}

	[[nodiscard]] auto
	SegmentedHealthPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SegmentedHealthPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SegmentedHealthPrius> {
		if (incoming_type_id == SegmentedHealthPrius::type_id) {
			return std::make_shared<SegmentedHealthPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
