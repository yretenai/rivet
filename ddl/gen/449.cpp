// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ConfigModListElement.hpp> 

#include <rivet/ddl/generated/VariableSpeedShotMotionPriusModDef.hpp>

namespace rivet::ddl::generated {
	VariableSpeedShotMotionPriusModDef::VariableSpeedShotMotionPriusModDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Variable = serialized->get_enum<rivet::ddl::generated::x387e77cd>(Variable_type_id, rivet::ddl::generated::x387e77cd_values);
		ModList = serialized->unwrap_into_many<rivet::ddl::generated::ConfigModListElement>(ModList_type_id); 
	}

	auto
	VariableSpeedShotMotionPriusModDef::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	VariableSpeedShotMotionPriusModDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	VariableSpeedShotMotionPriusModDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VariableSpeedShotMotionPriusModDef> {
		if (incoming_type_id == VariableSpeedShotMotionPriusModDef::type_id) {
			return std::make_shared<VariableSpeedShotMotionPriusModDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
