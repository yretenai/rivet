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

#include <rivet/ddl/generated/BasicBulletPrius.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED DummyHurdleShotPrius : BasicBulletPrius {
		constexpr static std::string_view type_name = "DummyHurdleShotPrius";
		constexpr static rivet::rivet_type_id type_id = 0xf7dc481;

		constexpr static std::string_view ShotIndexForHurdle_type_name = "ShotIndexForHurdle";
		constexpr static rivet::rivet_type_id ShotIndexForHurdle_type_id = 0xc9814627;
		constexpr static std::string_view WantsLeftOffset_type_name = "WantsLeftOffset";
		constexpr static rivet::rivet_type_id WantsLeftOffset_type_id = 0x9f9b2090; 

		explicit DummyHurdleShotPrius() = default;
		explicit DummyHurdleShotPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint32_t ShotIndexForHurdle {};
		bool WantsLeftOffset {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DummyHurdleShotPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
