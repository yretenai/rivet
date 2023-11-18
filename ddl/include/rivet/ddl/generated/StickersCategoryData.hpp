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
	struct StickersData; 

	struct RIVET_DDL_SHARED StickersCategoryData : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "StickersCategoryData";
		constexpr static rivet::rivet_type_id type_id = 0xfea56423;

		constexpr static std::string_view Label_type_name = "Label";
		constexpr static rivet::rivet_type_id Label_type_id = 0x17f49c29;
		constexpr static std::string_view Icon_type_name = "Icon";
		constexpr static rivet::rivet_type_id Icon_type_id = 0x5504e96b;
		constexpr static std::string_view Stickers_type_name = "Stickers";
		constexpr static rivet::rivet_type_id Stickers_type_id = 0x228c1166; 

		explicit StickersCategoryData() = default;
		explicit StickersCategoryData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view Label {};
		std::string_view Icon {};
		std::vector<std::shared_ptr<rivet::ddl::generated::StickersData>> Stickers {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<StickersCategoryData>;
	};
} // namespace rivet::ddl::generated

// clang-format on
