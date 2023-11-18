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
	struct TriggerConditionAlwaysPrius; 

	struct RIVET_DDL_SHARED TriggerByBasePrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "TriggerByBasePrius";
		constexpr static rivet::rivet_type_id type_id = 0x7224cc34;

		constexpr static std::string_view StartEnabled_type_name = "StartEnabled";
		constexpr static rivet::rivet_type_id StartEnabled_type_id = 0x6f36ca8b;
		constexpr static std::string_view DoUntrigger_type_name = "DoUntrigger";
		constexpr static rivet::rivet_type_id DoUntrigger_type_id = 0x5c193ce3;
		constexpr static std::string_view GroupName_type_name = "GroupName";
		constexpr static rivet::rivet_type_id GroupName_type_id = 0xb215bfb7;
		constexpr static std::string_view Condition_type_name = "Condition";
		constexpr static rivet::rivet_type_id Condition_type_id = 0x3f2b174f; 

		explicit TriggerByBasePrius() = default;
		explicit TriggerByBasePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		bool StartEnabled {};
		bool DoUntrigger {};
		std::string_view GroupName {};
		std::shared_ptr<rivet::ddl::generated::TriggerConditionAlwaysPrius> Condition {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TriggerByBasePrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
