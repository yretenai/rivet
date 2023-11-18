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
	struct RIVET_DDL_SHARED MaterialGraphSessionData : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "MaterialGraphSessionData";
		constexpr static rivet::rivet_type_id type_id = 0x2e39177;

		constexpr static std::string_view ReloadLibrary_type_name = "ReloadLibrary";
		constexpr static rivet::rivet_type_id ReloadLibrary_type_id = 0xcc9e683a; 

		explicit MaterialGraphSessionData() = default;
		explicit MaterialGraphSessionData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		bool ReloadLibrary {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MaterialGraphSessionData>;
	};
} // namespace rivet::ddl::generated

// clang-format on
