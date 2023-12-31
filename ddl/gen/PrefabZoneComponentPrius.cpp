// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/PrefabZoneComponentPrius.hpp>

namespace rivet::ddl::generated {
	PrefabZoneComponentPrius::PrefabZoneComponentPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		PrefabZone = serialized->get_string(PrefabZone_type_id);
		Autoload = serialized->get_bool(Autoload_type_id); 
	}

	[[nodiscard]] auto
	PrefabZoneComponentPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	PrefabZoneComponentPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PrefabZoneComponentPrius> {
		if (incoming_type_id == PrefabZoneComponentPrius::type_id) {
			return std::make_shared<PrefabZoneComponentPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
