// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/FinaleMechStatusEffectShrubberyPrius.hpp> 

#include <rivet/ddl/generated/StatusEffectShrubberyPrius.hpp>

namespace rivet::ddl::generated {
	StatusEffectShrubberyPrius::StatusEffectShrubberyPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): StatusEffectBasePrius(serialized) {
		ModelId = serialized->get_uint64(ModelId_type_id, 0);
		ColorFadeConstant = serialized->get_string(ColorFadeConstant_type_id, {});
		RemoveBotOnDeath = serialized->get_bool(RemoveBotOnDeath_type_id, true); 
	}

	[[nodiscard]] auto
	StatusEffectShrubberyPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	StatusEffectShrubberyPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<StatusEffectShrubberyPrius> {
		if (incoming_type_id == StatusEffectShrubberyPrius::type_id) {
			return std::make_shared<StatusEffectShrubberyPrius>(serialized);
		}

		auto FinaleMechStatusEffectShrubberyPrius_ptr = FinaleMechStatusEffectShrubberyPrius::from_substruct(incoming_type_id, serialized);
		if (FinaleMechStatusEffectShrubberyPrius_ptr != nullptr) {
			return FinaleMechStatusEffectShrubberyPrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
