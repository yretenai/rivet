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

#include <rivet/ddl/generated/ConfigBase.hpp> 

namespace rivet::ddl::generated {
	struct DebugGraphList;
	struct ObjectiveSystemDataShared; 

	struct RIVET_DDL_SHARED ObjectiveSystemConfig : ConfigBase {
		constexpr const static std::string_view type_name = "ObjectiveSystemConfig";
		constexpr const static rivet::rivet_type_id type_id = 0x775b5d83;

		constexpr const static std::string_view SystemData_type_name = "SystemData";
		constexpr const static rivet::rivet_type_id SystemData_type_id = 0x5624b145;
		constexpr const static std::string_view DebugGraphList_type_name = "DebugGraphList";
		constexpr const static rivet::rivet_type_id DebugGraphList_type_id = 0x63f0f436; 

		explicit ObjectiveSystemConfig() = default;
		explicit ObjectiveSystemConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::ObjectiveSystemDataShared> SystemData {};
		std::shared_ptr<rivet::ddl::generated::DebugGraphList> DebugGraphList {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ObjectiveSystemConfig>;
	};
} // namespace rivet::ddl::generated

// clang-format on
