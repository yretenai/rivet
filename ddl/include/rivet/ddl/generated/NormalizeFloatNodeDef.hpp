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

	struct RIVET_DDL_SHARED NormalizeFloatNodeDef : MathNodeBaseDef {
		constexpr static std::string_view type_name = "NormalizeFloatNodeDef";
		constexpr static rivet::rivet_type_id type_id = 0xd6c0e8c8;

		constexpr static std::string_view Input_type_name = "Input";
		constexpr static rivet::rivet_type_id Input_type_id = 0xc17bfe16;
		constexpr static std::string_view ZeroValue_type_name = "ZeroValue";
		constexpr static rivet::rivet_type_id ZeroValue_type_id = 0x1b39096;
		constexpr static std::string_view OneValue_type_name = "OneValue";
		constexpr static rivet::rivet_type_id OneValue_type_id = 0xfccf972;
		constexpr static std::string_view Normalized_type_name = "Normalized";
		constexpr static rivet::rivet_type_id Normalized_type_id = 0xa22bde2e; 

		explicit NormalizeFloatNodeDef() = default;
		explicit NormalizeFloatNodeDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::InputPlugFloat> Input {};
		std::shared_ptr<rivet::ddl::generated::InputPlugFloat> ZeroValue {};
		std::shared_ptr<rivet::ddl::generated::InputPlugFloat> OneValue {};
		std::shared_ptr<rivet::ddl::generated::OutputPlugFloat> Normalized {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<NormalizeFloatNodeDef>;
	};
} // namespace rivet::ddl::generated

// clang-format on
