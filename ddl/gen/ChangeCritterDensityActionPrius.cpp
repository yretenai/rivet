// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/CritterDensity.hpp> 

#include <rivet/ddl/generated/ChangeCritterDensityActionPrius.hpp>

namespace rivet::ddl::generated {
	ChangeCritterDensityActionPrius::ChangeCritterDensityActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ActionType = serialized->get_enum<rivet::ddl::generated::x10228b34>(ActionType_type_id, rivet::ddl::generated::x10228b34_values, rivet::ddl::generated::x10228b34::Ambient);
		CritterTypes = serialized->get_strings(CritterTypes_type_id);
		DensityOverride = serialized->unwrap_into<rivet::ddl::generated::CritterDensity>(DensityOverride_type_id); 
	}

	[[nodiscard]] auto
	ChangeCritterDensityActionPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ChangeCritterDensityActionPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ChangeCritterDensityActionPrius> {
		if (incoming_type_id == ChangeCritterDensityActionPrius::type_id) {
			return std::make_shared<ChangeCritterDensityActionPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
