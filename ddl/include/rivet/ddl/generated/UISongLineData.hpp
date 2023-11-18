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
	struct RIVET_DDL_SHARED UISongLineData : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "UISongLineData";
		constexpr static rivet::rivet_type_id type_id = 0x87673766;

		constexpr static std::string_view LineName_type_name = "LineName";
		constexpr static rivet::rivet_type_id LineName_type_id = 0xba3046e8;
		constexpr static std::string_view StartTime_type_name = "StartTime";
		constexpr static rivet::rivet_type_id StartTime_type_id = 0xc5bae2b;
		constexpr static std::string_view EndTime_type_name = "EndTime";
		constexpr static rivet::rivet_type_id EndTime_type_id = 0xf5a688c4;
		constexpr static std::string_view IsSecondary_type_name = "IsSecondary";
		constexpr static rivet::rivet_type_id IsSecondary_type_id = 0xaf179409; 

		explicit UISongLineData() = default;
		explicit UISongLineData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view LineName {};
		float StartTime {};
		float EndTime {};
		bool IsSecondary {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UISongLineData>;
	};
} // namespace rivet::ddl::generated

// clang-format on
