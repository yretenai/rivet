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

#include <rivet/ddl/generated/enums/x723e41b3.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED ShadowDimensionTraversablePrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "ShadowDimensionTraversablePrius";
		constexpr static rivet::rivet_type_id type_id = 0x3262e7f3;

		constexpr static std::string_view ActivationType_type_name = "ActivationType";
		constexpr static rivet::rivet_type_id ActivationType_type_id = 0x79aee756; 

		explicit ShadowDimensionTraversablePrius() = default;
		explicit ShadowDimensionTraversablePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::x723e41b3 ActivationType {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ShadowDimensionTraversablePrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
