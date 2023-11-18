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

#include <rivet/ddl/generated/enums/x36ed0644.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED ScriptVarWatch : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "ScriptVarWatch";
		constexpr static rivet::rivet_type_id type_id = 0xb1b08b1f;

		constexpr static std::string_view UniqueId_type_name = "UniqueId";
		constexpr static rivet::rivet_type_id UniqueId_type_id = 0x32ca55d0;
		constexpr static std::string_view Id_type_name = "Id";
		constexpr static rivet::rivet_type_id Id_type_id = 0x8a514a8d;
		constexpr static std::string_view InstanceTuid_type_name = "InstanceTuid";
		constexpr static rivet::rivet_type_id InstanceTuid_type_id = 0x4ffcecbf;
		constexpr static std::string_view PropertyId_type_name = "PropertyId";
		constexpr static rivet::rivet_type_id PropertyId_type_id = 0xfa3122e7;
		constexpr static std::string_view Sort_type_name = "Sort";
		constexpr static rivet::rivet_type_id Sort_type_id = 0x61b43292;
		constexpr static std::string_view Name_type_name = "Name";
		constexpr static rivet::rivet_type_id Name_type_id = 0x6eb3beb6;
		constexpr static std::string_view OriginalName_type_name = "OriginalName";
		constexpr static rivet::rivet_type_id OriginalName_type_id = 0x531e1cc;
		constexpr static std::string_view Type_type_name = "Type";
		constexpr static rivet::rivet_type_id Type_type_id = 0xbc4e9799;
		constexpr static std::string_view Value_type_name = "Value";
		constexpr static rivet::rivet_type_id Value_type_id = 0x42494f5;
		constexpr static std::string_view GraphId_type_name = "GraphId";
		constexpr static rivet::rivet_type_id GraphId_type_id = 0x76b05713;
		constexpr static std::string_view ZoneId_type_name = "ZoneId";
		constexpr static rivet::rivet_type_id ZoneId_type_id = 0xc0e0f909;
		constexpr static std::string_view Pinned_type_name = "Pinned";
		constexpr static rivet::rivet_type_id Pinned_type_id = 0xdb5fab80; 

		explicit ScriptVarWatch() = default;
		explicit ScriptVarWatch([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint64_t UniqueId {};
		uint64_t Id {};
		uint64_t InstanceTuid {};
		uint32_t PropertyId {};
		uint32_t Sort {};
		std::string_view Name {};
		std::string_view OriginalName {};
		rivet::ddl::generated::x36ed0644 Type {};
		std::optional<std::vector<rivet::structures::rivet_serialized_value>> Value {};
		uint64_t GraphId {};
		uint64_t ZoneId {};
		bool Pinned {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ScriptVarWatch>;
	};
} // namespace rivet::ddl::generated

// clang-format on
