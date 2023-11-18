// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AimAssistTargetSelection.hpp>
#include <rivet/ddl/generated/AimAssistFactorModifiers.hpp>
#include <rivet/ddl/generated/AimAssistSettleDecel.hpp>
#include <rivet/ddl/generated/AimAssistSnagData.hpp>
#include <rivet/ddl/generated/AimAssistCentering.hpp>
#include <rivet/ddl/generated/AimAssistBoxProcessData.hpp>
#include <rivet/ddl/generated/AimAssistMagnetData.hpp>
#include <rivet/ddl/generated/AimAssistSnapLockData.hpp>
#include <rivet/ddl/generated/AimAssistFrictionData.hpp> 

#include <rivet/ddl/generated/AimAssistUserConfig.hpp>

namespace rivet::ddl::generated {
	AimAssistUserConfig::AimAssistUserConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ConfigBase(serialized) {
		FrictionData = serialized->unwrap_into<rivet::ddl::generated::AimAssistFrictionData>(FrictionData_type_id);
		MagnetData = serialized->unwrap_into<rivet::ddl::generated::AimAssistMagnetData>(MagnetData_type_id);
		CenteringData = serialized->unwrap_into<rivet::ddl::generated::AimAssistCentering>(CenteringData_type_id);
		SnagData = serialized->unwrap_into<rivet::ddl::generated::AimAssistSnagData>(SnagData_type_id);
		SettleDecel = serialized->unwrap_into<rivet::ddl::generated::AimAssistSettleDecel>(SettleDecel_type_id);
		BoxProcessData = serialized->unwrap_into<rivet::ddl::generated::AimAssistBoxProcessData>(BoxProcessData_type_id);
		SnapLockData = serialized->unwrap_into<rivet::ddl::generated::AimAssistSnapLockData>(SnapLockData_type_id);
		TargetSelection = serialized->unwrap_into<rivet::ddl::generated::AimAssistTargetSelection>(TargetSelection_type_id);
		FactorModifiers = serialized->unwrap_into<rivet::ddl::generated::AimAssistFactorModifiers>(FactorModifiers_type_id);
		AimAssistAngle = serialized->get_float(AimAssistAngle_type_id); 
	}

	[[nodiscard]] auto
	AimAssistUserConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AimAssistUserConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AimAssistUserConfig> {
		if (incoming_type_id == AimAssistUserConfig::type_id) {
			return std::make_shared<AimAssistUserConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
