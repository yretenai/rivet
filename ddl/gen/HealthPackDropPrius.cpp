// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/HealthPackDropPrius.hpp>

namespace rivet::ddl::generated {
	HealthPackDropPrius::HealthPackDropPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		HealthDropConfig = serialized->get_string(HealthDropConfig_type_id);
		DoGroundCheck = serialized->get_bool(DoGroundCheck_type_id);
		GroundCheckDistance = serialized->get_float(GroundCheckDistance_type_id); 
	}

	[[nodiscard]] auto
	HealthPackDropPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HealthPackDropPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HealthPackDropPrius> {
		if (incoming_type_id == HealthPackDropPrius::type_id) {
			return std::make_shared<HealthPackDropPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
