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
	struct Icon;
	struct Markup; 

	struct RIVET_DDL_SHARED UIIconMarkupConfig : ConfigBase {
		constexpr const static std::string_view type_name = "UIIconMarkupConfig";
		constexpr const static rivet::rivet_type_id type_id = 0x210f3f65;

		constexpr const static std::string_view Icons_type_name = "Icons";
		constexpr const static rivet::rivet_type_id Icons_type_id = 0x13399cbf;
		constexpr const static std::string_view Markups_type_name = "Markups";
		constexpr const static rivet::rivet_type_id Markups_type_id = 0x6e737dfa; 

		explicit UIIconMarkupConfig() = default;
		explicit UIIconMarkupConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<std::shared_ptr<rivet::ddl::generated::Icon>> Icons {};
		std::vector<std::shared_ptr<rivet::ddl::generated::Markup>> Markups {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UIIconMarkupConfig>;
	};
} // namespace rivet::ddl::generated

// clang-format on
