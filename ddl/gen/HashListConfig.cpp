// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/HashListConfig.hpp>

namespace rivet::ddl::generated {
	HashListConfig::HashListConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ConfigBase(serialized) {

	}

	[[nodiscard]] auto
	HashListConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HashListConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HashListConfig> {
		if (incoming_type_id == HashListConfig::type_id) {
			return std::make_shared<HashListConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
