// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DamagePrimBase.hpp> 

#include <rivet/ddl/generated/DamagePrimContainer.hpp>

namespace rivet::ddl::generated {
	DamagePrimContainer::DamagePrimContainer([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Prim = serialized->unwrap_into<rivet::ddl::generated::DamagePrimBase>(Prim_type_id); 
	}

	[[nodiscard]] auto
	DamagePrimContainer::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DamagePrimContainer::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DamagePrimContainer> {
		if (incoming_type_id == DamagePrimContainer::type_id) {
			return std::make_shared<DamagePrimContainer>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated