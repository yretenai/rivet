// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/EngineAmortizationSettings.hpp>

namespace rivet::ddl::generated {
	EngineAmortizationSettings::EngineAmortizationSettings([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ZoneInstantiationBudgetMin = serialized->get_float(ZoneInstantiationBudgetMin_type_id);
		ZoneInstantiationBudgetMax = serialized->get_float(ZoneInstantiationBudgetMax_type_id);
		ZoneInstantiationUseLeftoverFrameTime = serialized->get_bool(ZoneInstantiationUseLeftoverFrameTime_type_id);
		AssetInstantiationBudgetMin = serialized->get_float(AssetInstantiationBudgetMin_type_id);
		AssetInstantiationBudgetMax = serialized->get_float(AssetInstantiationBudgetMax_type_id);
		AssetDeletionBudgetMin = serialized->get_float(AssetDeletionBudgetMin_type_id);
		AssetDeletionBudgetMax = serialized->get_float(AssetDeletionBudgetMax_type_id);
		BatchSoundBankVirtualFrees = serialized->get_bool(BatchSoundBankVirtualFrees_type_id); 
	}

	[[nodiscard]] auto
	EngineAmortizationSettings::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	EngineAmortizationSettings::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<EngineAmortizationSettings> {
		if (incoming_type_id == EngineAmortizationSettings::type_id) {
			return std::make_shared<EngineAmortizationSettings>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
