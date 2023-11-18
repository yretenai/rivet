// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/FlockingVolumePrius.hpp>

namespace rivet::ddl::generated {
	FlockingVolumePrius::FlockingVolumePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		EnabledTypes = serialized->get_strings(EnabledTypes_type_id); 
	}

	[[nodiscard]] auto
	FlockingVolumePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	FlockingVolumePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<FlockingVolumePrius> {
		if (incoming_type_id == FlockingVolumePrius::type_id) {
			return std::make_shared<FlockingVolumePrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
