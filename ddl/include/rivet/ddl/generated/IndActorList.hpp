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

#include <rivet/ddl/generated/enums/xe47e5cf7.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED IndActorList : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "IndActorList";
		constexpr static rivet::rivet_type_id type_id = 0xe7aa737c;

		constexpr static std::string_view ActorUID_type_name = "ActorUID";
		constexpr static rivet::rivet_type_id ActorUID_type_id = 0x49a6ce86;
		constexpr static std::string_view EnableType_type_name = "EnableType";
		constexpr static rivet::rivet_type_id EnableType_type_id = 0xb8f74eb3; 

		explicit IndActorList() = default;
		explicit IndActorList([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint64_t ActorUID {};
		rivet::ddl::generated::xe47e5cf7 EnableType {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<IndActorList>;
	};
} // namespace rivet::ddl::generated

// clang-format on
