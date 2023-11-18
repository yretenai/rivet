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
	struct RIVET_DDL_SHARED ProjectCustomDef : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "ProjectCustomDef";
		constexpr static rivet::rivet_type_id type_id = 0xe3f5b553;

		constexpr static std::string_view Enabled_type_name = "Enabled";
		constexpr static rivet::rivet_type_id Enabled_type_id = 0x5113d8bc;
		constexpr static std::string_view ValueA_type_name = "ValueA";
		constexpr static rivet::rivet_type_id ValueA_type_id = 0xcc085301;
		constexpr static std::string_view ValueB_type_name = "ValueB";
		constexpr static rivet::rivet_type_id ValueB_type_id = 0x550102bb;
		constexpr static std::string_view ValueC_type_name = "ValueC";
		constexpr static rivet::rivet_type_id ValueC_type_id = 0x2206322d;
		constexpr static std::string_view ValueD_type_name = "ValueD";
		constexpr static rivet::rivet_type_id ValueD_type_id = 0xbc62a78e; 

		explicit ProjectCustomDef() = default;
		explicit ProjectCustomDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		bool Enabled {};
		float ValueA {};
		float ValueB {};
		float ValueC {};
		float ValueD {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ProjectCustomDef>;
	};
} // namespace rivet::ddl::generated

// clang-format on
