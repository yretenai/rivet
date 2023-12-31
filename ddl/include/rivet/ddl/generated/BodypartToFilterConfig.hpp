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

#include <rivet/ddl/generated/enums/xfdd79442.hpp>
#include <rivet/ddl/generated/ConfigBase.hpp> 

namespace rivet::ddl::generated {
	struct JointToBodyFilter; 

	struct RIVET_DDL_SHARED BodypartToFilterConfig : ConfigBase {
		constexpr static std::string_view type_name = "BodypartToFilterConfig";
		constexpr static rivet::rivet_type_id type_id = 0xea705a6c;

		constexpr static std::string_view DefaultBodyPartFilter_type_name = "DefaultBodyPartFilter";
		constexpr static rivet::rivet_type_id DefaultBodyPartFilter_type_id = 0x3b7089a2;
		constexpr static std::string_view JointMap_type_name = "JointMap";
		constexpr static rivet::rivet_type_id JointMap_type_id = 0x1af3775a; 

		explicit BodypartToFilterConfig() = default;
		explicit BodypartToFilterConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::xfdd79442 DefaultBodyPartFilter {};
		std::vector<std::shared_ptr<rivet::ddl::generated::JointToBodyFilter>> JointMap {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BodypartToFilterConfig>;
	};
} // namespace rivet::ddl::generated

// clang-format on
