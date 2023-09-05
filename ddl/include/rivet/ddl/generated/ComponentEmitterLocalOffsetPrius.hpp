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

#include <rivet/ddl/generated/ComponentEmitterBasePrius.hpp> 

namespace rivet::ddl::generated {
	struct DDLVector3; 

	struct RIVET_DDL_SHARED ComponentEmitterLocalOffsetPrius : ComponentEmitterBasePrius {
		constexpr const static std::string_view type_name = "ComponentEmitterLocalOffsetPrius";
		constexpr const static rivet::rivet_type_id type_id = 0xb24a897c;

		constexpr const static std::string_view EmitFromUser_type_name = "EmitFromUser";
		constexpr const static rivet::rivet_type_id EmitFromUser_type_id = 0x13b721db;
		constexpr const static std::string_view UseWorldUp_type_name = "UseWorldUp";
		constexpr const static rivet::rivet_type_id UseWorldUp_type_id = 0x4cdc032f;
		constexpr const static std::string_view Offset_type_name = "Offset";
		constexpr const static rivet::rivet_type_id Offset_type_id = 0x677284b7; 

		explicit ComponentEmitterLocalOffsetPrius() = default;
		explicit ComponentEmitterLocalOffsetPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		bool EmitFromUser {};
		bool UseWorldUp {};
		std::shared_ptr<rivet::ddl::generated::DDLVector3> Offset {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ComponentEmitterLocalOffsetPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
