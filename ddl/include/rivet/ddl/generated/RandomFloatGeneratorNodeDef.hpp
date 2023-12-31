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

#include <rivet/ddl/generated/MathNodeBaseDef.hpp> 

namespace rivet::ddl::generated {
	struct OutputPlugFloat;
	struct InputPlugFloat;
	struct OutputPlugSignal;
	struct InputPlugSignal; 

	struct RIVET_DDL_SHARED RandomFloatGeneratorNodeDef : MathNodeBaseDef {
		constexpr static std::string_view type_name = "RandomFloatGeneratorNodeDef";
		constexpr static rivet::rivet_type_id type_id = 0xd9863f57;

		constexpr static std::string_view GenerateNext_type_name = "GenerateNext";
		constexpr static rivet::rivet_type_id GenerateNext_type_id = 0x9b44b772;
		constexpr static std::string_view OnGenerateNext_type_name = "OnGenerateNext";
		constexpr static rivet::rivet_type_id OnGenerateNext_type_id = 0x9691f737;
		constexpr static std::string_view Min_type_name = "Min";
		constexpr static rivet::rivet_type_id Min_type_id = 0x8b2e3419;
		constexpr static std::string_view Max_type_name = "Max";
		constexpr static rivet::rivet_type_id Max_type_id = 0xb7230b40;
		constexpr static std::string_view Next_type_name = "Next";
		constexpr static rivet::rivet_type_id Next_type_id = 0x34bfd08c;
		constexpr static std::string_view Info_type_name = "Info";
		constexpr static rivet::rivet_type_id Info_type_id = 0xfb19f1e7; 

		explicit RandomFloatGeneratorNodeDef() = default;
		explicit RandomFloatGeneratorNodeDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::InputPlugSignal> GenerateNext {};
		std::shared_ptr<rivet::ddl::generated::OutputPlugSignal> OnGenerateNext {};
		std::shared_ptr<rivet::ddl::generated::InputPlugFloat> Min {};
		std::shared_ptr<rivet::ddl::generated::InputPlugFloat> Max {};
		std::shared_ptr<rivet::ddl::generated::OutputPlugFloat> Next {};
		std::string_view Info {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RandomFloatGeneratorNodeDef>;
	};
} // namespace rivet::ddl::generated

// clang-format on
