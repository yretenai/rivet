// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ConfigType.hpp>

namespace rivet::ddl::generated {
	ConfigType::ConfigType([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Type = serialized->get_string(Type_type_id); 
	}

	[[nodiscard]] auto
	ConfigType::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ConfigType::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ConfigType> {
		if (incoming_type_id == ConfigType::type_id) {
			return std::make_shared<ConfigType>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated