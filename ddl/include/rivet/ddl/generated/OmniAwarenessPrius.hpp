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

#include <rivet/ddl/generated/enums/OmniAwarenessLos.hpp>
#include <rivet/ddl/generated/AwarenessBasePrius.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED OmniAwarenessPrius : AwarenessBasePrius {
		constexpr static std::string_view type_name = "OmniAwarenessPrius";
		constexpr static rivet::rivet_type_id type_id = 0xda8a02a8;

		constexpr static std::string_view Range_type_name = "Range";
		constexpr static rivet::rivet_type_id Range_type_id = 0x8ad49688;
		constexpr static std::string_view OmniAwarenessLos_type_name = "OmniAwarenessLos";
		constexpr static rivet::rivet_type_id OmniAwarenessLos_type_id = 0x780dee83;
		constexpr static std::string_view SourceLocatorName_type_name = "SourceLocatorName";
		constexpr static rivet::rivet_type_id SourceLocatorName_type_id = 0x58c28db; 

		explicit OmniAwarenessPrius() = default;
		explicit OmniAwarenessPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float Range {};
		rivet::ddl::generated::OmniAwarenessLos OmniAwarenessLos {};
		std::string_view SourceLocatorName {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<OmniAwarenessPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
