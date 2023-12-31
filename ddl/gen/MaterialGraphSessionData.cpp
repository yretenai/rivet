// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MaterialGraphSessionData.hpp>

namespace rivet::ddl::generated {
	MaterialGraphSessionData::MaterialGraphSessionData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ReloadLibrary = serialized->get_bool(ReloadLibrary_type_id); 
	}

	[[nodiscard]] auto
	MaterialGraphSessionData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MaterialGraphSessionData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MaterialGraphSessionData> {
		if (incoming_type_id == MaterialGraphSessionData::type_id) {
			return std::make_shared<MaterialGraphSessionData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
