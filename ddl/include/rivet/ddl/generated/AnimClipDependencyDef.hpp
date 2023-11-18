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
	struct RIVET_DDL_SHARED AnimClipDependencyDef : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "AnimClipDependencyDef";
		constexpr static rivet::rivet_type_id type_id = 0xd12dad93;

		constexpr static std::string_view AnimSetVersionHash_type_name = "AnimSetVersionHash";
		constexpr static rivet::rivet_type_id AnimSetVersionHash_type_id = 0x2f0f203;
		constexpr static std::string_view AnimClipContentHash_type_name = "AnimClipContentHash";
		constexpr static rivet::rivet_type_id AnimClipContentHash_type_id = 0x99360878;
		constexpr static std::string_view AnimClipSourceFilePath_type_name = "AnimClipSourceFilePath";
		constexpr static rivet::rivet_type_id AnimClipSourceFilePath_type_id = 0xa8eb44b2;
		constexpr static std::string_view AnimClipSourceTimeStamp_type_name = "AnimClipSourceTimeStamp";
		constexpr static rivet::rivet_type_id AnimClipSourceTimeStamp_type_id = 0x167e6138; 

		explicit AnimClipDependencyDef() = default;
		explicit AnimClipDependencyDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint32_t AnimSetVersionHash {};
		uint32_t AnimClipContentHash {};
		std::string_view AnimClipSourceFilePath {};
		uint64_t AnimClipSourceTimeStamp {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AnimClipDependencyDef>;
	};
} // namespace rivet::ddl::generated

// clang-format on
