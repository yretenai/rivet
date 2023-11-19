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

#include <rivet/ddl/generated/DamagePacket.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED DamageEventBase : DamagePacket {
		constexpr static std::string_view type_name = "DamageEventBase";
		constexpr static rivet::rivet_type_id type_id = 0xe17b5006;

		constexpr static std::string_view FollowAttachActor_type_name = "FollowAttachActor";
		constexpr static rivet::rivet_type_id FollowAttachActor_type_id = 0x7f05cf4d;
		constexpr static std::string_view Continuous_type_name = "Continuous";
		constexpr static rivet::rivet_type_id Continuous_type_id = 0xd12767c0; 

		explicit DamageEventBase() = default;
		explicit DamageEventBase([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		bool FollowAttachActor {};
		bool Continuous {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DamageEventBase>;
	};
} // namespace rivet::ddl::generated

// clang-format on