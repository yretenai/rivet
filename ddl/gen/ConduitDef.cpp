// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ECMEventDef.hpp>
#include <rivet/ddl/generated/VaultMetaData.hpp> 

#include <rivet/ddl/generated/ConduitDef.hpp>

namespace rivet::ddl::generated {
	ConduitDef::ConduitDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		VaultMetaData = serialized->unwrap_into<rivet::ddl::generated::VaultMetaData>(VaultMetaData_type_id);
		IconPath = serialized->get_string(IconPath_type_id);
		Events = serialized->unwrap_into_many<rivet::ddl::generated::ECMEventDef>(Events_type_id); 
	}

	[[nodiscard]] auto
	ConduitDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ConduitDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ConduitDef> {
		if (incoming_type_id == ConduitDef::type_id) {
			return std::make_shared<ConduitDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
