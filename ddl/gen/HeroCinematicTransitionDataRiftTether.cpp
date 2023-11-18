// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/HeroCinematicTransitionDataRiftTether.hpp>

namespace rivet::ddl::generated {
	HeroCinematicTransitionDataRiftTether::HeroCinematicTransitionDataRiftTether([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): HeroCinematicTransitionDataBase(serialized) {

	}

	[[nodiscard]] auto
	HeroCinematicTransitionDataRiftTether::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HeroCinematicTransitionDataRiftTether::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HeroCinematicTransitionDataRiftTether> {
		if (incoming_type_id == HeroCinematicTransitionDataRiftTether::type_id) {
			return std::make_shared<HeroCinematicTransitionDataRiftTether>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
