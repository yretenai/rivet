// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SetHeroCurrentShipActionPrius.hpp>

namespace rivet::ddl::generated {
	SetHeroCurrentShipActionPrius::SetHeroCurrentShipActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ActionType = serialized->get_enum<rivet::ddl::generated::x10228b34>(ActionType_type_id, rivet::ddl::generated::x10228b34_values);
		CurrentShipEnum = serialized->get_enum<rivet::ddl::generated::x5c4496c6>(CurrentShipEnum_type_id, rivet::ddl::generated::x5c4496c6_values); 
	}

	[[nodiscard]] auto
	SetHeroCurrentShipActionPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SetHeroCurrentShipActionPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SetHeroCurrentShipActionPrius> {
		if (incoming_type_id == SetHeroCurrentShipActionPrius::type_id) {
			return std::make_shared<SetHeroCurrentShipActionPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
