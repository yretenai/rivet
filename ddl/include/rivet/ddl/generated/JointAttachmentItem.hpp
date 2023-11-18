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
	struct RIVET_DDL_SHARED JointAttachmentItem : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "JointAttachmentItem";
		constexpr static rivet::rivet_type_id type_id = 0x32cf0860;

		constexpr static std::string_view AttachedActor_type_name = "AttachedActor";
		constexpr static rivet::rivet_type_id AttachedActor_type_id = 0xdb67f5f9;
		constexpr static std::string_view AttachPoint_type_name = "AttachPoint";
		constexpr static rivet::rivet_type_id AttachPoint_type_id = 0xd7124ea3;
		constexpr static std::string_view AttachRelative_type_name = "AttachRelative";
		constexpr static rivet::rivet_type_id AttachRelative_type_id = 0x710e1574;
		constexpr static std::string_view AttachPositionOnly_type_name = "AttachPositionOnly";
		constexpr static rivet::rivet_type_id AttachPositionOnly_type_id = 0x167ea522; 

		explicit JointAttachmentItem() = default;
		explicit JointAttachmentItem([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint64_t AttachedActor {};
		std::string_view AttachPoint {};
		bool AttachRelative {};
		bool AttachPositionOnly {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<JointAttachmentItem>;
	};
} // namespace rivet::ddl::generated

// clang-format on
