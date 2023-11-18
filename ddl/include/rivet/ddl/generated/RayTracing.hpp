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

#include <rivet/ddl/generated/enums/x49737d1.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED RayTracing : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "RayTracing";
		constexpr static rivet::rivet_type_id type_id = 0x411859b5;

		constexpr static std::string_view Enabled_type_name = "Enabled";
		constexpr static rivet::rivet_type_id Enabled_type_id = 0x5113d8bc;
		constexpr static std::string_view Quality_type_name = "Quality";
		constexpr static rivet::rivet_type_id Quality_type_id = 0x7d586828;
		constexpr static std::string_view SkipIfImpostored_type_name = "SkipIfImpostored";
		constexpr static rivet::rivet_type_id SkipIfImpostored_type_id = 0xb3af3639;
		constexpr static std::string_view AmbientOcclusion_type_name = "AmbientOcclusion";
		constexpr static rivet::rivet_type_id AmbientOcclusion_type_id = 0xf078da18;
		constexpr static std::string_view AmbientShadows_type_name = "AmbientShadows";
		constexpr static rivet::rivet_type_id AmbientShadows_type_id = 0xb31e0f40;
		constexpr static std::string_view Reflections_type_name = "Reflections";
		constexpr static rivet::rivet_type_id Reflections_type_id = 0xb38d8369;
		constexpr static std::string_view Shadows_type_name = "Shadows";
		constexpr static rivet::rivet_type_id Shadows_type_id = 0x5f4e86c4;
		constexpr static std::string_view Blocker_type_name = "Blocker";
		constexpr static rivet::rivet_type_id Blocker_type_id = 0x2f6b3de9; 

		explicit RayTracing() = default;
		explicit RayTracing([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		bool Enabled {};
		rivet::ddl::generated::x49737d1 Quality {};
		bool SkipIfImpostored {};
		bool AmbientOcclusion {};
		bool AmbientShadows {};
		bool Reflections {};
		bool Shadows {};
		bool Blocker {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RayTracing>;
	};
} // namespace rivet::ddl::generated

// clang-format on
