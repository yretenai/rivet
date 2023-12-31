// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DebugGraphList_Tools.hpp> 

#include <rivet/ddl/generated/ObjectiveSystemConfig_Tools.hpp>

namespace rivet::ddl::generated {
	ObjectiveSystemConfig_Tools::ObjectiveSystemConfig_Tools([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ConfigBase(serialized) {
		DebugGraphList = serialized->unwrap_into<rivet::ddl::generated::DebugGraphList_Tools>(DebugGraphList_type_id); 
	}

	[[nodiscard]] auto
	ObjectiveSystemConfig_Tools::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ObjectiveSystemConfig_Tools::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ObjectiveSystemConfig_Tools> {
		if (incoming_type_id == ObjectiveSystemConfig_Tools::type_id) {
			return std::make_shared<ObjectiveSystemConfig_Tools>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
