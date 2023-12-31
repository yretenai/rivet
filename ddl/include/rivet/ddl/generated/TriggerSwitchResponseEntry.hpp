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
	struct TriggerResponderBasePrius; 

	struct RIVET_DDL_SHARED TriggerSwitchResponseEntry : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "TriggerSwitchResponseEntry";
		constexpr static rivet::rivet_type_id type_id = 0xa8152bb9;

		constexpr static std::string_view Response_type_name = "Response";
		constexpr static rivet::rivet_type_id Response_type_id = 0xc47ab68b;
		constexpr static std::string_view Delay_type_name = "Delay";
		constexpr static rivet::rivet_type_id Delay_type_id = 0xabc94c5a; 

		explicit TriggerSwitchResponseEntry() = default;
		explicit TriggerSwitchResponseEntry([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::TriggerResponderBasePrius> Response {};
		float Delay {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TriggerSwitchResponseEntry>;
	};
} // namespace rivet::ddl::generated

// clang-format on
