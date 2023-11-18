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
	struct UI_AnimDriverFilterVarId;
	struct UI_AnimDriverFilterVarGroup; 

	struct RIVET_DDL_SHARED UI_AnimDriverFilterVarContainer : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "UI_AnimDriverFilterVarContainer";
		constexpr static rivet::rivet_type_id type_id = 0xe9fd918c;

		constexpr static std::string_view Group_type_name = "Group";
		constexpr static rivet::rivet_type_id Group_type_id = 0x74938804;
		constexpr static std::string_view Ids_type_name = "Ids";
		constexpr static rivet::rivet_type_id Ids_type_id = 0x5a8f8e51; 

		explicit UI_AnimDriverFilterVarContainer() = default;
		explicit UI_AnimDriverFilterVarContainer([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::UI_AnimDriverFilterVarGroup> Group {};
		std::vector<std::shared_ptr<rivet::ddl::generated::UI_AnimDriverFilterVarId>> Ids {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UI_AnimDriverFilterVarContainer>;
	};
} // namespace rivet::ddl::generated

// clang-format on
