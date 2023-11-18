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
	struct ControlRemapSet; 

	struct RIVET_DDL_SHARED CustomRemapData : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "CustomRemapData";
		constexpr static rivet::rivet_type_id type_id = 0x16c1335c;

		constexpr static std::string_view RemapSet_type_name = "RemapSet";
		constexpr static rivet::rivet_type_id RemapSet_type_id = 0xf2c7cf7d; 

		explicit CustomRemapData() = default;
		explicit CustomRemapData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::ControlRemapSet> RemapSet {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CustomRemapData>;
	};
} // namespace rivet::ddl::generated

// clang-format on
