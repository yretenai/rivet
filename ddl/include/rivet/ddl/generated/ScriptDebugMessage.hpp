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

#include <rivet/ddl/generated/enums/xb379a82e.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED ScriptDebugMessage : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "ScriptDebugMessage";
		constexpr static rivet::rivet_type_id type_id = 0x7becdf7c;

		constexpr static std::string_view Action_type_name = "Action";
		constexpr static rivet::rivet_type_id Action_type_id = 0x79b4c2f5;
		constexpr static std::string_view Tuid_type_name = "Tuid";
		constexpr static rivet::rivet_type_id Tuid_type_id = 0x5953f773;
		constexpr static std::string_view PropertyId_type_name = "PropertyId";
		constexpr static rivet::rivet_type_id PropertyId_type_id = 0xfa3122e7; 

		explicit ScriptDebugMessage() = default;
		explicit ScriptDebugMessage([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::xb379a82e Action {};
		uint64_t Tuid {};
		uint32_t PropertyId {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ScriptDebugMessage>;
	};
} // namespace rivet::ddl::generated

// clang-format on
