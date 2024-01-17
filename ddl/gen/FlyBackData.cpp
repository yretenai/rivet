// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/FlyBackData.hpp>

namespace rivet::ddl::generated {
	FlyBackData::FlyBackData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		SpeedMin = serialized->get_float(SpeedMin_type_id, 20.000000);
		SpeedMax = serialized->get_float(SpeedMax_type_id, 20.000000);
		Time = serialized->get_float(Time_type_id, 0.500000); 
	}

	[[nodiscard]] auto
	FlyBackData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	FlyBackData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<FlyBackData> {
		if (incoming_type_id == FlyBackData::type_id) {
			return std::make_shared<FlyBackData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
