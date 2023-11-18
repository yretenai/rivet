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

#include <rivet/ddl/generated/enums/x49646b18.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED VaultFindReferencesInput : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "VaultFindReferencesInput";
		constexpr static rivet::rivet_type_id type_id = 0x5dc31cfe;

		constexpr static std::string_view Direction_type_name = "Direction";
		constexpr static rivet::rivet_type_id Direction_type_id = 0xbcb74ebf;
		constexpr static std::string_view VaultIds_type_name = "VaultIds";
		constexpr static rivet::rivet_type_id VaultIds_type_id = 0x8c7bb4c0;
		constexpr static std::string_view Recursive_type_name = "Recursive";
		constexpr static rivet::rivet_type_id Recursive_type_id = 0x3a3803f1; 

		explicit VaultFindReferencesInput() = default;
		explicit VaultFindReferencesInput([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::x49646b18 Direction {};
		std::vector<uint64_t> VaultIds {};
		bool Recursive {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VaultFindReferencesInput>;
	};
} // namespace rivet::ddl::generated

// clang-format on
