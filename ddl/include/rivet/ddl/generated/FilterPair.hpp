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

#include <rivet/ddl/generated/enums/xfdd79442.hpp>
#include <rivet/ddl/generated/enums/x6571cd70.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED FilterPair : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "FilterPair";
		constexpr static rivet::rivet_type_id type_id = 0xd8e17746;

		constexpr static std::string_view GroupId_type_name = "GroupId";
		constexpr static rivet::rivet_type_id GroupId_type_id = 0xec6beb88;
		constexpr static std::string_view FilterId_type_name = "FilterId";
		constexpr static rivet::rivet_type_id FilterId_type_id = 0xd404a13f; 

		explicit FilterPair() = default;
		explicit FilterPair([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::x6571cd70 GroupId {};
		rivet::ddl::generated::xfdd79442 FilterId {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<FilterPair>;
	};
} // namespace rivet::ddl::generated

// clang-format on
