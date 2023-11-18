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

#include <rivet/ddl/generated/enums/x94d69111.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED AnimFootstepRemovedEventKey : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "AnimFootstepRemovedEventKey";
		constexpr static rivet::rivet_type_id type_id = 0xea32f2a3;

		constexpr static std::string_view Side_type_name = "Side";
		constexpr static rivet::rivet_type_id Side_type_id = 0x1311db05;
		constexpr static std::string_view AnimPoseKey_type_name = "AnimPoseKey";
		constexpr static rivet::rivet_type_id AnimPoseKey_type_id = 0x2660e2d4;
		constexpr static std::string_view AutoGenFrame_type_name = "AutoGenFrame";
		constexpr static rivet::rivet_type_id AutoGenFrame_type_id = 0x829269e6; 

		explicit AnimFootstepRemovedEventKey() = default;
		explicit AnimFootstepRemovedEventKey([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::x94d69111 Side {};
		uint64_t AnimPoseKey {};
		uint32_t AutoGenFrame {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AnimFootstepRemovedEventKey>;
	};
} // namespace rivet::ddl::generated

// clang-format on
