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
	struct AnimClipSoundEvent; 

	struct RIVET_DDL_SHARED AnimClipAudioEvent : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "AnimClipAudioEvent";
		constexpr static rivet::rivet_type_id type_id = 0x1619258;

		constexpr static std::string_view SoundEvent_type_name = "SoundEvent";
		constexpr static rivet::rivet_type_id SoundEvent_type_id = 0x3609711f; 

		explicit AnimClipAudioEvent() = default;
		explicit AnimClipAudioEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::AnimClipSoundEvent> SoundEvent {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AnimClipAudioEvent>;
	};
} // namespace rivet::ddl::generated

// clang-format on
