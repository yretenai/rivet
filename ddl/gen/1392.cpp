// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ShotBouncerMiniBombPrius.hpp> 

#include <rivet/ddl/generated/ShotBouncerMiniBombConfig.hpp>

namespace rivet::ddl::generated {
	ShotBouncerMiniBombConfig::ShotBouncerMiniBombConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ConfigBase(serialized) {
		MiniBombActor = serialized->get_string(MiniBombActor_type_id);
		ShotPrius = serialized->unwrap_into<rivet::ddl::generated::ShotBouncerMiniBombPrius>(ShotPrius_type_id); 
	}

	auto
	ShotBouncerMiniBombConfig::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	ShotBouncerMiniBombConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ShotBouncerMiniBombConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ShotBouncerMiniBombConfig> {
		if (incoming_type_id == ShotBouncerMiniBombConfig::type_id) {
			return std::make_shared<ShotBouncerMiniBombConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
