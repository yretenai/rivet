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
	struct RIVET_DDL_SHARED Cinematic2Option : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "Cinematic2Option";
		constexpr static rivet::rivet_type_id type_id = 0x7859e98d;

		constexpr static std::string_view Key_type_name = "Key";
		constexpr static rivet::rivet_type_id Key_type_id = 0xa0c58260;
		constexpr static std::string_view Value_type_name = "Value";
		constexpr static rivet::rivet_type_id Value_type_id = 0x42494f5; 

		explicit Cinematic2Option() = default;
		explicit Cinematic2Option([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view Key {};
		std::string_view Value {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<Cinematic2Option>;
	};
} // namespace rivet::ddl::generated

// clang-format on
