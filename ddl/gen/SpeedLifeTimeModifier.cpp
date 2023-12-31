// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SpeedLifeTimeModifier.hpp>

namespace rivet::ddl::generated {
	SpeedLifeTimeModifier::SpeedLifeTimeModifier([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		SpeedMin = serialized->get_float(SpeedMin_type_id);
		SpeedMax = serialized->get_float(SpeedMax_type_id);
		Scale = serialized->get_float(Scale_type_id); 
	}

	[[nodiscard]] auto
	SpeedLifeTimeModifier::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SpeedLifeTimeModifier::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SpeedLifeTimeModifier> {
		if (incoming_type_id == SpeedLifeTimeModifier::type_id) {
			return std::make_shared<SpeedLifeTimeModifier>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
