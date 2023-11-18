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
	struct AbstractTriggerPrius_Tools; 

	struct RIVET_DDL_SHARED OverlayTrigger_Tools : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "OverlayTrigger_Tools";
		constexpr static rivet::rivet_type_id type_id = 0xde3f5637;

		constexpr static std::string_view Trigger_type_name = "Trigger";
		constexpr static rivet::rivet_type_id Trigger_type_id = 0x1b816c65; 

		explicit OverlayTrigger_Tools() = default;
		explicit OverlayTrigger_Tools([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::AbstractTriggerPrius_Tools> Trigger {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<OverlayTrigger_Tools>;
	};
} // namespace rivet::ddl::generated

// clang-format on
