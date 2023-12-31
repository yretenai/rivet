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
	struct RIVET_DDL_SHARED ActorGroupNode : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "ActorGroupNode";
		constexpr static rivet::rivet_type_id type_id = 0xb898fd89;

		constexpr static std::string_view Name_type_name = "Name";
		constexpr static rivet::rivet_type_id Name_type_id = 0x6eb3beb6;
		constexpr static std::string_view Id_type_name = "Id";
		constexpr static rivet::rivet_type_id Id_type_id = 0x8a514a8d;
		constexpr static std::string_view IsGlobal_type_name = "IsGlobal";
		constexpr static rivet::rivet_type_id IsGlobal_type_id = 0xd36c3c29;
		constexpr static std::string_view Actors_type_name = "Actors";
		constexpr static rivet::rivet_type_id Actors_type_id = 0xe153be82; 

		explicit ActorGroupNode() = default;
		explicit ActorGroupNode([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view Name {};
		uint64_t Id {};
		bool IsGlobal {};
		std::vector<uint64_t> Actors {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ActorGroupNode>;
	};
} // namespace rivet::ddl::generated

// clang-format on
