// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ExplosiveStatusInnerOuterData.hpp>

namespace rivet::ddl::generated {
	ExplosiveStatusInnerOuterData::ExplosiveStatusInnerOuterData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		InnerDamage = serialized->get_float(InnerDamage_type_id);
		OuterDamage = serialized->get_float(OuterDamage_type_id);
		InnerRadius = serialized->get_float(InnerRadius_type_id);
		OuterRadius = serialized->get_float(OuterRadius_type_id); 
	}

	auto
	ExplosiveStatusInnerOuterData::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	ExplosiveStatusInnerOuterData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ExplosiveStatusInnerOuterData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ExplosiveStatusInnerOuterData> {
		if (incoming_type_id == ExplosiveStatusInnerOuterData::type_id) {
			return std::make_shared<ExplosiveStatusInnerOuterData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
