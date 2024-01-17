// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector3.hpp> 

#include <rivet/ddl/generated/ShotWarningIndicatorPrius.hpp>

namespace rivet::ddl::generated {
	ShotWarningIndicatorPrius::ShotWarningIndicatorPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		TargetPos = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(TargetPos_type_id);
		Radius = serialized->get_float(Radius_type_id, 1.000000);
		Timer = serialized->get_float(Timer_type_id, -1.000000);
		WarnFromActivate = serialized->get_bool(WarnFromActivate_type_id, true); 
	}

	[[nodiscard]] auto
	ShotWarningIndicatorPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ShotWarningIndicatorPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ShotWarningIndicatorPrius> {
		if (incoming_type_id == ShotWarningIndicatorPrius::type_id) {
			return std::make_shared<ShotWarningIndicatorPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
