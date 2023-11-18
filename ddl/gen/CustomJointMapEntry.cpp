// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/CustomJointMapEntry.hpp>

namespace rivet::ddl::generated {
	CustomJointMapEntry::CustomJointMapEntry([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		BodyJoint = serialized->get_string(BodyJoint_type_id);
		HeadJoint = serialized->get_string(HeadJoint_type_id); 
	}

	[[nodiscard]] auto
	CustomJointMapEntry::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CustomJointMapEntry::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CustomJointMapEntry> {
		if (incoming_type_id == CustomJointMapEntry::type_id) {
			return std::make_shared<CustomJointMapEntry>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
