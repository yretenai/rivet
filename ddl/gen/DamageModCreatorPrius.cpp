// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DamageModCreatorPrius.hpp>

namespace rivet::ddl::generated {
	DamageModCreatorPrius::DamageModCreatorPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {

	}

	[[nodiscard]] auto
	DamageModCreatorPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DamageModCreatorPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DamageModCreatorPrius> {
		if (incoming_type_id == DamageModCreatorPrius::type_id) {
			return std::make_shared<DamageModCreatorPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
