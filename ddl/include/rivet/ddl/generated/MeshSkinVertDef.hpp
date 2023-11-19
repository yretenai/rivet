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
	struct RIVET_DDL_SHARED MeshSkinVertDef : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "MeshSkinVertDef";
		constexpr static rivet::rivet_type_id type_id = 0x257763a;

		constexpr static std::string_view JointIds_type_name = "JointIds";
		constexpr static rivet::rivet_type_id JointIds_type_id = 0xf9847a79;
		constexpr static std::string_view JointWeights_type_name = "JointWeights";
		constexpr static rivet::rivet_type_id JointWeights_type_id = 0x60586724; 

		explicit MeshSkinVertDef() = default;
		explicit MeshSkinVertDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<uint16_t> JointIds {};
		std::vector<float> JointWeights {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MeshSkinVertDef>;
	};
} // namespace rivet::ddl::generated

// clang-format on