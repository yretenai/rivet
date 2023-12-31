// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/HeroTetherConfig.hpp>

namespace rivet::ddl::generated {
	HeroTetherConfig::HeroTetherConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): HeroHookshotConfig(serialized) {

	}

	[[nodiscard]] auto
	HeroTetherConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HeroTetherConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HeroTetherConfig> {
		if (incoming_type_id == HeroTetherConfig::type_id) {
			return std::make_shared<HeroTetherConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
