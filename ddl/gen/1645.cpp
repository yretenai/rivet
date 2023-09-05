// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/FinaleMechStatusEffectTrackerPixelizedPrius.hpp>
#include <rivet/ddl/generated/FinaleMechStatusEffectTrackerLightningRodPrius.hpp>
#include <rivet/ddl/generated/FinaleMechStatusEffectTrackerFreezePrius.hpp>
#include <rivet/ddl/generated/FinaleMechStatusEffectTrackerShrubberyPrius.hpp> 

#include <rivet/ddl/generated/FinaleMechConfigStatusEffects.hpp>

namespace rivet::ddl::generated {
	FinaleMechConfigStatusEffects::FinaleMechConfigStatusEffects([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ConfigBase(serialized) {
		PixelizedTrackerPrius = serialized->unwrap_into<rivet::ddl::generated::FinaleMechStatusEffectTrackerPixelizedPrius>(PixelizedTrackerPrius_type_id);
		FreezeTrackerPrius = serialized->unwrap_into<rivet::ddl::generated::FinaleMechStatusEffectTrackerFreezePrius>(FreezeTrackerPrius_type_id);
		ShrubberyTrackerPrius = serialized->unwrap_into<rivet::ddl::generated::FinaleMechStatusEffectTrackerShrubberyPrius>(ShrubberyTrackerPrius_type_id);
		LightningRodTrackerPrius = serialized->unwrap_into<rivet::ddl::generated::FinaleMechStatusEffectTrackerLightningRodPrius>(LightningRodTrackerPrius_type_id); 
	}

	auto
	FinaleMechConfigStatusEffects::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	FinaleMechConfigStatusEffects::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	FinaleMechConfigStatusEffects::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<FinaleMechConfigStatusEffects> {
		if (incoming_type_id == FinaleMechConfigStatusEffects::type_id) {
			return std::make_shared<FinaleMechConfigStatusEffects>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
