// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

// clang-format off

#include <cstdint>
#include <memory>
#include <string_view>
#include <vector>

#include <rivet/hash/type_id.hpp>
#include <rivet/rivet_array.hpp>
#include <rivet/rivet_keywords.hpp>
#include <rivet/structures/rivet_serialization.hpp>

#include <rivet/ddl/generated/ConfigBase.hpp> 

namespace rivet::ddl::generated {
	struct AimAssistSnapLockData;
	struct AimAssistBoxProcessData;
	struct AimAssistSettleDecel;
	struct AimAssistFactorModifiers;
	struct AimAssistTargetSelection;
	struct AimAssistSnagData;
	struct AimAssistCentering;
	struct AimAssistMagnetData;
	struct AimAssistFrictionData; 

	struct RIVET_DDL_SHARED AimAssistUserConfig : ConfigBase {
		constexpr static std::string_view type_name = "AimAssistUserConfig";
		constexpr static rivet::rivet_type_id type_id = 0xdf3bd36;

		constexpr static std::string_view FrictionData_type_name = "FrictionData";
		constexpr static rivet::rivet_type_id FrictionData_type_id = 0x54772f50;
		constexpr static std::string_view MagnetData_type_name = "MagnetData";
		constexpr static rivet::rivet_type_id MagnetData_type_id = 0x2ef4e9d5;
		constexpr static std::string_view CenteringData_type_name = "CenteringData";
		constexpr static rivet::rivet_type_id CenteringData_type_id = 0x1d038c45;
		constexpr static std::string_view SnagData_type_name = "SnagData";
		constexpr static rivet::rivet_type_id SnagData_type_id = 0xa24a3731;
		constexpr static std::string_view SettleDecel_type_name = "SettleDecel";
		constexpr static rivet::rivet_type_id SettleDecel_type_id = 0x90bb906a;
		constexpr static std::string_view BoxProcessData_type_name = "BoxProcessData";
		constexpr static rivet::rivet_type_id BoxProcessData_type_id = 0x74e65f59;
		constexpr static std::string_view SnapLockData_type_name = "SnapLockData";
		constexpr static rivet::rivet_type_id SnapLockData_type_id = 0x6860ef09;
		constexpr static std::string_view TargetSelection_type_name = "TargetSelection";
		constexpr static rivet::rivet_type_id TargetSelection_type_id = 0xe3d4cbf0;
		constexpr static std::string_view FactorModifiers_type_name = "FactorModifiers";
		constexpr static rivet::rivet_type_id FactorModifiers_type_id = 0xbc9a7f1a;
		constexpr static std::string_view AimAssistAngle_type_name = "AimAssistAngle";
		constexpr static rivet::rivet_type_id AimAssistAngle_type_id = 0xebc9ff29; 

		explicit AimAssistUserConfig() = default;
		explicit AimAssistUserConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::AimAssistFrictionData> FrictionData {};
		std::shared_ptr<rivet::ddl::generated::AimAssistMagnetData> MagnetData {};
		std::shared_ptr<rivet::ddl::generated::AimAssistCentering> CenteringData {};
		std::shared_ptr<rivet::ddl::generated::AimAssistSnagData> SnagData {};
		std::shared_ptr<rivet::ddl::generated::AimAssistSettleDecel> SettleDecel {};
		std::shared_ptr<rivet::ddl::generated::AimAssistBoxProcessData> BoxProcessData {};
		std::shared_ptr<rivet::ddl::generated::AimAssistSnapLockData> SnapLockData {};
		std::shared_ptr<rivet::ddl::generated::AimAssistTargetSelection> TargetSelection {};
		std::shared_ptr<rivet::ddl::generated::AimAssistFactorModifiers> FactorModifiers {};
		float AimAssistAngle {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AimAssistUserConfig>;
	};
} // namespace rivet::ddl::generated

// clang-format on
