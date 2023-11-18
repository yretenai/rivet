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
	struct RIVET_DDL_SHARED NodeGraphEditorSessionData : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "NodeGraphEditorSessionData";
		constexpr static rivet::rivet_type_id type_id = 0xe76b0602;

		constexpr static std::string_view Selection_type_name = "Selection";
		constexpr static rivet::rivet_type_id Selection_type_id = 0x145893db; 

		explicit NodeGraphEditorSessionData() = default;
		explicit NodeGraphEditorSessionData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<uint64_t> Selection {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<NodeGraphEditorSessionData>;
	};
} // namespace rivet::ddl::generated

// clang-format on
