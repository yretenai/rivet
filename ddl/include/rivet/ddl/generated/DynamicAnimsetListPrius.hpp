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
	struct DynamicAnimsetItem; 

	struct RIVET_DDL_SHARED DynamicAnimsetListPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "DynamicAnimsetListPrius";
		constexpr static rivet::rivet_type_id type_id = 0xc25b0536;

		constexpr static std::string_view ItemList_type_name = "ItemList";
		constexpr static rivet::rivet_type_id ItemList_type_id = 0xb485889e;
		constexpr static std::string_view AcquireRange_type_name = "AcquireRange";
		constexpr static rivet::rivet_type_id AcquireRange_type_id = 0x192b20a6; 

		explicit DynamicAnimsetListPrius() = default;
		explicit DynamicAnimsetListPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<std::shared_ptr<rivet::ddl::generated::DynamicAnimsetItem>> ItemList {};
		float AcquireRange {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DynamicAnimsetListPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
