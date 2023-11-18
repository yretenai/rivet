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

#include <rivet/ddl/generated/GameItemConfig.hpp> 

namespace rivet::ddl::generated {
	struct GadgetPortalTetherPrius; 

	struct RIVET_DDL_SHARED PortalTetherItemConfig : GameItemConfig {
		constexpr static std::string_view type_name = "PortalTetherItemConfig";
		constexpr static rivet::rivet_type_id type_id = 0x3eec7003;

		constexpr static std::string_view PortalTetherPrius_type_name = "PortalTetherPrius";
		constexpr static rivet::rivet_type_id PortalTetherPrius_type_id = 0x1b18f80f; 

		explicit PortalTetherItemConfig() = default;
		explicit PortalTetherItemConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::GadgetPortalTetherPrius> PortalTetherPrius {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PortalTetherItemConfig>;
	};
} // namespace rivet::ddl::generated

// clang-format on
