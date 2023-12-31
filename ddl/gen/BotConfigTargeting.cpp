// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TargetingBasePrius.hpp> 

#include <rivet/ddl/generated/BotConfigTargeting.hpp>

namespace rivet::ddl::generated {
	BotConfigTargeting::BotConfigTargeting([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ConfigBase(serialized) {
		Targeting = serialized->unwrap_into<rivet::ddl::generated::TargetingBasePrius>(Targeting_type_id); 
	}

	[[nodiscard]] auto
	BotConfigTargeting::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BotConfigTargeting::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BotConfigTargeting> {
		if (incoming_type_id == BotConfigTargeting::type_id) {
			return std::make_shared<BotConfigTargeting>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
