// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/WaterImpulseSettings.hpp>

namespace rivet::ddl::generated {
	WaterImpulseSettings::WaterImpulseSettings([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		MaxDist = serialized->get_float(MaxDist_type_id, 100.000000); 
	}

	[[nodiscard]] auto
	WaterImpulseSettings::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	WaterImpulseSettings::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WaterImpulseSettings> {
		if (incoming_type_id == WaterImpulseSettings::type_id) {
			return std::make_shared<WaterImpulseSettings>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
