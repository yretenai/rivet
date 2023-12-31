// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SlottedInteractAnimData.hpp>

namespace rivet::ddl::generated {
	SlottedInteractAnimData::SlottedInteractAnimData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ObjectPreIdle = serialized->get_string(ObjectPreIdle_type_id);
		ObjectIntro = serialized->get_string(ObjectIntro_type_id);
		ObjectUse = serialized->get_string(ObjectUse_type_id);
		ObjectOutro = serialized->get_string(ObjectOutro_type_id);
		ObjectOutroFail = serialized->get_string(ObjectOutroFail_type_id);
		ObjectPostIdle = serialized->get_string(ObjectPostIdle_type_id);
		UserIntro = serialized->get_string(UserIntro_type_id);
		UserIdle = serialized->get_string(UserIdle_type_id);
		UserFidget = serialized->get_string(UserFidget_type_id);
		UserUse = serialized->get_string(UserUse_type_id);
		UserRelease = serialized->get_string(UserRelease_type_id);
		UserReleaseFail = serialized->get_string(UserReleaseFail_type_id); 
	}

	[[nodiscard]] auto
	SlottedInteractAnimData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SlottedInteractAnimData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SlottedInteractAnimData> {
		if (incoming_type_id == SlottedInteractAnimData::type_id) {
			return std::make_shared<SlottedInteractAnimData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
