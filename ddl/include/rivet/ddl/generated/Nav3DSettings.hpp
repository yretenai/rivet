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
	struct RIVET_DDL_SHARED Nav3DSettings : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "Nav3DSettings";
		constexpr static rivet::rivet_type_id type_id = 0x18d3bce4;

		constexpr static std::string_view SVOGridMaxElements_type_name = "SVOGridMaxElements";
		constexpr static rivet::rivet_type_id SVOGridMaxElements_type_id = 0xe15b974c;
		constexpr static std::string_view MaxQueries_type_name = "MaxQueries";
		constexpr static rivet::rivet_type_id MaxQueries_type_id = 0xf02107dd;
		constexpr static std::string_view Enabled_type_name = "Enabled";
		constexpr static rivet::rivet_type_id Enabled_type_id = 0x5113d8bc; 

		explicit Nav3DSettings() = default;
		explicit Nav3DSettings([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint32_t SVOGridMaxElements {};
		uint32_t MaxQueries {};
		bool Enabled {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<Nav3DSettings>;
	};
} // namespace rivet::ddl::generated

// clang-format on