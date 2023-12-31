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
	struct UICollectibleTypeBase; 

	struct RIVET_DDL_SHARED UICollectible : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "UICollectible";
		constexpr static rivet::rivet_type_id type_id = 0xca184fb4;

		constexpr static std::string_view Type_type_name = "Type";
		constexpr static rivet::rivet_type_id Type_type_id = 0xbc4e9799;
		constexpr static std::string_view DisplayName_type_name = "DisplayName";
		constexpr static rivet::rivet_type_id DisplayName_type_id = 0xeaf33243;
		constexpr static std::string_view DisplayDesc_type_name = "DisplayDesc";
		constexpr static rivet::rivet_type_id DisplayDesc_type_id = 0xbf65e011;
		constexpr static std::string_view DisplayImage_type_name = "DisplayImage";
		constexpr static rivet::rivet_type_id DisplayImage_type_id = 0x113d8e81; 

		explicit UICollectible() = default;
		explicit UICollectible([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::UICollectibleTypeBase> Type {};
		std::string_view DisplayName {};
		std::string_view DisplayDesc {};
		std::string_view DisplayImage {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UICollectible>;
	};
} // namespace rivet::ddl::generated

// clang-format on
