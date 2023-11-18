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

#include <rivet/ddl/generated/EventBase.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED ShotSpawnerAttachArtEvent : EventBase {
		constexpr static std::string_view type_name = "ShotSpawnerAttachArtEvent";
		constexpr static rivet::rivet_type_id type_id = 0xf7f73b5c;

		constexpr static std::string_view Timeout_type_name = "Timeout";
		constexpr static rivet::rivet_type_id Timeout_type_id = 0x80ab16aa;
		constexpr static std::string_view Locator_type_name = "Locator";
		constexpr static rivet::rivet_type_id Locator_type_id = 0x7bac1d57; 

		explicit ShotSpawnerAttachArtEvent() = default;
		explicit ShotSpawnerAttachArtEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float Timeout {};
		std::string_view Locator {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ShotSpawnerAttachArtEvent>;
	};
} // namespace rivet::ddl::generated

// clang-format on
