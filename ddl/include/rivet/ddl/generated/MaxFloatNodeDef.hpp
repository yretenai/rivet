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

	struct RIVET_DDL_SHARED MaxFloatNodeDef : MathNodeBaseDef {
		constexpr static std::string_view type_name = "MaxFloatNodeDef";
		constexpr static rivet::rivet_type_id type_id = 0x1b477d28;

		constexpr static std::string_view A_type_name = "A";
		constexpr static rivet::rivet_type_id A_type_id = 0x3a58e94d;
		constexpr static std::string_view B_type_name = "B";
		constexpr static rivet::rivet_type_id B_type_id = 0xa351b8f7;
		constexpr static std::string_view Max_type_name = "Max";
		constexpr static rivet::rivet_type_id Max_type_id = 0xb7230b40; 

		explicit MaxFloatNodeDef() = default;
		explicit MaxFloatNodeDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::InputPlugFloat> A {};
		std::shared_ptr<rivet::ddl::generated::InputPlugFloat> B {};
		std::shared_ptr<rivet::ddl::generated::OutputPlugFloat> Max {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MaxFloatNodeDef>;
	};
} // namespace rivet::ddl::generated

// clang-format on
