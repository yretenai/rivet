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
	struct DDLVector3; 

	struct RIVET_DDL_SHARED FiringDesiredAimPosChangedEvent : EventBase {
		constexpr static std::string_view type_name = "FiringDesiredAimPosChangedEvent";
		constexpr static rivet::rivet_type_id type_id = 0x53caa45a;

		constexpr static std::string_view OldPos_type_name = "OldPos";
		constexpr static rivet::rivet_type_id OldPos_type_id = 0xd94bd10d;
		constexpr static std::string_view OldPosValid_type_name = "OldPosValid";
		constexpr static rivet::rivet_type_id OldPosValid_type_id = 0xc1a9ebdc;
		constexpr static std::string_view NewPos_type_name = "NewPos";
		constexpr static rivet::rivet_type_id NewPos_type_id = 0x5dab98a8;
		constexpr static std::string_view NewPosValid_type_name = "NewPosValid";
		constexpr static rivet::rivet_type_id NewPosValid_type_id = 0x697f6162; 

		explicit FiringDesiredAimPosChangedEvent() = default;
		explicit FiringDesiredAimPosChangedEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::DDLVector3> OldPos {};
		bool OldPosValid {};
		std::shared_ptr<rivet::ddl::generated::DDLVector3> NewPos {};
		bool NewPosValid {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<FiringDesiredAimPosChangedEvent>;
	};
} // namespace rivet::ddl::generated

// clang-format on
