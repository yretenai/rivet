// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector2.hpp> 

#include <rivet/ddl/generated/HeroSuperMeterDebugData.hpp>

namespace rivet::ddl::generated {
	HeroSuperMeterDebugData::HeroSuperMeterDebugData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		DrawMeter = serialized->get_bool(DrawMeter_type_id);
		DrawControls = serialized->get_bool(DrawControls_type_id);
		MeterPos = serialized->unwrap_into<rivet::ddl::generated::DDLVector2>(MeterPos_type_id);
		MeterSize = serialized->unwrap_into<rivet::ddl::generated::DDLVector2>(MeterSize_type_id);
		ControlsPos = serialized->unwrap_into<rivet::ddl::generated::DDLVector2>(ControlsPos_type_id);
		ControlsSize = serialized->unwrap_into<rivet::ddl::generated::DDLVector2>(ControlsSize_type_id); 
	}

	auto
	HeroSuperMeterDebugData::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	HeroSuperMeterDebugData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HeroSuperMeterDebugData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HeroSuperMeterDebugData> {
		if (incoming_type_id == HeroSuperMeterDebugData::type_id) {
			return std::make_shared<HeroSuperMeterDebugData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
