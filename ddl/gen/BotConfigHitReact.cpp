// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/PartialReactNonePrius.hpp>
#include <rivet/ddl/generated/HitReactPrius.hpp> 

#include <rivet/ddl/generated/BotConfigHitReact.hpp>

namespace rivet::ddl::generated {
	BotConfigHitReact::BotConfigHitReact([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ConfigBase(serialized) {
		HitReact = serialized->unwrap_into<rivet::ddl::generated::HitReactPrius>(HitReact_type_id);
		PartialReact = serialized->unwrap_into<rivet::ddl::generated::PartialReactNonePrius>(PartialReact_type_id);
		BodyPartToFilterConfig = serialized->get_string(BodyPartToFilterConfig_type_id, {}); 
	}

	[[nodiscard]] auto
	BotConfigHitReact::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BotConfigHitReact::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BotConfigHitReact> {
		if (incoming_type_id == BotConfigHitReact::type_id) {
			return std::make_shared<BotConfigHitReact>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
