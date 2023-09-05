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

#include <rivet/ddl/generated/enums/x81d3e717.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED RYNOPlanSaveWeight : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "RYNOPlanSaveWeight";
		constexpr const static rivet::rivet_type_id type_id = 0xa9fbc802;

		constexpr const static std::string_view SaveId_type_name = "SaveId";
		constexpr const static rivet::rivet_type_id SaveId_type_id = 0xcd7269d0;
		constexpr const static std::string_view Weight_type_name = "Weight";
		constexpr const static rivet::rivet_type_id Weight_type_id = 0x39b51b26; 

		explicit RYNOPlanSaveWeight() = default;
		explicit RYNOPlanSaveWeight([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::x81d3e717 SaveId {};
		float Weight {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RYNOPlanSaveWeight>;
	};
} // namespace rivet::ddl::generated

// clang-format on
