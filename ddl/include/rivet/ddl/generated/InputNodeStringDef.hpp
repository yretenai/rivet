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

#include <rivet/ddl/generated/InputNodeBaseDef.hpp> 

namespace rivet::ddl::generated {
	struct OutputPlugString;
	struct InputPlugString; 

	struct RIVET_DDL_SHARED InputNodeStringDef : InputNodeBaseDef {
		constexpr static std::string_view type_name = "InputNodeStringDef";
		constexpr static rivet::rivet_type_id type_id = 0x45bcb585;

		constexpr static std::string_view Input_type_name = "Input";
		constexpr static rivet::rivet_type_id Input_type_id = 0xc17bfe16;
		constexpr static std::string_view Output_type_name = "Output";
		constexpr static rivet::rivet_type_id Output_type_id = 0xf2a65af9; 

		explicit InputNodeStringDef() = default;
		explicit InputNodeStringDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::InputPlugString> Input {};
		std::shared_ptr<rivet::ddl::generated::OutputPlugString> Output {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<InputNodeStringDef>;
	};
} // namespace rivet::ddl::generated

// clang-format on
