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
	struct RIVET_DDL_SHARED AttachedSpotlightPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "AttachedSpotlightPrius";
		constexpr static rivet::rivet_type_id type_id = 0xdb7e51d5;

		constexpr static std::string_view SpotlightActor_type_name = "SpotlightActor";
		constexpr static rivet::rivet_type_id SpotlightActor_type_id = 0x316d0967;
		constexpr static std::string_view SpotlightAttachLocator_type_name = "SpotlightAttachLocator";
		constexpr static rivet::rivet_type_id SpotlightAttachLocator_type_id = 0x91f620b2; 

		explicit AttachedSpotlightPrius() = default;
		explicit AttachedSpotlightPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view SpotlightActor {};
		std::string_view SpotlightAttachLocator {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AttachedSpotlightPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on