// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AirborneData.hpp>

namespace rivet::ddl::generated {
	AirborneData::AirborneData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		GroundSpeedMin = serialized->get_float(GroundSpeedMin_type_id);
		GroundSpeedMax = serialized->get_float(GroundSpeedMax_type_id);
		ApexHeightMin = serialized->get_float(ApexHeightMin_type_id);
		ApexHeightMax = serialized->get_float(ApexHeightMax_type_id);
		TimeToApex = serialized->get_float(TimeToApex_type_id); 
	}

	[[nodiscard]] auto
	AirborneData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AirborneData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AirborneData> {
		if (incoming_type_id == AirborneData::type_id) {
			return std::make_shared<AirborneData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
