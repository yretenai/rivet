// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TargetLocationData.hpp> 

#include <rivet/ddl/generated/TargetDataPrius.hpp>

namespace rivet::ddl::generated {
	TargetDataPrius::TargetDataPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Allegiance = serialized->get_enum<rivet::ddl::generated::x6bdf4ba1>(Allegiance_type_id, rivet::ddl::generated::x6bdf4ba1_values);
		TargetTypes = serialized->get_bitset<rivet::ddl::generated::TargetType>(TargetTypes_type_id, rivet::ddl::generated::TargetType_values);
		TargetCategory = serialized->get_enum<rivet::ddl::generated::TargetCategory>(TargetCategory_type_id, rivet::ddl::generated::TargetCategory_values);
		AimAssistConfig = serialized->get_string(AimAssistConfig_type_id);
		DesiredMaxTargeters = serialized->get_int32(DesiredMaxTargeters_type_id);
		StartStatic = serialized->get_bool(StartStatic_type_id);
		StartTargetable = serialized->get_bool(StartTargetable_type_id);
		LocationData = serialized->unwrap_into_many<rivet::ddl::generated::TargetLocationData>(LocationData_type_id); 
	}

	[[nodiscard]] auto
	TargetDataPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TargetDataPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TargetDataPrius> {
		if (incoming_type_id == TargetDataPrius::type_id) {
			return std::make_shared<TargetDataPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
