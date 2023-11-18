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
	struct DDLVector4; 

	struct RIVET_DDL_SHARED Cinematic2MaterialConstOverrideInfo : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "Cinematic2MaterialConstOverrideInfo";
		constexpr static rivet::rivet_type_id type_id = 0x6a3bc45a;

		constexpr static std::string_view MaterialMappingName_type_name = "MaterialMappingName";
		constexpr static rivet::rivet_type_id MaterialMappingName_type_id = 0x981e6927;
		constexpr static std::string_view ConstName_type_name = "ConstName";
		constexpr static rivet::rivet_type_id ConstName_type_id = 0x8de98428;
		constexpr static std::string_view ConstValue_type_name = "ConstValue";
		constexpr static rivet::rivet_type_id ConstValue_type_id = 0x1370708c; 

		explicit Cinematic2MaterialConstOverrideInfo() = default;
		explicit Cinematic2MaterialConstOverrideInfo([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view MaterialMappingName {};
		std::string_view ConstName {};
		std::shared_ptr<rivet::ddl::generated::DDLVector4> ConstValue {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<Cinematic2MaterialConstOverrideInfo>;
	};
} // namespace rivet::ddl::generated

// clang-format on
