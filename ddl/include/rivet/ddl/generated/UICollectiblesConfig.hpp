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
	struct UICollectibleCategory; 

	struct RIVET_DDL_SHARED UICollectiblesConfig : ConfigBase {
		constexpr static std::string_view type_name = "UICollectiblesConfig";
		constexpr static rivet::rivet_type_id type_id = 0xdc304074;

		constexpr static std::string_view Categories_type_name = "Categories";
		constexpr static rivet::rivet_type_id Categories_type_id = 0xe1c51851; 

		explicit UICollectiblesConfig() = default;
		explicit UICollectiblesConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<std::shared_ptr<rivet::ddl::generated::UICollectibleCategory>> Categories {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UICollectiblesConfig>;
	};
} // namespace rivet::ddl::generated

// clang-format on