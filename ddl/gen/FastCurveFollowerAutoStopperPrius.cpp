// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/FastCurveFollowerAutoStopperPrius.hpp>

namespace rivet::ddl::generated {
	FastCurveFollowerAutoStopperPrius::FastCurveFollowerAutoStopperPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): CurveFollowerAutoStopperPrius(serialized) {
		AutoStopActorGroup = serialized->get_uint64(AutoStopActorGroup_type_id);
		CollJoint = serialized->get_string(CollJoint_type_id); 
	}

	[[nodiscard]] auto
	FastCurveFollowerAutoStopperPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	FastCurveFollowerAutoStopperPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<FastCurveFollowerAutoStopperPrius> {
		if (incoming_type_id == FastCurveFollowerAutoStopperPrius::type_id) {
			return std::make_shared<FastCurveFollowerAutoStopperPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated