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

#include <rivet/ddl/generated/ConfigBase.hpp> 

namespace rivet::ddl::generated {
	struct DebugOutfittingList; 

	struct RIVET_DDL_SHARED MasterDebugOutfittingConfig : ConfigBase {
		constexpr static std::string_view type_name = "MasterDebugOutfittingConfig";
		constexpr static rivet::rivet_type_id type_id = 0xbecff62a;

		constexpr static std::string_view Lists_type_name = "Lists";
		constexpr static rivet::rivet_type_id Lists_type_id = 0x11755364; 

		explicit MasterDebugOutfittingConfig() = default;
		explicit MasterDebugOutfittingConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<std::shared_ptr<rivet::ddl::generated::DebugOutfittingList>> Lists {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MasterDebugOutfittingConfig>;
	};
} // namespace rivet::ddl::generated

// clang-format on
