// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/IconMapBase.hpp> 

#include <rivet/ddl/generated/IconMapOverride.hpp>

namespace rivet::ddl::generated {
	IconMapOverride::IconMapOverride([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		OverrideDefault = serialized->get_bool(OverrideDefault_type_id);
		IconMap = serialized->unwrap_into<rivet::ddl::generated::IconMapBase>(IconMap_type_id); 
	}

	auto
	IconMapOverride::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	IconMapOverride::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	IconMapOverride::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<IconMapOverride> {
		if (incoming_type_id == IconMapOverride::type_id) {
			return std::make_shared<IconMapOverride>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
