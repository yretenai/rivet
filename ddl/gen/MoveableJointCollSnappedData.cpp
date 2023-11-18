// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MoveableJointCollSnappedData.hpp>

namespace rivet::ddl::generated {
	MoveableJointCollSnappedData::MoveableJointCollSnappedData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		CollCheckStartLocator = serialized->get_string(CollCheckStartLocator_type_id); 
	}

	[[nodiscard]] auto
	MoveableJointCollSnappedData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MoveableJointCollSnappedData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MoveableJointCollSnappedData> {
		if (incoming_type_id == MoveableJointCollSnappedData::type_id) {
			return std::make_shared<MoveableJointCollSnappedData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
