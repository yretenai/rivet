// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/CurveFollowerBankingPrius.hpp>

namespace rivet::ddl::generated {
	CurveFollowerBankingPrius::CurveFollowerBankingPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		StartEnabled = serialized->get_bool(StartEnabled_type_id);
		UseBankAnim = serialized->get_bool(UseBankAnim_type_id);
		UseLeanAnimVar = serialized->get_bool(UseLeanAnimVar_type_id);
		NormalizeBank = serialized->get_bool(NormalizeBank_type_id);
		ReverseNormBank = serialized->get_bool(ReverseNormBank_type_id);
		MaxBankAngle = serialized->get_float(MaxBankAngle_type_id);
		SpeedForMaxAngle = serialized->get_float(SpeedForMaxAngle_type_id);
		LookAheadTime = serialized->get_float(LookAheadTime_type_id);
		TimeToMaxBank = serialized->get_float(TimeToMaxBank_type_id);
		TimeToExitBank = serialized->get_float(TimeToExitBank_type_id);
		AccelTime = serialized->get_float(AccelTime_type_id); 
	}

	[[nodiscard]] auto
	CurveFollowerBankingPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CurveFollowerBankingPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CurveFollowerBankingPrius> {
		if (incoming_type_id == CurveFollowerBankingPrius::type_id) {
			return std::make_shared<CurveFollowerBankingPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated