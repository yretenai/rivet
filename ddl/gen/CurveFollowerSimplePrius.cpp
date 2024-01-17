// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/CurveFollowerSimplePrius.hpp>

namespace rivet::ddl::generated {
	CurveFollowerSimplePrius::CurveFollowerSimplePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		CurveFollowMode = serialized->get_enum<rivet::ddl::generated::x96b277fe>(CurveFollowMode_type_id, rivet::ddl::generated::x96b277fe_values, rivet::ddl::generated::x96b277fe::Loop);
		Speed = serialized->get_float(Speed_type_id, 10.000000);
		WaitDuration = serialized->get_float(WaitDuration_type_id, 1.000000); 
	}

	[[nodiscard]] auto
	CurveFollowerSimplePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CurveFollowerSimplePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CurveFollowerSimplePrius> {
		if (incoming_type_id == CurveFollowerSimplePrius::type_id) {
			return std::make_shared<CurveFollowerSimplePrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
