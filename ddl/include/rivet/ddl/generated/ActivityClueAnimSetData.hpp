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
	struct ActivityClueAnimSetFilterBase; 

	struct RIVET_DDL_SHARED ActivityClueAnimSetData : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "ActivityClueAnimSetData";
		constexpr static rivet::rivet_type_id type_id = 0xc9cf54c5;

		constexpr static std::string_view AnimSet_type_name = "AnimSet";
		constexpr static rivet::rivet_type_id AnimSet_type_id = 0xffcf15f1;
		constexpr static std::string_view UserFilter_type_name = "UserFilter";
		constexpr static rivet::rivet_type_id UserFilter_type_id = 0xcba413d6; 

		explicit ActivityClueAnimSetData() = default;
		explicit ActivityClueAnimSetData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view AnimSet {};
		std::shared_ptr<rivet::ddl::generated::ActivityClueAnimSetFilterBase> UserFilter {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ActivityClueAnimSetData>;
	};
} // namespace rivet::ddl::generated

// clang-format on
