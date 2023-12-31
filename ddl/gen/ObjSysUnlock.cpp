// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ObjSysUnlock.hpp>

namespace rivet::ddl::generated {
	ObjSysUnlock::ObjSysUnlock([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		LockType = serialized->get_enum<rivet::ddl::generated::x9aa8a36a>(LockType_type_id, rivet::ddl::generated::x9aa8a36a_values);
		Trigger = serialized->get_enum<rivet::ddl::generated::x5e401570>(Trigger_type_id, rivet::ddl::generated::x5e401570_values);
		MissionName = serialized->get_string(MissionName_type_id);
		ObjectiveName = serialized->get_string(ObjectiveName_type_id); 
	}

	[[nodiscard]] auto
	ObjSysUnlock::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ObjSysUnlock::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ObjSysUnlock> {
		if (incoming_type_id == ObjSysUnlock::type_id) {
			return std::make_shared<ObjSysUnlock>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
