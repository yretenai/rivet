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

#include <rivet/ddl/generated/enums/x10228b34.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED OverlayActionPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "OverlayActionPrius";
		constexpr static rivet::rivet_type_id type_id = 0x11951040;

		constexpr static std::string_view ActionType_type_name = "ActionType";
		constexpr static rivet::rivet_type_id ActionType_type_id = 0x874b2194;
		constexpr static std::string_view Overlay_type_name = "Overlay";
		constexpr static rivet::rivet_type_id Overlay_type_id = 0xb8155f86;
		constexpr static std::string_view AutoUnload_type_name = "AutoUnload";
		constexpr static rivet::rivet_type_id AutoUnload_type_id = 0x974a1794;
		constexpr static std::string_view UseAsListener_type_name = "UseAsListener";
		constexpr static rivet::rivet_type_id UseAsListener_type_id = 0x541f186d; 

		explicit OverlayActionPrius() = default;
		explicit OverlayActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::x10228b34 ActionType {};
		std::string_view Overlay {};
		bool AutoUnload {};
		bool UseAsListener {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<OverlayActionPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
