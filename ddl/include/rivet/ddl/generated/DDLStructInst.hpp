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
	struct RIVET_DDL_SHARED DDLStructInst : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "DDLStructInst";
		constexpr static rivet::rivet_type_id type_id = 0xcb2480fd;

		constexpr static std::string_view DdlStructName_type_name = "DdlStructName";
		constexpr static rivet::rivet_type_id DdlStructName_type_id = 0x7df3b47b;
		constexpr static std::string_view Overrides_type_name = "Overrides";
		constexpr static rivet::rivet_type_id Overrides_type_id = 0x491145f6; 

		explicit DDLStructInst() = default;
		explicit DDLStructInst([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view DdlStructName {};
		std::optional<std::vector<rivet::structures::rivet_serialized_value>> Overrides {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DDLStructInst>;
	};
} // namespace rivet::ddl::generated

// clang-format on
