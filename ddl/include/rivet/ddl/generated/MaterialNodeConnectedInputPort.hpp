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
	struct MaterialNodeConnectedPort;
	struct DDLVector2; 

	struct RIVET_DDL_SHARED MaterialNodeConnectedInputPort : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "MaterialNodeConnectedInputPort";
		constexpr static rivet::rivet_type_id type_id = 0xada7ceec;

		constexpr static std::string_view Id_type_name = "Id";
		constexpr static rivet::rivet_type_id Id_type_id = 0x8a514a8d;
		constexpr static std::string_view Pins_type_name = "Pins";
		constexpr static rivet::rivet_type_id Pins_type_id = 0xf9f2930;
		constexpr static std::string_view Source_type_name = "Source";
		constexpr static rivet::rivet_type_id Source_type_id = 0x61f23114; 

		explicit MaterialNodeConnectedInputPort() = default;
		explicit MaterialNodeConnectedInputPort([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view Id {};
		std::vector<std::shared_ptr<rivet::ddl::generated::DDLVector2>> Pins {};
		std::shared_ptr<rivet::ddl::generated::MaterialNodeConnectedPort> Source {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MaterialNodeConnectedInputPort>;
	};
} // namespace rivet::ddl::generated

// clang-format on
