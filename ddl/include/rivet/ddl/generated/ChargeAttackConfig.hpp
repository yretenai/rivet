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
	struct ChargeAttackData; 

	struct RIVET_DDL_SHARED ChargeAttackConfig : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "ChargeAttackConfig";
		constexpr static rivet::rivet_type_id type_id = 0x78660808;

		constexpr static std::string_view UseBelowHPFraction_type_name = "UseBelowHPFraction";
		constexpr static rivet::rivet_type_id UseBelowHPFraction_type_id = 0x70528dd6;
		constexpr static std::string_view MinIntervalGlobal_type_name = "MinIntervalGlobal";
		constexpr static rivet::rivet_type_id MinIntervalGlobal_type_id = 0xc8e8e65e;
		constexpr static std::string_view MinIntervalSelf_type_name = "MinIntervalSelf";
		constexpr static rivet::rivet_type_id MinIntervalSelf_type_id = 0xfe32ef5a;
		constexpr static std::string_view MinStartDist_type_name = "MinStartDist";
		constexpr static rivet::rivet_type_id MinStartDist_type_id = 0xeea7e0ef;
		constexpr static std::string_view MaxStartDist_type_name = "MaxStartDist";
		constexpr static rivet::rivet_type_id MaxStartDist_type_id = 0x7ed4f005;
		constexpr static std::string_view MaxStartAngle_type_name = "MaxStartAngle";
		constexpr static rivet::rivet_type_id MaxStartAngle_type_id = 0x81cf9194;
		constexpr static std::string_view ChargeAttackData_type_name = "ChargeAttackData";
		constexpr static rivet::rivet_type_id ChargeAttackData_type_id = 0x1355867c; 

		explicit ChargeAttackConfig() = default;
		explicit ChargeAttackConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float UseBelowHPFraction {};
		float MinIntervalGlobal {};
		float MinIntervalSelf {};
		float MinStartDist {};
		float MaxStartDist {};
		float MaxStartAngle {};
		std::shared_ptr<rivet::ddl::generated::ChargeAttackData> ChargeAttackData {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ChargeAttackConfig>;
	};
} // namespace rivet::ddl::generated

// clang-format on
