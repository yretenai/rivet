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

#include <rivet/ddl/generated/enums/x58b2a3a9.hpp>
#include <rivet/ddl/generated/UIOptionTypeBase.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED UIOptionTypePage : UIOptionTypeBase {
		constexpr static std::string_view type_name = "UIOptionTypePage";
		constexpr static rivet::rivet_type_id type_id = 0xc654c1cc;

		constexpr static std::string_view PageID_type_name = "PageID";
		constexpr static rivet::rivet_type_id PageID_type_id = 0x982d0b4c; 

		explicit UIOptionTypePage() = default;
		explicit UIOptionTypePage([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::x58b2a3a9 PageID {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UIOptionTypePage>;
	};
} // namespace rivet::ddl::generated

// clang-format on
