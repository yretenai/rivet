// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/VanityPerkWrenchDamage.hpp>

namespace rivet::ddl::generated {
	VanityPerkWrenchDamage::VanityPerkWrenchDamage([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): VanityPerkBase(serialized) {
		WrenchDamageMultSet = serialized->get_float(WrenchDamageMultSet_type_id, 0.000000);
		WrenchDamageMultPiece = serialized->get_float(WrenchDamageMultPiece_type_id, 0.000000); 
	}

	[[nodiscard]] auto
	VanityPerkWrenchDamage::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	VanityPerkWrenchDamage::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VanityPerkWrenchDamage> {
		if (incoming_type_id == VanityPerkWrenchDamage::type_id) {
			return std::make_shared<VanityPerkWrenchDamage>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
