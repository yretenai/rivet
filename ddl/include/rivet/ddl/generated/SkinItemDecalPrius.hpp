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
	struct RIVET_DDL_SHARED SkinItemDecalPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "SkinItemDecalPrius";
		constexpr static rivet::rivet_type_id type_id = 0x7fe3dc4a;

		constexpr static std::string_view MaterialNameHash_type_name = "MaterialNameHash";
		constexpr static rivet::rivet_type_id MaterialNameHash_type_id = 0x45587fd6;
		constexpr static std::string_view Scale_type_name = "Scale";
		constexpr static rivet::rivet_type_id Scale_type_id = 0xf515e945; 

		explicit SkinItemDecalPrius() = default;
		explicit SkinItemDecalPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint32_t MaterialNameHash {};
		float Scale {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SkinItemDecalPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
