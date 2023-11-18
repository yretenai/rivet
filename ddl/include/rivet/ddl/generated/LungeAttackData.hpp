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
	struct RIVET_DDL_SHARED LungeAttackData : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "LungeAttackData";
		constexpr static rivet::rivet_type_id type_id = 0xa18815c3;

		constexpr static std::string_view DoTell_type_name = "DoTell";
		constexpr static rivet::rivet_type_id DoTell_type_id = 0x8082daf2;
		constexpr static std::string_view TellTime_type_name = "TellTime";
		constexpr static rivet::rivet_type_id TellTime_type_id = 0xa3a1233b;
		constexpr static std::string_view TellPredictiveT_type_name = "TellPredictiveT";
		constexpr static rivet::rivet_type_id TellPredictiveT_type_id = 0xdfe2b94f;
		constexpr static std::string_view TellMaxRotationSpeed_type_name = "TellMaxRotationSpeed";
		constexpr static rivet::rivet_type_id TellMaxRotationSpeed_type_id = 0x828e016d;
		constexpr static std::string_view LungeDistance_type_name = "LungeDistance";
		constexpr static rivet::rivet_type_id LungeDistance_type_id = 0xbf067034;
		constexpr static std::string_view LungeTime_type_name = "LungeTime";
		constexpr static rivet::rivet_type_id LungeTime_type_id = 0x4b5b7ee6;
		constexpr static std::string_view LungeLandingOffset_type_name = "LungeLandingOffset";
		constexpr static rivet::rivet_type_id LungeLandingOffset_type_id = 0xbe47ab0f;
		constexpr static std::string_view DoRecover_type_name = "DoRecover";
		constexpr static rivet::rivet_type_id DoRecover_type_id = 0xcbe9feb2;
		constexpr static std::string_view RecoveryTime_type_name = "RecoveryTime";
		constexpr static rivet::rivet_type_id RecoveryTime_type_id = 0x7d817be;
		constexpr static std::string_view StickToPlayer_type_name = "StickToPlayer";
		constexpr static rivet::rivet_type_id StickToPlayer_type_id = 0x5de519a1;
		constexpr static std::string_view DisableFriendlyCVC_type_name = "DisableFriendlyCVC";
		constexpr static rivet::rivet_type_id DisableFriendlyCVC_type_id = 0xaa7ccfda;
		constexpr static std::string_view BailIfOffscreenAfterTell_type_name = "BailIfOffscreenAfterTell";
		constexpr static rivet::rivet_type_id BailIfOffscreenAfterTell_type_id = 0x47d95b5c;
		constexpr static std::string_view BailIfCloserThanAfterTell_type_name = "BailIfCloserThanAfterTell";
		constexpr static rivet::rivet_type_id BailIfCloserThanAfterTell_type_id = 0xf0c3f765;
		constexpr static std::string_view NumLungeVariations_type_name = "NumLungeVariations";
		constexpr static rivet::rivet_type_id NumLungeVariations_type_id = 0x65a05c2; 

		explicit LungeAttackData() = default;
		explicit LungeAttackData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		bool DoTell {};
		float TellTime {};
		float TellPredictiveT {};
		float TellMaxRotationSpeed {};
		float LungeDistance {};
		float LungeTime {};
		float LungeLandingOffset {};
		bool DoRecover {};
		float RecoveryTime {};
		bool StickToPlayer {};
		bool DisableFriendlyCVC {};
		bool BailIfOffscreenAfterTell {};
		float BailIfCloserThanAfterTell {};
		int32_t NumLungeVariations {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<LungeAttackData>;
	};
} // namespace rivet::ddl::generated

// clang-format on
