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
	struct VaultMetaData; 

	struct RIVET_DDL_SHARED LinkDef : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "LinkDef";
		constexpr static rivet::rivet_type_id type_id = 0xfe8603f8;

		constexpr static std::string_view VaultMetaData_type_name = "VaultMetaData";
		constexpr static rivet::rivet_type_id VaultMetaData_type_id = 0x37889aa;
		constexpr static std::string_view IconPath_type_name = "IconPath";
		constexpr static rivet::rivet_type_id IconPath_type_id = 0xbf5b007f;
		constexpr static std::string_view SourceObject_type_name = "SourceObject";
		constexpr static rivet::rivet_type_id SourceObject_type_id = 0x7fbfa1f9;
		constexpr static std::string_view DestinationObject_type_name = "DestinationObject";
		constexpr static rivet::rivet_type_id DestinationObject_type_id = 0x3d63c633; 

		explicit LinkDef() = default;
		explicit LinkDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::VaultMetaData> VaultMetaData {};
		std::string_view IconPath {};
		uint64_t SourceObject {};
		uint64_t DestinationObject {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<LinkDef>;
	};
} // namespace rivet::ddl::generated

// clang-format on
