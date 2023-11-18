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
	struct RIVET_DDL_SHARED Cinematic2BuildConfig : ConfigBase {
		constexpr static std::string_view type_name = "Cinematic2BuildConfig";
		constexpr static rivet::rivet_type_id type_id = 0xc450068;

		constexpr static std::string_view MaxNonStreamedSize_type_name = "MaxNonStreamedSize";
		constexpr static rivet::rivet_type_id MaxNonStreamedSize_type_id = 0xd79ef716; 

		explicit Cinematic2BuildConfig() = default;
		explicit Cinematic2BuildConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint32_t MaxNonStreamedSize {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<Cinematic2BuildConfig>;
	};
} // namespace rivet::ddl::generated

// clang-format on
