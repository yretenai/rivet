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
	struct RIVET_DDL_SHARED GeneralInventoryListElement : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "GeneralInventoryListElement";
		constexpr static rivet::rivet_type_id type_id = 0xe7ea02c4;

		constexpr static std::string_view ItemConfigFile_type_name = "ItemConfigFile";
		constexpr static rivet::rivet_type_id ItemConfigFile_type_id = 0x22c4a442; 

		explicit GeneralInventoryListElement() = default;
		explicit GeneralInventoryListElement([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view ItemConfigFile {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GeneralInventoryListElement>;
	};
} // namespace rivet::ddl::generated

// clang-format on
