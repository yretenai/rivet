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
	struct AssetReferenceDef; 

	struct RIVET_DDL_SHARED AssertPortalInfo : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "AssertPortalInfo";
		constexpr static rivet::rivet_type_id type_id = 0x37ea70b1;

		constexpr static std::string_view PortalObjectActor_type_name = "PortalObjectActor";
		constexpr static rivet::rivet_type_id PortalObjectActor_type_id = 0x586c8e4a;
		constexpr static std::string_view IsOtherIP_type_name = "IsOtherIP";
		constexpr static rivet::rivet_type_id IsOtherIP_type_id = 0x2c044252;
		constexpr static std::string_view WasUsed_type_name = "WasUsed";
		constexpr static rivet::rivet_type_id WasUsed_type_id = 0x30a20739; 

		explicit AssertPortalInfo() = default;
		explicit AssertPortalInfo([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::AssetReferenceDef> PortalObjectActor {};
		bool IsOtherIP {};
		bool WasUsed {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AssertPortalInfo>;
	};
} // namespace rivet::ddl::generated

// clang-format on