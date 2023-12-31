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
	struct UDSWebApiObjectLink; 

	struct RIVET_DDL_SHARED UDSWebApiTrophyGroupLinks : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "UDSWebApiTrophyGroupLinks";
		constexpr static rivet::rivet_type_id type_id = 0x2fea69aa;

		constexpr static std::string_view trophies_type_name = "trophies";
		constexpr static rivet::rivet_type_id trophies_type_id = 0x5dda9340;
		constexpr static std::string_view trophySet_type_name = "trophySet";
		constexpr static rivet::rivet_type_id trophySet_type_id = 0x4d8e554c; 

		explicit UDSWebApiTrophyGroupLinks() = default;
		explicit UDSWebApiTrophyGroupLinks([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<std::shared_ptr<rivet::ddl::generated::UDSWebApiObjectLink>> trophies {};
		std::shared_ptr<rivet::ddl::generated::UDSWebApiObjectLink> trophySet {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UDSWebApiTrophyGroupLinks>;
	};
} // namespace rivet::ddl::generated

// clang-format on
