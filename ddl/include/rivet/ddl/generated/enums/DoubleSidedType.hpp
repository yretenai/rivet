// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

// clang-format off

#include <cstdint>
#include <string_view>
#include <array>

#include <rivet/hash/type_id.hpp>
#include <rivet/rivet_keywords.hpp>

namespace rivet::ddl::generated {
	constexpr static std::string_view DoubleSidedType_type_name = "DoubleSidedType";
	constexpr static rivet::rivet_type_id DoubleSidedType_type_id = 0xa20f844;

	constexpr static std::array<std::string_view, 3> DoubleSidedType_values = {
		"kInheritFromMaterial",
		"kForceSingleSidedInLod1",
		"kForceSingleSided", 
	};

	enum class DoubleSidedType : uint64_t {
		Inherit_From_Material,
		Force_Single_In_Lod_1,
		Force_Single_Sided, 
	};
} // namespace rivet::ddl::generated

// clang-format on
