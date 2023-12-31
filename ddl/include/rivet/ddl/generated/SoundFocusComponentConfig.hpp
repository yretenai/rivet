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

#include <rivet/ddl/generated/ConfigBase.hpp> 

namespace rivet::ddl::generated {
	struct SoundFocusComponentData; 

	struct RIVET_DDL_SHARED SoundFocusComponentConfig : ConfigBase {
		constexpr static std::string_view type_name = "SoundFocusComponentConfig";
		constexpr static rivet::rivet_type_id type_id = 0xe1f3fbe6;

		constexpr static std::string_view SoundFocusData_type_name = "SoundFocusData";
		constexpr static rivet::rivet_type_id SoundFocusData_type_id = 0x8d2ce588; 

		explicit SoundFocusComponentConfig() = default;
		explicit SoundFocusComponentConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::SoundFocusComponentData> SoundFocusData {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SoundFocusComponentConfig>;
	};
} // namespace rivet::ddl::generated

// clang-format on
