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
	struct AudioChannels; 

	struct RIVET_DDL_SHARED AudioChannelsNonLoc : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "AudioChannelsNonLoc";
		constexpr static rivet::rivet_type_id type_id = 0xcf1c5da1;

		constexpr static std::string_view Compression_type_name = "Compression";
		constexpr static rivet::rivet_type_id Compression_type_id = 0xe5a2b98e;
		constexpr static std::string_view Channels_type_name = "Channels";
		constexpr static rivet::rivet_type_id Channels_type_id = 0x9155fc6; 

		explicit AudioChannelsNonLoc() = default;
		explicit AudioChannelsNonLoc([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint32_t Compression {};
		std::shared_ptr<rivet::ddl::generated::AudioChannels> Channels {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AudioChannelsNonLoc>;
	};
} // namespace rivet::ddl::generated

// clang-format on