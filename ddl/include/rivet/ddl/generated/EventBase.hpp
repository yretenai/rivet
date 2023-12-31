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
	struct DDLTransform; 

	struct RIVET_DDL_SHARED EventBase : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "EventBase";
		constexpr static rivet::rivet_type_id type_id = 0xbedf127a;

		constexpr static std::string_view Frame_type_name = "Frame";
		constexpr static rivet::rivet_type_id Frame_type_id = 0xacabf00c;
		constexpr static std::string_view SenderHandle_type_name = "SenderHandle";
		constexpr static rivet::rivet_type_id SenderHandle_type_id = 0xc0bf986b;
		constexpr static std::string_view TrackedNameHash_type_name = "TrackedNameHash";
		constexpr static rivet::rivet_type_id TrackedNameHash_type_id = 0x3ea4c923;
		constexpr static std::string_view EventLocatorHash_type_name = "EventLocatorHash";
		constexpr static rivet::rivet_type_id EventLocatorHash_type_id = 0xa6624268;
		constexpr static std::string_view SourceAnimDriverNameHash_type_name = "SourceAnimDriverNameHash";
		constexpr static rivet::rivet_type_id SourceAnimDriverNameHash_type_id = 0x355fe936;
		constexpr static std::string_view SourceAnimDriverHandle_type_name = "SourceAnimDriverHandle";
		constexpr static rivet::rivet_type_id SourceAnimDriverHandle_type_id = 0xa7207a8c;
		constexpr static std::string_view Orientation_type_name = "Orientation";
		constexpr static rivet::rivet_type_id Orientation_type_id = 0xbb5c948d;
		constexpr static std::string_view RequireActivated_type_name = "RequireActivated";
		constexpr static rivet::rivet_type_id RequireActivated_type_id = 0x24f8572c; 

		explicit EventBase() = default;
		explicit EventBase([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint32_t Frame {};
		uint32_t SenderHandle {};
		uint32_t TrackedNameHash {};
		uint32_t EventLocatorHash {};
		uint32_t SourceAnimDriverNameHash {};
		uint32_t SourceAnimDriverHandle {};
		std::shared_ptr<rivet::ddl::generated::DDLTransform> Orientation {};
		uint8_t RequireActivated {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<EventBase>;
	};
} // namespace rivet::ddl::generated

// clang-format on
