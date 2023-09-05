// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DialogSet.hpp> 

#include <rivet/ddl/generated/DialogSetConfig.hpp>

namespace rivet::ddl::generated {
	DialogSetConfig::DialogSetConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ConfigBase(serialized) {
		Set = serialized->unwrap_into<rivet::ddl::generated::DialogSet>(Set_type_id); 
	}

	auto
	DialogSetConfig::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	DialogSetConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DialogSetConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DialogSetConfig> {
		if (incoming_type_id == DialogSetConfig::type_id) {
			return std::make_shared<DialogSetConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
