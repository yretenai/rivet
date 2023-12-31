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
	struct RIVET_DDL_SHARED SessionFileInfo : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "SessionFileInfo";
		constexpr static rivet::rivet_type_id type_id = 0x959ed8f6;

		constexpr static std::string_view Path_type_name = "Path";
		constexpr static rivet::rivet_type_id Path_type_id = 0x3bc44bbf;
		constexpr static std::string_view Writable_type_name = "Writable";
		constexpr static rivet::rivet_type_id Writable_type_id = 0x5db11d5b;
		constexpr static std::string_view IsPrimary_type_name = "IsPrimary";
		constexpr static rivet::rivet_type_id IsPrimary_type_id = 0xf37f264a;
		constexpr static std::string_view PromptForCheckout_type_name = "PromptForCheckout";
		constexpr static rivet::rivet_type_id PromptForCheckout_type_id = 0xffbbc402;
		constexpr static std::string_view PromptForWarnings_type_name = "PromptForWarnings";
		constexpr static rivet::rivet_type_id PromptForWarnings_type_id = 0x39ca0f5e; 

		explicit SessionFileInfo() = default;
		explicit SessionFileInfo([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view Path {};
		bool Writable {};
		bool IsPrimary {};
		bool PromptForCheckout {};
		bool PromptForWarnings {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SessionFileInfo>;
	};
} // namespace rivet::ddl::generated

// clang-format on
