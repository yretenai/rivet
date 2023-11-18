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
	struct RIVET_DDL_SHARED AssetTypeSettings : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "AssetTypeSettings";
		constexpr static rivet::rivet_type_id type_id = 0xc48959d2;

		constexpr static std::string_view MaxCount_type_name = "MaxCount";
		constexpr static rivet::rivet_type_id MaxCount_type_id = 0x9c4783f5;
		constexpr static std::string_view ForceDefault_type_name = "ForceDefault";
		constexpr static rivet::rivet_type_id ForceDefault_type_id = 0x2cef5df;
		constexpr static std::string_view AutoReloadEnable_type_name = "AutoReloadEnable";
		constexpr static rivet::rivet_type_id AutoReloadEnable_type_id = 0x4ab50b87; 

		explicit AssetTypeSettings() = default;
		explicit AssetTypeSettings([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		int32_t MaxCount {};
		bool ForceDefault {};
		bool AutoReloadEnable {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AssetTypeSettings>;
	};
} // namespace rivet::ddl::generated

// clang-format on
