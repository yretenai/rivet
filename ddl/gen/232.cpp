// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TargetingAimAnglePrius.hpp> 

#include <rivet/ddl/generated/TargetingAimAngleConfig.hpp>

namespace rivet::ddl::generated {
	TargetingAimAngleConfig::TargetingAimAngleConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ConfigBase(serialized) {
		TargetingAimAngle = serialized->unwrap_into<rivet::ddl::generated::TargetingAimAnglePrius>(TargetingAimAngle_type_id); 
	}

	auto
	TargetingAimAngleConfig::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	TargetingAimAngleConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TargetingAimAngleConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TargetingAimAngleConfig> {
		if (incoming_type_id == TargetingAimAngleConfig::type_id) {
			return std::make_shared<TargetingAimAngleConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
