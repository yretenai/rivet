// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SharedLoadSettings.hpp>

namespace rivet::ddl::generated {
	SharedLoadSettings::SharedLoadSettings([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ExpediteLoadStateMachineMode = serialized->get_enum<rivet::ddl::generated::xd76165e>(ExpediteLoadStateMachineMode_type_id, rivet::ddl::generated::xd76165e_values);
		ExpediteBulkLoader = serialized->get_bool(ExpediteBulkLoader_type_id); 
	}

	[[nodiscard]] auto
	SharedLoadSettings::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SharedLoadSettings::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SharedLoadSettings> {
		if (incoming_type_id == SharedLoadSettings::type_id) {
			return std::make_shared<SharedLoadSettings>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated