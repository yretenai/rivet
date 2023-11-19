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
	struct RIVET_DDL_SHARED GlobalSaveTableSaveData : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "GlobalSaveTableSaveData";
		constexpr static rivet::rivet_type_id type_id = 0x4f38bae1;

		constexpr static std::string_view Table_type_name = "Table";
		constexpr static rivet::rivet_type_id Table_type_id = 0xef7a4387; 

		explicit GlobalSaveTableSaveData() = default;
		explicit GlobalSaveTableSaveData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<float> Table {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GlobalSaveTableSaveData>;
	};
} // namespace rivet::ddl::generated

// clang-format on