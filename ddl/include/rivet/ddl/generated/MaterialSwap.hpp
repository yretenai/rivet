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
	struct RIVET_DDL_SHARED MaterialSwap : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "MaterialSwap";
		constexpr static rivet::rivet_type_id type_id = 0xbd7e17d3;

		constexpr static std::string_view Original_type_name = "Original";
		constexpr static rivet::rivet_type_id Original_type_id = 0xd573cdf5;
		constexpr static std::string_view Replacement_type_name = "Replacement";
		constexpr static rivet::rivet_type_id Replacement_type_id = 0xd909a591; 

		explicit MaterialSwap() = default;
		explicit MaterialSwap([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view Original {};
		std::string_view Replacement {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MaterialSwap>;
	};
} // namespace rivet::ddl::generated

// clang-format on
