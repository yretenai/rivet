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
	struct RIVET_DDL_SHARED VisualEffectNodeInputPort : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "VisualEffectNodeInputPort";
		constexpr static rivet::rivet_type_id type_id = 0x28a017e8;

		constexpr static std::string_view InternalName_type_name = "InternalName";
		constexpr static rivet::rivet_type_id InternalName_type_id = 0x93971d83;
		constexpr static std::string_view Type_type_name = "Type";
		constexpr static rivet::rivet_type_id Type_type_id = 0xbc4e9799;
		constexpr static std::string_view UIType_type_name = "UIType";
		constexpr static rivet::rivet_type_id UIType_type_id = 0x8c1e6e85;
		constexpr static std::string_view Visible_type_name = "Visible";
		constexpr static rivet::rivet_type_id Visible_type_id = 0x7b5a8b61; 

		explicit VisualEffectNodeInputPort() = default;
		explicit VisualEffectNodeInputPort([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view InternalName {};
		std::string_view Type {};
		std::string_view UIType {};
		bool Visible {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VisualEffectNodeInputPort>;
	};
} // namespace rivet::ddl::generated

// clang-format on
