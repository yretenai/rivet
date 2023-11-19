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

#include <rivet/ddl/generated/InteractLocationPrius.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED InteractLocationLocatorPrius : InteractLocationPrius {
		constexpr static std::string_view type_name = "InteractLocationLocatorPrius";
		constexpr static rivet::rivet_type_id type_id = 0x46817914;

		constexpr static std::string_view Locator_type_name = "Locator";
		constexpr static rivet::rivet_type_id Locator_type_id = 0x7bac1d57;
		constexpr static std::string_view AnimLocator_type_name = "AnimLocator";
		constexpr static rivet::rivet_type_id AnimLocator_type_id = 0x2b968714;
		constexpr static std::string_view ExitLocator_type_name = "ExitLocator";
		constexpr static rivet::rivet_type_id ExitLocator_type_id = 0xd20b2f39; 

		explicit InteractLocationLocatorPrius() = default;
		explicit InteractLocationLocatorPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view Locator {};
		std::string_view AnimLocator {};
		std::string_view ExitLocator {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<InteractLocationLocatorPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on