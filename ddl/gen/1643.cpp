// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/HealthDropTier.hpp> 

#include <rivet/ddl/generated/HealthDropConfig.hpp>

namespace rivet::ddl::generated {
	HealthDropConfig::HealthDropConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ConfigBase(serialized) {
		HealthDropActor = serialized->get_string(HealthDropActor_type_id);
		InWorldHealthDropScale = serialized->get_float(InWorldHealthDropScale_type_id);
		DropTiers = serialized->unwrap_into_many<rivet::ddl::generated::HealthDropTier>(DropTiers_type_id); 
	}

	auto
	HealthDropConfig::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	HealthDropConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HealthDropConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HealthDropConfig> {
		if (incoming_type_id == HealthDropConfig::type_id) {
			return std::make_shared<HealthDropConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
