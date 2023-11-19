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
	struct RIVET_DDL_SHARED CameraShakeListenerPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "CameraShakeListenerPrius";
		constexpr static rivet::rivet_type_id type_id = 0x233ffefa;

		constexpr static std::string_view MagnitudeMultiplier_type_name = "MagnitudeMultiplier";
		constexpr static rivet::rivet_type_id MagnitudeMultiplier_type_id = 0x31311c56;
		constexpr static std::string_view RadiusMultiplier_type_name = "RadiusMultiplier";
		constexpr static rivet::rivet_type_id RadiusMultiplier_type_id = 0xc1c3688b; 

		explicit CameraShakeListenerPrius() = default;
		explicit CameraShakeListenerPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float MagnitudeMultiplier {};
		float RadiusMultiplier {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CameraShakeListenerPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on