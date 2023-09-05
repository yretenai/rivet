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

#include <rivet/ddl/generated/CameraPrius.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED PlacedCameraPrius : CameraPrius {
		constexpr const static std::string_view type_name = "PlacedCameraPrius";
		constexpr const static rivet::rivet_type_id type_id = 0x907e71b3;

		constexpr const static std::string_view ActivationVolume_type_name = "ActivationVolume";
		constexpr const static rivet::rivet_type_id ActivationVolume_type_id = 0x9b85fce4; 

		explicit PlacedCameraPrius() = default;
		explicit PlacedCameraPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint64_t ActivationVolume {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PlacedCameraPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
