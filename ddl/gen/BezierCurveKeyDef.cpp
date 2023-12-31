// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/BezierCurveKeyDef.hpp>

namespace rivet::ddl::generated {
	BezierCurveKeyDef::BezierCurveKeyDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Id = serialized->get_uint64(Id_type_id);
		Time = serialized->get_float(Time_type_id);
		Value = serialized->get_float(Value_type_id);
		TangentLocked = serialized->get_bool(TangentLocked_type_id);
		TangentTypeIn = serialized->get_enum<rivet::ddl::generated::x5eea8b59>(TangentTypeIn_type_id, rivet::ddl::generated::x5eea8b59_values);
		TangentTimeIn = serialized->get_float(TangentTimeIn_type_id);
		TangentValueIn = serialized->get_float(TangentValueIn_type_id);
		TangentTypeOut = serialized->get_enum<rivet::ddl::generated::x5eea8b59>(TangentTypeOut_type_id, rivet::ddl::generated::x5eea8b59_values);
		TangentTimeOut = serialized->get_float(TangentTimeOut_type_id);
		TangentValueOut = serialized->get_float(TangentValueOut_type_id); 
	}

	[[nodiscard]] auto
	BezierCurveKeyDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BezierCurveKeyDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BezierCurveKeyDef> {
		if (incoming_type_id == BezierCurveKeyDef::type_id) {
			return std::make_shared<BezierCurveKeyDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
