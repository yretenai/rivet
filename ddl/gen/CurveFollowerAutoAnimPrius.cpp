// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/CurveFollowerAutoAnimPrius.hpp>

namespace rivet::ddl::generated {
	CurveFollowerAutoAnimPrius::CurveFollowerAutoAnimPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		StartEnabled = serialized->get_bool(StartEnabled_type_id);
		StoppedIdle = serialized->get_string(StoppedIdle_type_id);
		MoveStart = serialized->get_string(MoveStart_type_id);
		MoveIdle = serialized->get_string(MoveIdle_type_id);
		StopStart = serialized->get_string(StopStart_type_id); 
	}

	[[nodiscard]] auto
	CurveFollowerAutoAnimPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CurveFollowerAutoAnimPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CurveFollowerAutoAnimPrius> {
		if (incoming_type_id == CurveFollowerAutoAnimPrius::type_id) {
			return std::make_shared<CurveFollowerAutoAnimPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
