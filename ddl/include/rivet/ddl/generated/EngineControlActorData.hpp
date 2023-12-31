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
	struct DDLTransform;
	struct EngineControlActorAnimInfo;
	struct ActorDef; 

	struct RIVET_DDL_SHARED EngineControlActorData : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "EngineControlActorData";
		constexpr static rivet::rivet_type_id type_id = 0xd85ea29;

		constexpr static std::string_view ActiveLooks_type_name = "ActiveLooks";
		constexpr static rivet::rivet_type_id ActiveLooks_type_id = 0xa7308e7;
		constexpr static std::string_view ActorDef_type_name = "ActorDef";
		constexpr static rivet::rivet_type_id ActorDef_type_id = 0xb8132d8b;
		constexpr static std::string_view AnimInfo_type_name = "AnimInfo";
		constexpr static rivet::rivet_type_id AnimInfo_type_id = 0x5c4d599f;
		constexpr static std::string_view Id_type_name = "Id";
		constexpr static rivet::rivet_type_id Id_type_id = 0x8a514a8d;
		constexpr static std::string_view ObjToWorld_type_name = "ObjToWorld";
		constexpr static rivet::rivet_type_id ObjToWorld_type_id = 0x3842c592; 

		explicit EngineControlActorData() = default;
		explicit EngineControlActorData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<bool> ActiveLooks {};
		std::shared_ptr<rivet::ddl::generated::ActorDef> ActorDef {};
		std::shared_ptr<rivet::ddl::generated::EngineControlActorAnimInfo> AnimInfo {};
		uint64_t Id {};
		std::shared_ptr<rivet::ddl::generated::DDLTransform> ObjToWorld {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<EngineControlActorData>;
	};
} // namespace rivet::ddl::generated

// clang-format on
