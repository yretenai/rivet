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

#include <rivet/ddl/generated/bitsets/ObjectiveFlagsGame.hpp>
#include <rivet/ddl/generated/ObjectiveSaveDataShared.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED ObjectiveSaveDataGame : ObjectiveSaveDataShared {
		constexpr static std::string_view type_name = "ObjectiveSaveDataGame";
		constexpr static rivet::rivet_type_id type_id = 0x38d836aa;

		constexpr static std::string_view ObjectiveFlagsGame_type_name = "ObjectiveFlagsGame";
		constexpr static rivet::rivet_type_id ObjectiveFlagsGame_type_id = 0xddf1d6d4; 

		explicit ObjectiveSaveDataGame() = default;
		explicit ObjectiveSaveDataGame([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::ObjectiveFlagsGame ObjectiveFlagsGame {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ObjectiveSaveDataGame>;
	};
} // namespace rivet::ddl::generated

// clang-format on