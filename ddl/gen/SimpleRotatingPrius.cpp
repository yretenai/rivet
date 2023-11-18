// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SimpleRotatingPrius.hpp>

namespace rivet::ddl::generated {
	SimpleRotatingPrius::SimpleRotatingPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		RotationAxis = serialized->get_enum<rivet::ddl::generated::xf93e2b39>(RotationAxis_type_id, rivet::ddl::generated::xf93e2b39_values);
		RotationSpeed = serialized->get_float(RotationSpeed_type_id); 
	}

	[[nodiscard]] auto
	SimpleRotatingPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SimpleRotatingPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SimpleRotatingPrius> {
		if (incoming_type_id == SimpleRotatingPrius::type_id) {
			return std::make_shared<SimpleRotatingPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
