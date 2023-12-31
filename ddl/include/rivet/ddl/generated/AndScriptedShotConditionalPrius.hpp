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

#include <rivet/ddl/generated/ScriptedShotConditionalBasePrius.hpp> 

namespace rivet::ddl::generated {
	struct ScriptedShotConditionalBasePrius; 

	struct RIVET_DDL_SHARED AndScriptedShotConditionalPrius : ScriptedShotConditionalBasePrius {
		constexpr static std::string_view type_name = "AndScriptedShotConditionalPrius";
		constexpr static rivet::rivet_type_id type_id = 0x431d3220;

		constexpr static std::string_view Cond1_type_name = "Cond1";
		constexpr static rivet::rivet_type_id Cond1_type_id = 0x70a099a7;
		constexpr static std::string_view Cond2_type_name = "Cond2";
		constexpr static rivet::rivet_type_id Cond2_type_id = 0xe9a9c81d; 

		explicit AndScriptedShotConditionalPrius() = default;
		explicit AndScriptedShotConditionalPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::ScriptedShotConditionalBasePrius> Cond1 {};
		std::shared_ptr<rivet::ddl::generated::ScriptedShotConditionalBasePrius> Cond2 {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AndScriptedShotConditionalPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
