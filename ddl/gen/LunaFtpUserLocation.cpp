// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/LunaFtpUserLocation.hpp>

namespace rivet::ddl::generated {
	LunaFtpUserLocation::LunaFtpUserLocation([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		LocationName = serialized->get_string(LocationName_type_id);
		GameBuildsDir = serialized->get_string(GameBuildsDir_type_id); 
	}

	[[nodiscard]] auto
	LunaFtpUserLocation::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	LunaFtpUserLocation::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<LunaFtpUserLocation> {
		if (incoming_type_id == LunaFtpUserLocation::type_id) {
			return std::make_shared<LunaFtpUserLocation>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
