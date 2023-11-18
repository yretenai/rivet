// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ConfigMod.hpp> 

#include <rivet/ddl/generated/ConfigModManagerPrius.hpp>

namespace rivet::ddl::generated {
	ConfigModManagerPrius::ConfigModManagerPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Mods = serialized->unwrap_into_many<rivet::ddl::generated::ConfigMod>(Mods_type_id); 
	}

	[[nodiscard]] auto
	ConfigModManagerPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ConfigModManagerPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ConfigModManagerPrius> {
		if (incoming_type_id == ConfigModManagerPrius::type_id) {
			return std::make_shared<ConfigModManagerPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
