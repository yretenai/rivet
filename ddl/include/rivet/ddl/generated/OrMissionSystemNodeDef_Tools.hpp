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

#include <rivet/ddl/generated/NodeBaseDef.hpp> 

namespace rivet::ddl::generated {
	struct OutputPlugBoolean;
	struct InputPlugBoolean; 

	struct RIVET_DDL_SHARED OrMissionSystemNodeDef_Tools : NodeBaseDef {
		constexpr static std::string_view type_name = "OrMissionSystemNodeDef_Tools";
		constexpr static rivet::rivet_type_id type_id = 0x23f5f43b;

		constexpr static std::string_view Inputs_type_name = "Inputs";
		constexpr static rivet::rivet_type_id Inputs_type_id = 0x3d19ee29;
		constexpr static std::string_view Output_type_name = "Output";
		constexpr static rivet::rivet_type_id Output_type_id = 0xf2a65af9; 

		explicit OrMissionSystemNodeDef_Tools() = default;
		explicit OrMissionSystemNodeDef_Tools([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<std::shared_ptr<rivet::ddl::generated::InputPlugBoolean>> Inputs {};
		std::shared_ptr<rivet::ddl::generated::OutputPlugBoolean> Output {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<OrMissionSystemNodeDef_Tools>;
	};
} // namespace rivet::ddl::generated

// clang-format on
