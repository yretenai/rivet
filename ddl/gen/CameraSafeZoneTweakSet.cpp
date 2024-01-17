// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/CameraSafeZoneTweakSet.hpp>

namespace rivet::ddl::generated {
	CameraSafeZoneTweakSet::CameraSafeZoneTweakSet([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): CameraSafeZoneTweak(serialized) {
		LeftAngleMin = serialized->get_float(LeftAngleMin_type_id, 0.000000);
		LeftAngleMax = serialized->get_float(LeftAngleMax_type_id, 0.000000);
		ForwardDistMin = serialized->get_float(ForwardDistMin_type_id, 0.000000);
		ForwardDistMax = serialized->get_float(ForwardDistMax_type_id, 0.000000);
		BlendFieldCompletePercent = serialized->get_float(BlendFieldCompletePercent_type_id, 0.000000);
		BiDirectionalField = serialized->get_bool(BiDirectionalField_type_id, false); 
	}

	[[nodiscard]] auto
	CameraSafeZoneTweakSet::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CameraSafeZoneTweakSet::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CameraSafeZoneTweakSet> {
		if (incoming_type_id == CameraSafeZoneTweakSet::type_id) {
			return std::make_shared<CameraSafeZoneTweakSet>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
