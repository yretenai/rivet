// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TargetCheckDistancePrius.hpp>

namespace rivet::ddl::generated {
	TargetCheckDistancePrius::TargetCheckDistancePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): TargetCheckBasePrius(serialized) {
		Distance = serialized->get_float(Distance_type_id); 
	}

	[[nodiscard]] auto
	TargetCheckDistancePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TargetCheckDistancePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TargetCheckDistancePrius> {
		if (incoming_type_id == TargetCheckDistancePrius::type_id) {
			return std::make_shared<TargetCheckDistancePrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated