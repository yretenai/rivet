// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/GeyserFlowData.hpp>

namespace rivet::ddl::generated {
	GeyserFlowData::GeyserFlowData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		FlowVel = serialized->get_float(FlowVel_type_id);
		FlowDuration = serialized->get_float(FlowDuration_type_id);
		TaperVel = serialized->get_float(TaperVel_type_id);
		TaperDuration = serialized->get_float(TaperDuration_type_id);
		PostTaperDuration = serialized->get_float(PostTaperDuration_type_id);
		ChecksPerSecond = serialized->get_float(ChecksPerSecond_type_id);
		Gravity = serialized->get_float(Gravity_type_id);
		Damage = serialized->get_float(Damage_type_id);
		Knockback = serialized->get_enum<rivet::ddl::generated::KnockbackLevels>(Knockback_type_id, rivet::ddl::generated::KnockbackLevels_values);
		KnockbackAmount = serialized->get_float(KnockbackAmount_type_id);
		MaterialInner = serialized->get_string(MaterialInner_type_id);
		RadiusInner = serialized->get_float(RadiusInner_type_id);
		MaterialOuter = serialized->get_string(MaterialOuter_type_id);
		RadiusOuter = serialized->get_float(RadiusOuter_type_id); 
	}

	[[nodiscard]] auto
	GeyserFlowData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	GeyserFlowData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GeyserFlowData> {
		if (incoming_type_id == GeyserFlowData::type_id) {
			return std::make_shared<GeyserFlowData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
