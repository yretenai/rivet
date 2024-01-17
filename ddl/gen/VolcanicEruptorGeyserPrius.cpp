// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/GeyserShotSpawnData.hpp>
#include <rivet/ddl/generated/GeyserFlowData.hpp>
#include <rivet/ddl/generated/GeyserBurstData.hpp> 

#include <rivet/ddl/generated/VolcanicEruptorGeyserPrius.hpp>

namespace rivet::ddl::generated {
	VolcanicEruptorGeyserPrius::VolcanicEruptorGeyserPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Radius = serialized->get_float(Radius_type_id, 0.800000);
		InitialDelay = serialized->get_float(InitialDelay_type_id, 0.000000);
		DamageType = serialized->get_enum<rivet::ddl::generated::DamageTypes>(DamageType_type_id, rivet::ddl::generated::DamageTypes_values, rivet::ddl::generated::DamageTypes::Fire);
		DebugDraw = serialized->get_bool(DebugDraw_type_id, false);
		BurstData = serialized->unwrap_into<rivet::ddl::generated::GeyserBurstData>(BurstData_type_id);
		FlowData = serialized->unwrap_into<rivet::ddl::generated::GeyserFlowData>(FlowData_type_id);
		ShotSpawnData = serialized->unwrap_into<rivet::ddl::generated::GeyserShotSpawnData>(ShotSpawnData_type_id); 
	}

	[[nodiscard]] auto
	VolcanicEruptorGeyserPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	VolcanicEruptorGeyserPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VolcanicEruptorGeyserPrius> {
		if (incoming_type_id == VolcanicEruptorGeyserPrius::type_id) {
			return std::make_shared<VolcanicEruptorGeyserPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
