// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/HeroForceFieldSource.hpp>

namespace rivet::ddl::generated {
	HeroForceFieldSource::HeroForceFieldSource([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		LocatorName = serialized->get_string(LocatorName_type_id);
		Strength = serialized->get_float(Strength_type_id);
		Radius = serialized->get_float(Radius_type_id); 
	}

	[[nodiscard]] auto
	HeroForceFieldSource::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HeroForceFieldSource::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HeroForceFieldSource> {
		if (incoming_type_id == HeroForceFieldSource::type_id) {
			return std::make_shared<HeroForceFieldSource>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
