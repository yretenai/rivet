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

#include <rivet/ddl/generated/AnimChunkData.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED AnimLookChunkingComponentData : AnimChunkData {
		constexpr static std::string_view type_name = "AnimLookChunkingComponentData";
		constexpr static rivet::rivet_type_id type_id = 0xa9528958;

		constexpr static std::string_view ChunkingComponentName_type_name = "ChunkingComponentName";
		constexpr static rivet::rivet_type_id ChunkingComponentName_type_id = 0xe7230f11;
		constexpr static std::string_view ConfigurationName_type_name = "ConfigurationName";
		constexpr static rivet::rivet_type_id ConfigurationName_type_id = 0x19f22c5c; 

		explicit AnimLookChunkingComponentData() = default;
		explicit AnimLookChunkingComponentData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view ChunkingComponentName {};
		std::string_view ConfigurationName {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AnimLookChunkingComponentData>;
	};
} // namespace rivet::ddl::generated

// clang-format on
