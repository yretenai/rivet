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
	struct RIVET_DDL_SHARED RicochetData : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "RicochetData";
		constexpr static rivet::rivet_type_id type_id = 0x7c6a4642;

		constexpr static std::string_view BuildUpTime_type_name = "BuildUpTime";
		constexpr static rivet::rivet_type_id BuildUpTime_type_id = 0xbd8dfa03;
		constexpr static std::string_view SuccessTime_type_name = "SuccessTime";
		constexpr static rivet::rivet_type_id SuccessTime_type_id = 0xaed9ee75;
		constexpr static std::string_view FailTime_type_name = "FailTime";
		constexpr static rivet::rivet_type_id FailTime_type_id = 0x39bda0cd; 

		explicit RicochetData() = default;
		explicit RicochetData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float BuildUpTime {};
		float SuccessTime {};
		float FailTime {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RicochetData>;
	};
} // namespace rivet::ddl::generated

// clang-format on
