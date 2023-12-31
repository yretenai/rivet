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

#include <rivet/ddl/generated/ConfigBase.hpp> 

namespace rivet::ddl::generated {
	struct ReferenceRuleSet; 

	struct RIVET_DDL_SHARED PriusReferenceGenerationRulesConfig : ConfigBase {
		constexpr static std::string_view type_name = "PriusReferenceGenerationRulesConfig";
		constexpr static rivet::rivet_type_id type_id = 0xb8045d99;

		constexpr static std::string_view ReferenceRuleSets_type_name = "ReferenceRuleSets";
		constexpr static rivet::rivet_type_id ReferenceRuleSets_type_id = 0xcd71b7a2; 

		explicit PriusReferenceGenerationRulesConfig() = default;
		explicit PriusReferenceGenerationRulesConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<std::shared_ptr<rivet::ddl::generated::ReferenceRuleSet>> ReferenceRuleSets {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PriusReferenceGenerationRulesConfig>;
	};
} // namespace rivet::ddl::generated

// clang-format on
