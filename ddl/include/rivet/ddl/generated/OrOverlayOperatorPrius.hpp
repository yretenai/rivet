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

#include <rivet/ddl/generated/BaseCustomOverlayTriggerPrius.hpp> 

namespace rivet::ddl::generated {
	struct TriggerArray; 

	struct RIVET_DDL_SHARED OrOverlayOperatorPrius : BaseCustomOverlayTriggerPrius {
		constexpr static std::string_view type_name = "OrOverlayOperatorPrius";
		constexpr static rivet::rivet_type_id type_id = 0xffe3b9b7;

		constexpr static std::string_view Triggers_type_name = "Triggers";
		constexpr static rivet::rivet_type_id Triggers_type_id = 0xf4cf343d; 

		explicit OrOverlayOperatorPrius() = default;
		explicit OrOverlayOperatorPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<std::shared_ptr<rivet::ddl::generated::TriggerArray>> Triggers {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<OrOverlayOperatorPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
