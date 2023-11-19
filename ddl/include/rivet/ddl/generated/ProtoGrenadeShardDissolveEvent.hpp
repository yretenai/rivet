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

#include <rivet/ddl/generated/EventBase.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED ProtoGrenadeShardDissolveEvent : EventBase {
		constexpr static std::string_view type_name = "ProtoGrenadeShardDissolveEvent";
		constexpr static rivet::rivet_type_id type_id = 0xefd32ac9;

		constexpr static std::string_view IsExploding_type_name = "IsExploding";
		constexpr static rivet::rivet_type_id IsExploding_type_id = 0x68da67c3; 

		explicit ProtoGrenadeShardDissolveEvent() = default;
		explicit ProtoGrenadeShardDissolveEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		bool IsExploding {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ProtoGrenadeShardDissolveEvent>;
	};
} // namespace rivet::ddl::generated

// clang-format on