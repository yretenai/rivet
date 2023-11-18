// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DamageStateDataContainerBase.hpp> 

#include <rivet/ddl/generated/DamageStateManagerPrius.hpp>

namespace rivet::ddl::generated {
	DamageStateManagerPrius::DamageStateManagerPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		DataSource = serialized->unwrap_into<rivet::ddl::generated::DamageStateDataContainerBase>(DataSource_type_id); 
	}

	[[nodiscard]] auto
	DamageStateManagerPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DamageStateManagerPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DamageStateManagerPrius> {
		if (incoming_type_id == DamageStateManagerPrius::type_id) {
			return std::make_shared<DamageStateManagerPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
