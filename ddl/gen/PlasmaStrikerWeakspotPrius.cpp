// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/PlasmaStrikerWeakspotData.hpp> 

#include <rivet/ddl/generated/PlasmaStrikerWeakspotPrius.hpp>

namespace rivet::ddl::generated {
	PlasmaStrikerWeakspotPrius::PlasmaStrikerWeakspotPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		WeakspotDisabledOnDamageState = serialized->get_bool(WeakspotDisabledOnDamageState_type_id);
		WeakspotList = serialized->unwrap_into_many<rivet::ddl::generated::PlasmaStrikerWeakspotData>(WeakspotList_type_id); 
	}

	[[nodiscard]] auto
	PlasmaStrikerWeakspotPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	PlasmaStrikerWeakspotPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PlasmaStrikerWeakspotPrius> {
		if (incoming_type_id == PlasmaStrikerWeakspotPrius::type_id) {
			return std::make_shared<PlasmaStrikerWeakspotPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
