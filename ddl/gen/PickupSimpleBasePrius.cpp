// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/PickupSimplePrius.hpp>
#include <rivet/ddl/generated/DDLVector3.hpp> 

#include <rivet/ddl/generated/PickupSimpleBasePrius.hpp>

namespace rivet::ddl::generated {
	PickupSimpleBasePrius::PickupSimpleBasePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Velocity = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(Velocity_type_id);
		DecayTimer = serialized->get_float(DecayTimer_type_id);
		NoPickupTime = serialized->get_float(NoPickupTime_type_id);
		PickupRange = serialized->get_float(PickupRange_type_id);
		AutoCollectTime = serialized->get_float(AutoCollectTime_type_id);
		IdealCollectTime = serialized->get_float(IdealCollectTime_type_id);
		StartFixed = serialized->get_bool(StartFixed_type_id);
		DoBob = serialized->get_bool(DoBob_type_id);
		DoSpin = serialized->get_bool(DoSpin_type_id);
		AutoCollectOnFallOut = serialized->get_bool(AutoCollectOnFallOut_type_id);
		AutoCollectOnSpawn = serialized->get_bool(AutoCollectOnSpawn_type_id);
		DoSwarm = serialized->get_bool(DoSwarm_type_id); 
	}

	[[nodiscard]] auto
	PickupSimpleBasePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	PickupSimpleBasePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PickupSimpleBasePrius> {
		if (incoming_type_id == PickupSimpleBasePrius::type_id) {
			return std::make_shared<PickupSimpleBasePrius>(serialized);
		}

		auto PickupSimplePrius_ptr = PickupSimplePrius::from_substruct(incoming_type_id, serialized);
		if (PickupSimplePrius_ptr != nullptr) {
			return PickupSimplePrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
