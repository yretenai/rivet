// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/CritterDensity.hpp> 

#include <rivet/ddl/generated/CritterTypeConfig.hpp>

namespace rivet::ddl::generated {
	CritterTypeConfig::CritterTypeConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ConfigBase(serialized) {
		CritterActor = serialized->get_string(CritterActor_type_id);
		DefaultDensity = serialized->unwrap_into<rivet::ddl::generated::CritterDensity>(DefaultDensity_type_id); 
	}

	auto
	CritterTypeConfig::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	CritterTypeConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CritterTypeConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CritterTypeConfig> {
		if (incoming_type_id == CritterTypeConfig::type_id) {
			return std::make_shared<CritterTypeConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
