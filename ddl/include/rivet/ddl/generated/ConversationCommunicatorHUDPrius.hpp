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

#include <rivet/ddl/generated/ConversationCommunicatorBasePrius.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED ConversationCommunicatorHUDPrius : ConversationCommunicatorBasePrius {
		constexpr const static std::string_view type_name = "ConversationCommunicatorHUDPrius";
		constexpr const static rivet::rivet_type_id type_id = 0x9402e79;

		constexpr const static std::string_view SpeakerTexture_type_name = "SpeakerTexture";
		constexpr const static rivet::rivet_type_id SpeakerTexture_type_id = 0x8f837688;
		constexpr const static std::string_view SpeakerNameLocTag_type_name = "SpeakerNameLocTag";
		constexpr const static rivet::rivet_type_id SpeakerNameLocTag_type_id = 0x208bdcbe; 

		explicit ConversationCommunicatorHUDPrius() = default;
		explicit ConversationCommunicatorHUDPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view SpeakerTexture {};
		std::string_view SpeakerNameLocTag {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ConversationCommunicatorHUDPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
