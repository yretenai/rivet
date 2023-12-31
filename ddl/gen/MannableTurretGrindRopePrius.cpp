// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MannableTurretGrindRopePrius.hpp>

namespace rivet::ddl::generated {
	MannableTurretGrindRopePrius::MannableTurretGrindRopePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Range = serialized->get_float(Range_type_id);
		Damage = serialized->get_float(Damage_type_id); 
	}

	[[nodiscard]] auto
	MannableTurretGrindRopePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MannableTurretGrindRopePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MannableTurretGrindRopePrius> {
		if (incoming_type_id == MannableTurretGrindRopePrius::type_id) {
			return std::make_shared<MannableTurretGrindRopePrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
