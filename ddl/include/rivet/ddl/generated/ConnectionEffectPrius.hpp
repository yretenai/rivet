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
	struct DDLVector3; 

	struct RIVET_DDL_SHARED ConnectionEffectPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "ConnectionEffectPrius";
		constexpr static rivet::rivet_type_id type_id = 0x8009d13c;

		constexpr static std::string_view MainLocator_type_name = "MainLocator";
		constexpr static rivet::rivet_type_id MainLocator_type_id = 0x5e0849bd;
		constexpr static std::string_view MainOffset_type_name = "MainOffset";
		constexpr static rivet::rivet_type_id MainOffset_type_id = 0xacf4ce05;
		constexpr static std::string_view ConnectedActor_type_name = "ConnectedActor";
		constexpr static rivet::rivet_type_id ConnectedActor_type_id = 0xea5a6203;
		constexpr static std::string_view ConnectedLocator_type_name = "ConnectedLocator";
		constexpr static rivet::rivet_type_id ConnectedLocator_type_id = 0xf4783f3d;
		constexpr static std::string_view ConnectedOffset_type_name = "ConnectedOffset";
		constexpr static rivet::rivet_type_id ConnectedOffset_type_id = 0xd6ce116b; 

		explicit ConnectionEffectPrius() = default;
		explicit ConnectionEffectPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view MainLocator {};
		std::shared_ptr<rivet::ddl::generated::DDLVector3> MainOffset {};
		uint64_t ConnectedActor {};
		std::string_view ConnectedLocator {};
		std::shared_ptr<rivet::ddl::generated::DDLVector3> ConnectedOffset {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ConnectionEffectPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
