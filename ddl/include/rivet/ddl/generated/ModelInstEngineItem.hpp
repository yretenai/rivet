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

#include <rivet/ddl/generated/enums/ModelInstType.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED ModelInstEngineItem : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "ModelInstEngineItem";
		constexpr static rivet::rivet_type_id type_id = 0x97fec513;

		constexpr static std::string_view AssetPath_type_name = "AssetPath";
		constexpr static rivet::rivet_type_id AssetPath_type_id = 0xefa614b;
		constexpr static std::string_view ModelInstType_type_name = "ModelInstType";
		constexpr static rivet::rivet_type_id ModelInstType_type_id = 0x2f974565; 

		explicit ModelInstEngineItem() = default;
		explicit ModelInstEngineItem([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view AssetPath {};
		rivet::ddl::generated::ModelInstType ModelInstType {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ModelInstEngineItem>;
	};
} // namespace rivet::ddl::generated

// clang-format on
