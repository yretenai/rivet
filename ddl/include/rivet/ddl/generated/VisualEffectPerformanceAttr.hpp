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

#include <rivet/ddl/generated/enums/x21f55189.hpp> 

namespace rivet::ddl::generated {
	struct VisualEffectFrameAttr;
	struct VisualEffectSpawnAttr; 

	struct RIVET_DDL_SHARED VisualEffectPerformanceAttr : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "VisualEffectPerformanceAttr";
		constexpr static rivet::rivet_type_id type_id = 0xe7ddc95f;

		constexpr static std::string_view Source_type_name = "Source";
		constexpr static rivet::rivet_type_id Source_type_id = 0x61f23114;
		constexpr static std::string_view Spawn_type_name = "Spawn";
		constexpr static rivet::rivet_type_id Spawn_type_id = 0x895d0326;
		constexpr static std::string_view Frame_type_name = "Frame";
		constexpr static rivet::rivet_type_id Frame_type_id = 0xacabf00c; 

		explicit VisualEffectPerformanceAttr() = default;
		explicit VisualEffectPerformanceAttr([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::x21f55189 Source {};
		std::shared_ptr<rivet::ddl::generated::VisualEffectSpawnAttr> Spawn {};
		std::shared_ptr<rivet::ddl::generated::VisualEffectFrameAttr> Frame {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VisualEffectPerformanceAttr>;
	};
} // namespace rivet::ddl::generated

// clang-format on
