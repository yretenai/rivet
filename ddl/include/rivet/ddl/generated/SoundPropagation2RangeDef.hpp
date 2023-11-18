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
	struct RIVET_DDL_SHARED SoundPropagation2RangeDef : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "SoundPropagation2RangeDef";
		constexpr static rivet::rivet_type_id type_id = 0xe2173a2;

		constexpr static std::string_view Min_type_name = "Min";
		constexpr static rivet::rivet_type_id Min_type_id = 0x8b2e3419;
		constexpr static std::string_view Max_type_name = "Max";
		constexpr static rivet::rivet_type_id Max_type_id = 0xb7230b40; 

		explicit SoundPropagation2RangeDef() = default;
		explicit SoundPropagation2RangeDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float Min {};
		float Max {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SoundPropagation2RangeDef>;
	};
} // namespace rivet::ddl::generated

// clang-format on
