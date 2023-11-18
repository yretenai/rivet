// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/HPThresholdTrackerPrius.hpp>

namespace rivet::ddl::generated {
	HPThresholdTrackerPrius::HPThresholdTrackerPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Thresholds = serialized->get_floats(Thresholds_type_id); 
	}

	[[nodiscard]] auto
	HPThresholdTrackerPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HPThresholdTrackerPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HPThresholdTrackerPrius> {
		if (incoming_type_id == HPThresholdTrackerPrius::type_id) {
			return std::make_shared<HPThresholdTrackerPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
