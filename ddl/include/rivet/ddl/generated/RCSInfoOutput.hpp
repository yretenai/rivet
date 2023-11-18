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
	struct RCSDictionary;
	struct RCSMessage; 

	struct RIVET_DDL_SHARED RCSInfoOutput : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "RCSInfoOutput";
		constexpr static rivet::rivet_type_id type_id = 0xabc0e09a;

		constexpr static std::string_view Warnings_type_name = "Warnings";
		constexpr static rivet::rivet_type_id Warnings_type_id = 0x93485b62;
		constexpr static std::string_view Errors_type_name = "Errors";
		constexpr static rivet::rivet_type_id Errors_type_id = 0x2291d7a;
		constexpr static std::string_view Stats_type_name = "Stats";
		constexpr static rivet::rivet_type_id Stats_type_id = 0x4e14ab6b; 

		explicit RCSInfoOutput() = default;
		explicit RCSInfoOutput([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::RCSMessage> Warnings {};
		std::shared_ptr<rivet::ddl::generated::RCSMessage> Errors {};
		std::vector<std::shared_ptr<rivet::ddl::generated::RCSDictionary>> Stats {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RCSInfoOutput>;
	};
} // namespace rivet::ddl::generated

// clang-format on
