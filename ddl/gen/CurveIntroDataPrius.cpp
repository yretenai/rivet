// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/CurveIntroDataPrius.hpp>

namespace rivet::ddl::generated {
	CurveIntroDataPrius::CurveIntroDataPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): IntroDataPrius(serialized) {
		IntroDriverName = serialized->get_string(IntroDriverName_type_id, {});
		DriverName = serialized->get_string(DriverName_type_id, "Move");
		OutroDriverName = serialized->get_string(OutroDriverName_type_id, {});
		Speed = serialized->get_float(Speed_type_id, -1.000000);
		MaintainYUp = serialized->get_bool(MaintainYUp_type_id, false); 
	}

	[[nodiscard]] auto
	CurveIntroDataPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CurveIntroDataPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CurveIntroDataPrius> {
		if (incoming_type_id == CurveIntroDataPrius::type_id) {
			return std::make_shared<CurveIntroDataPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
