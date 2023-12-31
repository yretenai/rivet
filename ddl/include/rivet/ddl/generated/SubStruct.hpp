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
	struct RIVET_DDL_SHARED SubStruct : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "SubStruct";
		constexpr static rivet::rivet_type_id type_id = 0x59bfc531;

		constexpr static std::string_view Str_type_name = "Str";
		constexpr static rivet::rivet_type_id Str_type_id = 0x76fb8a30;
		constexpr static std::string_view Val_type_name = "Val";
		constexpr static rivet::rivet_type_id Val_type_id = 0xbd8a93ac; 

		explicit SubStruct() = default;
		explicit SubStruct([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view Str {};
		int32_t Val {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SubStruct>;
	};
} // namespace rivet::ddl::generated

// clang-format on
