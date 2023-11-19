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

#include <rivet/ddl/generated/AnimChunkDirection.hpp> 

namespace rivet::ddl::generated {
	struct DDLVector3; 

	struct RIVET_DDL_SHARED AnimChunkDirectionLocalOffset : AnimChunkDirection {
		constexpr static std::string_view type_name = "AnimChunkDirectionLocalOffset";
		constexpr static rivet::rivet_type_id type_id = 0x4e92df78;

		constexpr static std::string_view HalfConeAngle_type_name = "HalfConeAngle";
		constexpr static rivet::rivet_type_id HalfConeAngle_type_id = 0x3b3b441f;
		constexpr static std::string_view LocalOffset_type_name = "LocalOffset";
		constexpr static rivet::rivet_type_id LocalOffset_type_id = 0x46a4eea5; 

		explicit AnimChunkDirectionLocalOffset() = default;
		explicit AnimChunkDirectionLocalOffset([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float HalfConeAngle {};
		std::shared_ptr<rivet::ddl::generated::DDLVector3> LocalOffset {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AnimChunkDirectionLocalOffset>;
	};
} // namespace rivet::ddl::generated

// clang-format on