// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SelfieDefaultsData.hpp>

namespace rivet::ddl::generated {
	SelfieDefaultsData::SelfieDefaultsData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Driver = serialized->get_string(Driver_type_id);
		DriverCat = serialized->get_string(DriverCat_type_id);
		FOV = serialized->get_float(FOV_type_id);
		RangeNear = serialized->get_float(RangeNear_type_id);
		APNear = serialized->get_float(APNear_type_id);
		RangeFar = serialized->get_float(RangeFar_type_id);
		APFar = serialized->get_float(APFar_type_id); 
	}

	[[nodiscard]] auto
	SelfieDefaultsData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SelfieDefaultsData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SelfieDefaultsData> {
		if (incoming_type_id == SelfieDefaultsData::type_id) {
			return std::make_shared<SelfieDefaultsData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
