// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/BotHitShaderData.hpp>

namespace rivet::ddl::generated {
	BotHitShaderData::BotHitShaderData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Shader = serialized->get_string(Shader_type_id);
		Duration = serialized->get_float(Duration_type_id);
		UseHitShaderEvenWhenNotTakingDamage = serialized->get_bool(UseHitShaderEvenWhenNotTakingDamage_type_id); 
	}

	[[nodiscard]] auto
	BotHitShaderData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BotHitShaderData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BotHitShaderData> {
		if (incoming_type_id == BotHitShaderData::type_id) {
			return std::make_shared<BotHitShaderData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
