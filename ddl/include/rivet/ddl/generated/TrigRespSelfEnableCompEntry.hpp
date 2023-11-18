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
	struct RIVET_DDL_SHARED TrigRespSelfEnableCompEntry : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "TrigRespSelfEnableCompEntry";
		constexpr static rivet::rivet_type_id type_id = 0x31ea80eb;

		constexpr static std::string_view EnableOnTrigger_type_name = "EnableOnTrigger";
		constexpr static rivet::rivet_type_id EnableOnTrigger_type_id = 0x143b5fcc;
		constexpr static std::string_view RespondToUnTrigger_type_name = "RespondToUnTrigger";
		constexpr static rivet::rivet_type_id RespondToUnTrigger_type_id = 0x24cfed7c;
		constexpr static std::string_view ComponentName_type_name = "ComponentName";
		constexpr static rivet::rivet_type_id ComponentName_type_id = 0xca3706e6; 

		explicit TrigRespSelfEnableCompEntry() = default;
		explicit TrigRespSelfEnableCompEntry([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		bool EnableOnTrigger {};
		bool RespondToUnTrigger {};
		std::string_view ComponentName {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TrigRespSelfEnableCompEntry>;
	};
} // namespace rivet::ddl::generated

// clang-format on
