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
	struct ObjSysUnlockSequenceOverride;
	struct ObjSysUnlockArray; 

	struct RIVET_DDL_SHARED ObjSysUnlockSequence : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "ObjSysUnlockSequence";
		constexpr static rivet::rivet_type_id type_id = 0xeee8cee;

		constexpr static std::string_view DefaultUnlocks_type_name = "DefaultUnlocks";
		constexpr static rivet::rivet_type_id DefaultUnlocks_type_id = 0xa856f0ba;
		constexpr static std::string_view ObjectiveUnlockOverrides_type_name = "ObjectiveUnlockOverrides";
		constexpr static rivet::rivet_type_id ObjectiveUnlockOverrides_type_id = 0x4c3b0cd7; 

		explicit ObjSysUnlockSequence() = default;
		explicit ObjSysUnlockSequence([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::ObjSysUnlockArray> DefaultUnlocks {};
		std::vector<std::shared_ptr<rivet::ddl::generated::ObjSysUnlockSequenceOverride>> ObjectiveUnlockOverrides {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ObjSysUnlockSequence>;
	};
} // namespace rivet::ddl::generated

// clang-format on