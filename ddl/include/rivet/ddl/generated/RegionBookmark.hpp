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
	struct RIVET_DDL_SHARED RegionBookmark : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "RegionBookmark";
		constexpr static rivet::rivet_type_id type_id = 0x1e169115;

		constexpr static std::string_view Reference_type_name = "Reference";
		constexpr static rivet::rivet_type_id Reference_type_id = 0x2c5ed61f;
		constexpr static std::string_view Link_type_name = "Link";
		constexpr static rivet::rivet_type_id Link_type_id = 0x63c5941; 

		explicit RegionBookmark() = default;
		explicit RegionBookmark([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view Reference {};
		std::string_view Link {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RegionBookmark>;
	};
} // namespace rivet::ddl::generated

// clang-format on
