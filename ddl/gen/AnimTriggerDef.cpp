// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AnimTriggerDef.hpp>

namespace rivet::ddl::generated {
	AnimTriggerDef::AnimTriggerDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Flags = serialized->get_bitset<rivet::ddl::generated::x3bec8d43>(Flags_type_id, rivet::ddl::generated::x3bec8d43_values, 0);
		Name = serialized->get_string(Name_type_id, {});
		Time = serialized->get_float(Time_type_id, 0.000000);
		BroadcastFlag = serialized->get_bool(BroadcastFlag_type_id, false);
		ActorName = serialized->get_string(ActorName_type_id, {});
		LocatorName = serialized->get_string(LocatorName_type_id, {});
		BroadcastRadius = serialized->get_float(BroadcastRadius_type_id, 10.000000); 
	}

	[[nodiscard]] auto
	AnimTriggerDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AnimTriggerDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AnimTriggerDef> {
		if (incoming_type_id == AnimTriggerDef::type_id) {
			return std::make_shared<AnimTriggerDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
