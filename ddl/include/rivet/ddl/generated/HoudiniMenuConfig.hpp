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
	struct HoudiniMenuItem; 

	struct RIVET_DDL_SHARED HoudiniMenuConfig : ConfigBase {
		constexpr static std::string_view type_name = "HoudiniMenuConfig";
		constexpr static rivet::rivet_type_id type_id = 0x5c50b49;

		constexpr static std::string_view Items_type_name = "Items";
		constexpr static rivet::rivet_type_id Items_type_id = 0xf84d258c; 

		explicit HoudiniMenuConfig() = default;
		explicit HoudiniMenuConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<std::shared_ptr<rivet::ddl::generated::HoudiniMenuItem>> Items {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HoudiniMenuConfig>;
	};
} // namespace rivet::ddl::generated

// clang-format on
