// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ObjSysUnlockOverrideConditionEntry.hpp>
#include <rivet/ddl/generated/ObjSysUnlockArray.hpp> 

#include <rivet/ddl/generated/ObjSysUnlockSequenceOverride.hpp>

namespace rivet::ddl::generated {
	ObjSysUnlockSequenceOverride::ObjSysUnlockSequenceOverride([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		OverrideConditions = serialized->unwrap_into_many<rivet::ddl::generated::ObjSysUnlockOverrideConditionEntry>(OverrideConditions_type_id);
		Unlocks = serialized->unwrap_into<rivet::ddl::generated::ObjSysUnlockArray>(Unlocks_type_id); 
	}

	auto
	ObjSysUnlockSequenceOverride::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	ObjSysUnlockSequenceOverride::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ObjSysUnlockSequenceOverride::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ObjSysUnlockSequenceOverride> {
		if (incoming_type_id == ObjSysUnlockSequenceOverride::type_id) {
			return std::make_shared<ObjSysUnlockSequenceOverride>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
