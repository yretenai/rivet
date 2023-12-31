// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SetUpControllerData.hpp>
#include <rivet/ddl/generated/BotSetupData.hpp> 

#include <rivet/ddl/generated/SunsetSpawnerFactoryPrius.hpp>

namespace rivet::ddl::generated {
	SunsetSpawnerFactoryPrius::SunsetSpawnerFactoryPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): SpawnerFactoryPrius(serialized) {
		NumForcedHealthDrops = serialized->get_int32(NumForcedHealthDrops_type_id);
		BotSetupData = serialized->unwrap_into<rivet::ddl::generated::BotSetupData>(BotSetupData_type_id);
		SetupControllerData = serialized->unwrap_into<rivet::ddl::generated::SetUpControllerData>(SetupControllerData_type_id); 
	}

	[[nodiscard]] auto
	SunsetSpawnerFactoryPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SunsetSpawnerFactoryPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SunsetSpawnerFactoryPrius> {
		if (incoming_type_id == SunsetSpawnerFactoryPrius::type_id) {
			return std::make_shared<SunsetSpawnerFactoryPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
