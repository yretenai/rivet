// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ProximityTieredOverrides.hpp>

namespace rivet::ddl::generated {
	ProximityTieredOverrides::ProximityTieredOverrides([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		MinPercentOutOfView = serialized->get_float(MinPercentOutOfView_type_id);
		MaxPercentOutOfView = serialized->get_float(MaxPercentOutOfView_type_id);
		OverrideMinDelay = serialized->get_float(OverrideMinDelay_type_id);
		OverrideMaxDelay = serialized->get_float(OverrideMaxDelay_type_id); 
	}

	[[nodiscard]] auto
	ProximityTieredOverrides::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ProximityTieredOverrides::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ProximityTieredOverrides> {
		if (incoming_type_id == ProximityTieredOverrides::type_id) {
			return std::make_shared<ProximityTieredOverrides>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
