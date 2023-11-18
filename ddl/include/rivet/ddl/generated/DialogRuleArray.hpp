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
	struct DialogRuleContainer; 

	struct RIVET_DDL_SHARED DialogRuleArray : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "DialogRuleArray";
		constexpr static rivet::rivet_type_id type_id = 0x3a0fa4f4;

		constexpr static std::string_view Rules_type_name = "Rules";
		constexpr static rivet::rivet_type_id Rules_type_id = 0x90c955fd; 

		explicit DialogRuleArray() = default;
		explicit DialogRuleArray([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<std::shared_ptr<rivet::ddl::generated::DialogRuleContainer>> Rules {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DialogRuleArray>;
	};
} // namespace rivet::ddl::generated

// clang-format on
