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

#include <rivet/ddl/generated/enums/x3c1de250.hpp>
#include <rivet/ddl/generated/enums/x10228b34.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED NumberGenActionPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "NumberGenActionPrius";
		constexpr static rivet::rivet_type_id type_id = 0xd5ddd29f;

		constexpr static std::string_view ActionType_type_name = "ActionType";
		constexpr static rivet::rivet_type_id ActionType_type_id = 0x874b2194;
		constexpr static std::string_view Type_type_name = "Type";
		constexpr static rivet::rivet_type_id Type_type_id = 0xbc4e9799;
		constexpr static std::string_view Min_type_name = "Min";
		constexpr static rivet::rivet_type_id Min_type_id = 0x8b2e3419;
		constexpr static std::string_view Max_type_name = "Max";
		constexpr static rivet::rivet_type_id Max_type_id = 0xb7230b40;
		constexpr static std::string_view Speed_type_name = "Speed";
		constexpr static rivet::rivet_type_id Speed_type_id = 0x16753237; 

		explicit NumberGenActionPrius() = default;
		explicit NumberGenActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::x10228b34 ActionType {};
		rivet::ddl::generated::x3c1de250 Type {};
		float Min {};
		float Max {};
		float Speed {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<NumberGenActionPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
