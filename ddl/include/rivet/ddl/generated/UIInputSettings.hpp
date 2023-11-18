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
	struct RIVET_DDL_SHARED UIInputSettings : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "UIInputSettings";
		constexpr static rivet::rivet_type_id type_id = 0xcf6b08a5;

		constexpr static std::string_view FirstKeyRepeatTime_type_name = "FirstKeyRepeatTime";
		constexpr static rivet::rivet_type_id FirstKeyRepeatTime_type_id = 0x109e962a;
		constexpr static std::string_view KeyRepeatTime_type_name = "KeyRepeatTime";
		constexpr static rivet::rivet_type_id KeyRepeatTime_type_id = 0x137aa45f; 

		explicit UIInputSettings() = default;
		explicit UIInputSettings([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float FirstKeyRepeatTime {};
		float KeyRepeatTime {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UIInputSettings>;
	};
} // namespace rivet::ddl::generated

// clang-format on
