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

#include <rivet/ddl/generated/enums/xc837e0c6.hpp>
#include <rivet/ddl/generated/enums/x1b3f99b5.hpp>
#include <rivet/ddl/generated/enums/x5eb34cd6.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED SkinItemPart : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "SkinItemPart";
		constexpr const static rivet::rivet_type_id type_id = 0xfe3ec914;

		constexpr const static std::string_view Slot_type_name = "Slot";
		constexpr const static rivet::rivet_type_id Slot_type_id = 0x9c9ee0d7;
		constexpr const static std::string_view Layer_type_name = "Layer";
		constexpr const static rivet::rivet_type_id Layer_type_id = 0xfd88eddb;
		constexpr const static std::string_view Hidden_type_name = "Hidden";
		constexpr const static rivet::rivet_type_id Hidden_type_id = 0xb625a7da;
		constexpr const static std::string_view ExcludeInner_type_name = "ExcludeInner";
		constexpr const static rivet::rivet_type_id ExcludeInner_type_id = 0x656e21b9; 

		explicit SkinItemPart() = default;
		explicit SkinItemPart([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::x1b3f99b5 Slot {};
		rivet::ddl::generated::x5eb34cd6 Layer {};
		rivet::ddl::generated::xc837e0c6 Hidden {};
		bool ExcludeInner {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SkinItemPart>;
	};
} // namespace rivet::ddl::generated

// clang-format on
