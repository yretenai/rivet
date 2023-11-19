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
	struct UIVariationPort; 

	struct RIVET_DDL_SHARED UIVariationLink : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "UIVariationLink";
		constexpr static rivet::rivet_type_id type_id = 0x8a7e2d74;

		constexpr static std::string_view Name_type_name = "Name";
		constexpr static rivet::rivet_type_id Name_type_id = 0x6eb3beb6;
		constexpr static std::string_view VarPorts_type_name = "VarPorts";
		constexpr static rivet::rivet_type_id VarPorts_type_id = 0x104b1941; 

		explicit UIVariationLink() = default;
		explicit UIVariationLink([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view Name {};
		std::vector<std::shared_ptr<rivet::ddl::generated::UIVariationPort>> VarPorts {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UIVariationLink>;
	};
} // namespace rivet::ddl::generated

// clang-format on