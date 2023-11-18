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
	struct ObjSysUnlockSequence;
	struct CollectibleTypeDenum; 

	struct RIVET_DDL_SHARED CollectibleTypeInfoBase : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "CollectibleTypeInfoBase";
		constexpr static rivet::rivet_type_id type_id = 0xcfb51fcb;

		constexpr static std::string_view CollectibleType_type_name = "CollectibleType";
		constexpr static rivet::rivet_type_id CollectibleType_type_id = 0xa2fe6498;
		constexpr static std::string_view MissionLocks_type_name = "MissionLocks";
		constexpr static rivet::rivet_type_id MissionLocks_type_id = 0x8a19a607; 

		explicit CollectibleTypeInfoBase() = default;
		explicit CollectibleTypeInfoBase([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::CollectibleTypeDenum> CollectibleType {};
		std::shared_ptr<rivet::ddl::generated::ObjSysUnlockSequence> MissionLocks {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CollectibleTypeInfoBase>;
	};
} // namespace rivet::ddl::generated

// clang-format on
