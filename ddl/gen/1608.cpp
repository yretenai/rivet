// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/GrindMoveData.hpp>

namespace rivet::ddl::generated {
	GrindMoveData::GrindMoveData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		SpeedDefault = serialized->get_float(SpeedDefault_type_id);
		Accel = serialized->get_float(Accel_type_id);
		Decel = serialized->get_float(Decel_type_id); 
	}

	auto
	GrindMoveData::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	GrindMoveData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	GrindMoveData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GrindMoveData> {
		if (incoming_type_id == GrindMoveData::type_id) {
			return std::make_shared<GrindMoveData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
