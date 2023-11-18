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

#include <rivet/ddl/generated/AndMissionSystemNodeDef.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED InputCountMissionSystemNodeDef : AndMissionSystemNodeDef {
		constexpr static std::string_view type_name = "InputCountMissionSystemNodeDef";
		constexpr static rivet::rivet_type_id type_id = 0xdbf734ba;

		constexpr static std::string_view NumRequired_type_name = "NumRequired";
		constexpr static rivet::rivet_type_id NumRequired_type_id = 0x257a6d10; 

		explicit InputCountMissionSystemNodeDef() = default;
		explicit InputCountMissionSystemNodeDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint32_t NumRequired {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<InputCountMissionSystemNodeDef>;
	};
} // namespace rivet::ddl::generated

// clang-format on
