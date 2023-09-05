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

#include <rivet/ddl/generated/enums/x7ecfc969.hpp> 

namespace rivet::ddl::generated {
	struct SkinItemLocatorOverride; 

	struct RIVET_DDL_SHARED SkinItemLocatorOverrideListElement : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "SkinItemLocatorOverrideListElement";
		constexpr const static rivet::rivet_type_id type_id = 0x903685ca;

		constexpr const static std::string_view Available_type_name = "Available";
		constexpr const static rivet::rivet_type_id Available_type_id = 0x27723b89;
		constexpr const static std::string_view LocatorOverride_type_name = "LocatorOverride";
		constexpr const static rivet::rivet_type_id LocatorOverride_type_id = 0xa761bc40; 

		explicit SkinItemLocatorOverrideListElement() = default;
		explicit SkinItemLocatorOverrideListElement([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::x7ecfc969 Available {};
		std::shared_ptr<rivet::ddl::generated::SkinItemLocatorOverride> LocatorOverride {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SkinItemLocatorOverrideListElement>;
	};
} // namespace rivet::ddl::generated

// clang-format on
