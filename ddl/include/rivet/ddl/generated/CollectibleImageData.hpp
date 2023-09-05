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

#include <rivet/ddl/generated/enums/x2a6b461b.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED CollectibleImageData : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "CollectibleImageData";
		constexpr const static rivet::rivet_type_id type_id = 0x22115bce;

		constexpr const static std::string_view Type_type_name = "Type";
		constexpr const static rivet::rivet_type_id Type_type_id = 0xbc4e9799;
		constexpr const static std::string_view Texture_type_name = "Texture";
		constexpr const static rivet::rivet_type_id Texture_type_id = 0x838c6e4a;
		constexpr const static std::string_view Label_type_name = "Label";
		constexpr const static rivet::rivet_type_id Label_type_id = 0x17f49c29; 

		explicit CollectibleImageData() = default;
		explicit CollectibleImageData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::x2a6b461b Type {};
		std::string_view Texture {};
		std::string_view Label {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CollectibleImageData>;
	};
} // namespace rivet::ddl::generated

// clang-format on
