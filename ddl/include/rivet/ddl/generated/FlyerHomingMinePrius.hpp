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

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED FlyerHomingMinePrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "FlyerHomingMinePrius";
		constexpr static rivet::rivet_type_id type_id = 0xb2e3451a;

		constexpr static std::string_view DamageRadius_type_name = "DamageRadius";
		constexpr static rivet::rivet_type_id DamageRadius_type_id = 0xe3e6fa68;
		constexpr static std::string_view DamageAmount_type_name = "DamageAmount";
		constexpr static rivet::rivet_type_id DamageAmount_type_id = 0x563be470;
		constexpr static std::string_view TriggerRadius_type_name = "TriggerRadius";
		constexpr static rivet::rivet_type_id TriggerRadius_type_id = 0xcc7f53a5;
		constexpr static std::string_view HomingActivationRadius_type_name = "HomingActivationRadius";
		constexpr static rivet::rivet_type_id HomingActivationRadius_type_id = 0x754144e5;
		constexpr static std::string_view HomingDeactivationRadius_type_name = "HomingDeactivationRadius";
		constexpr static rivet::rivet_type_id HomingDeactivationRadius_type_id = 0xd43ee281;
		constexpr static std::string_view HomingSpeed_type_name = "HomingSpeed";
		constexpr static rivet::rivet_type_id HomingSpeed_type_id = 0x88953b61;
		constexpr static std::string_view HomingAcceleration_type_name = "HomingAcceleration";
		constexpr static rivet::rivet_type_id HomingAcceleration_type_id = 0xabb951f6;
		constexpr static std::string_view HomingDeceleration_type_name = "HomingDeceleration";
		constexpr static rivet::rivet_type_id HomingDeceleration_type_id = 0xdbafeca5;
		constexpr static std::string_view AutoDestructTime_type_name = "AutoDestructTime";
		constexpr static rivet::rivet_type_id AutoDestructTime_type_id = 0x4b235bdb;
		constexpr static std::string_view CutOffMinDistance_type_name = "CutOffMinDistance";
		constexpr static rivet::rivet_type_id CutOffMinDistance_type_id = 0xd3b58087;
		constexpr static std::string_view CutOffMaxDistance_type_name = "CutOffMaxDistance";
		constexpr static rivet::rivet_type_id CutOffMaxDistance_type_id = 0x1fb8fb88;
		constexpr static std::string_view MustBeInViewToActivate_type_name = "MustBeInViewToActivate";
		constexpr static rivet::rivet_type_id MustBeInViewToActivate_type_id = 0x2b395f52;
		constexpr static std::string_view DeactivateWhenOutOfView_type_name = "DeactivateWhenOutOfView";
		constexpr static rivet::rivet_type_id DeactivateWhenOutOfView_type_id = 0xbdf17966; 

		explicit FlyerHomingMinePrius() = default;
		explicit FlyerHomingMinePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float DamageRadius {};
		float DamageAmount {};
		float TriggerRadius {};
		float HomingActivationRadius {};
		float HomingDeactivationRadius {};
		float HomingSpeed {};
		float HomingAcceleration {};
		float HomingDeceleration {};
		float AutoDestructTime {};
		float CutOffMinDistance {};
		float CutOffMaxDistance {};
		bool MustBeInViewToActivate {};
		bool DeactivateWhenOutOfView {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<FlyerHomingMinePrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
