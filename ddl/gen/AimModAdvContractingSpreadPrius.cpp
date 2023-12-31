// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ContractingVolley.hpp> 

#include <rivet/ddl/generated/AimModAdvContractingSpreadPrius.hpp>

namespace rivet::ddl::generated {
	AimModAdvContractingSpreadPrius::AimModAdvContractingSpreadPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): AimModifierPrius(serialized) {
		InitialVolley = serialized->unwrap_into<rivet::ddl::generated::ContractingVolley>(InitialVolley_type_id);
		FinalVolley = serialized->unwrap_into<rivet::ddl::generated::ContractingVolley>(FinalVolley_type_id);
		VolleysToReachFinal = serialized->get_float(VolleysToReachFinal_type_id);
		ResetTime = serialized->get_float(ResetTime_type_id);
		ResetDist = serialized->get_float(ResetDist_type_id); 
	}

	[[nodiscard]] auto
	AimModAdvContractingSpreadPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AimModAdvContractingSpreadPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AimModAdvContractingSpreadPrius> {
		if (incoming_type_id == AimModAdvContractingSpreadPrius::type_id) {
			return std::make_shared<AimModAdvContractingSpreadPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
