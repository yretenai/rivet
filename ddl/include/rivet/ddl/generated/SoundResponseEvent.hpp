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

#include <rivet/ddl/generated/ResponseEvent.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED SoundResponseEvent : ResponseEvent {
		constexpr static std::string_view type_name = "SoundResponseEvent";
		constexpr static rivet::rivet_type_id type_id = 0x793c2c6f;

		constexpr static std::string_view SoundEventName_type_name = "SoundEventName";
		constexpr static rivet::rivet_type_id SoundEventName_type_id = 0x9c64655a;
		constexpr static std::string_view AttachLocator_type_name = "AttachLocator";
		constexpr static rivet::rivet_type_id AttachLocator_type_id = 0xfa8dcd9a;
		constexpr static std::string_view Material_type_name = "Material";
		constexpr static rivet::rivet_type_id Material_type_id = 0x86bfc8e5;
		constexpr static std::string_view StopOnSourceDestroyed_type_name = "StopOnSourceDestroyed";
		constexpr static rivet::rivet_type_id StopOnSourceDestroyed_type_id = 0x23e87b1; 

		explicit SoundResponseEvent() = default;
		explicit SoundResponseEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view SoundEventName {};
		std::string_view AttachLocator {};
		std::string_view Material {};
		bool StopOnSourceDestroyed {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SoundResponseEvent>;
	};
} // namespace rivet::ddl::generated

// clang-format on
