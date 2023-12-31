// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/FixedCameraPrius.hpp>

namespace rivet::ddl::generated {
	FixedCameraPrius::FixedCameraPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): PlacedCameraPrius(serialized) {
		ZeroSettle = serialized->get_bool(ZeroSettle_type_id);
		LockPosition = serialized->get_bool(LockPosition_type_id);
		ResetOnActivate = serialized->get_bool(ResetOnActivate_type_id);
		StickConfig = serialized->get_string(StickConfig_type_id); 
	}

	[[nodiscard]] auto
	FixedCameraPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	FixedCameraPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<FixedCameraPrius> {
		if (incoming_type_id == FixedCameraPrius::type_id) {
			return std::make_shared<FixedCameraPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
