// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AllegianceWithRelationPair.hpp> 

#include <rivet/ddl/generated/DamageModifierInnerOuterForAllegiancePrius.hpp>

namespace rivet::ddl::generated {
	DamageModifierInnerOuterForAllegiancePrius::DamageModifierInnerOuterForAllegiancePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): DamageModifierInnerOuterPrius(serialized) {
		AllegianceTest = serialized->unwrap_into<rivet::ddl::generated::AllegianceWithRelationPair>(AllegianceTest_type_id); 
	}

	auto
	DamageModifierInnerOuterForAllegiancePrius::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	DamageModifierInnerOuterForAllegiancePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DamageModifierInnerOuterForAllegiancePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DamageModifierInnerOuterForAllegiancePrius> {
		if (incoming_type_id == DamageModifierInnerOuterForAllegiancePrius::type_id) {
			return std::make_shared<DamageModifierInnerOuterForAllegiancePrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
