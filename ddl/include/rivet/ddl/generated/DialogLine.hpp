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

#include <rivet/ddl/generated/enums/Speakers.hpp> 

namespace rivet::ddl::generated {
	struct ConversationCommunicatorBasePrius; 

	struct RIVET_DDL_SHARED DialogLine : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "DialogLine";
		constexpr static rivet::rivet_type_id type_id = 0xc2f5f108;

		constexpr static std::string_view LocalizationTag_type_name = "LocalizationTag";
		constexpr static rivet::rivet_type_id LocalizationTag_type_id = 0x3446b219;
		constexpr static std::string_view Speaker_type_name = "Speaker";
		constexpr static rivet::rivet_type_id Speaker_type_id = 0x7a6fb859;
		constexpr static std::string_view PreLineDelay_type_name = "PreLineDelay";
		constexpr static rivet::rivet_type_id PreLineDelay_type_id = 0xcc5ae14d;
		constexpr static std::string_view InterruptRestorePoint_type_name = "InterruptRestorePoint";
		constexpr static rivet::rivet_type_id InterruptRestorePoint_type_id = 0x3349a51b;
		constexpr static std::string_view InterruptLineTag_type_name = "InterruptLineTag";
		constexpr static rivet::rivet_type_id InterruptLineTag_type_id = 0xe2127a80;
		constexpr static std::string_view ResumeLineTag_type_name = "ResumeLineTag";
		constexpr static rivet::rivet_type_id ResumeLineTag_type_id = 0x5afc6331;
		constexpr static std::string_view CompleteOnInterrupt_type_name = "CompleteOnInterrupt";
		constexpr static rivet::rivet_type_id CompleteOnInterrupt_type_id = 0xfab608e7;
		constexpr static std::string_view ConversationCommunicatorData_type_name = "ConversationCommunicatorData";
		constexpr static rivet::rivet_type_id ConversationCommunicatorData_type_id = 0xb0cf1e79; 

		explicit DialogLine() = default;
		explicit DialogLine([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view LocalizationTag {};
		rivet::ddl::generated::Speakers Speaker {};
		float PreLineDelay {};
		bool InterruptRestorePoint {};
		std::string_view InterruptLineTag {};
		std::string_view ResumeLineTag {};
		bool CompleteOnInterrupt {};
		std::shared_ptr<rivet::ddl::generated::ConversationCommunicatorBasePrius> ConversationCommunicatorData {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DialogLine>;
	};
} // namespace rivet::ddl::generated

// clang-format on
