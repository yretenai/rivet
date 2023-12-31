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
	struct RIVET_DDL_SHARED VaultMetaData : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "VaultMetaData";
		constexpr static rivet::rivet_type_id type_id = 0x37889aa;

		constexpr static std::string_view Hash_type_name = "Hash";
		constexpr static rivet::rivet_type_id Hash_type_id = 0xe128a208;
		constexpr static std::string_view CreatedBy_type_name = "CreatedBy";
		constexpr static rivet::rivet_type_id CreatedBy_type_id = 0x51abd94e;
		constexpr static std::string_view LastModifiedBy_type_name = "LastModifiedBy";
		constexpr static rivet::rivet_type_id LastModifiedBy_type_id = 0xabaffb72;
		constexpr static std::string_view Tags_type_name = "Tags";
		constexpr static rivet::rivet_type_id Tags_type_id = 0x5f2c5496;
		constexpr static std::string_view ForceUpdate_type_name = "ForceUpdate";
		constexpr static rivet::rivet_type_id ForceUpdate_type_id = 0x9225d15;
		constexpr static std::string_view SourceDataFile_type_name = "SourceDataFile";
		constexpr static rivet::rivet_type_id SourceDataFile_type_id = 0xb3f3ab86; 

		explicit VaultMetaData() = default;
		explicit VaultMetaData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint32_t Hash {};
		std::string_view CreatedBy {};
		std::string_view LastModifiedBy {};
		std::string_view Tags {};
		bool ForceUpdate {};
		std::string_view SourceDataFile {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VaultMetaData>;
	};
} // namespace rivet::ddl::generated

// clang-format on
