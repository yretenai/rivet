// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DimensionalPulseTargetFlockPrius.hpp>

namespace rivet::ddl::generated {
	DimensionalPulseTargetFlockPrius::DimensionalPulseTargetFlockPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): DimensionalPulseTargetBasePrius(serialized) {

	}

	[[nodiscard]] auto
	DimensionalPulseTargetFlockPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DimensionalPulseTargetFlockPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DimensionalPulseTargetFlockPrius> {
		if (incoming_type_id == DimensionalPulseTargetFlockPrius::type_id) {
			return std::make_shared<DimensionalPulseTargetFlockPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
