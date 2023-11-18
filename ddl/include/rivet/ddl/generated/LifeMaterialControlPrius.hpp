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
	struct RIVET_DDL_SHARED LifeMaterialControlPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "LifeMaterialControlPrius";
		constexpr static rivet::rivet_type_id type_id = 0xce056248;

		constexpr static std::string_view VarName_type_name = "VarName";
		constexpr static rivet::rivet_type_id VarName_type_id = 0x8cd13823;
		constexpr static std::string_view InvertValue_type_name = "InvertValue";
		constexpr static rivet::rivet_type_id InvertValue_type_id = 0xe88e6631;
		constexpr static std::string_view FadeTime_type_name = "FadeTime";
		constexpr static rivet::rivet_type_id FadeTime_type_id = 0x8833d162; 

		explicit LifeMaterialControlPrius() = default;
		explicit LifeMaterialControlPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view VarName {};
		bool InvertValue {};
		float FadeTime {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<LifeMaterialControlPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
