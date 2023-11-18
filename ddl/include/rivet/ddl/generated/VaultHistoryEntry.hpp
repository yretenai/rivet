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

#include <rivet/ddl/generated/enums/x7632d21.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED VaultHistoryEntry : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "VaultHistoryEntry";
		constexpr static rivet::rivet_type_id type_id = 0xe2cb72a3;

		constexpr static std::string_view RecordId_type_name = "RecordId";
		constexpr static rivet::rivet_type_id RecordId_type_id = 0xd8565038;
		constexpr static std::string_view SaveType_type_name = "SaveType";
		constexpr static rivet::rivet_type_id SaveType_type_id = 0x113c82d1; 

		explicit VaultHistoryEntry() = default;
		explicit VaultHistoryEntry([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint32_t RecordId {};
		rivet::ddl::generated::x7632d21 SaveType {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VaultHistoryEntry>;
	};
} // namespace rivet::ddl::generated

// clang-format on
