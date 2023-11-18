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
	struct RIVET_DDL_SHARED TargetFileBuildOutput : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "TargetFileBuildOutput";
		constexpr static rivet::rivet_type_id type_id = 0x2c4ae382;

		constexpr static std::string_view Messages_type_name = "Messages";
		constexpr static rivet::rivet_type_id Messages_type_id = 0x2103a3e6;
		constexpr static std::string_view MessageFormatStrings_type_name = "MessageFormatStrings";
		constexpr static rivet::rivet_type_id MessageFormatStrings_type_id = 0xf604188f;
		constexpr static std::string_view MessageIsValidation_type_name = "MessageIsValidation";
		constexpr static rivet::rivet_type_id MessageIsValidation_type_id = 0xa21b5c64;
		constexpr static std::string_view Levels_type_name = "Levels";
		constexpr static rivet::rivet_type_id Levels_type_id = 0xa1522a7e; 

		explicit TargetFileBuildOutput() = default;
		explicit TargetFileBuildOutput([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<std::string_view> Messages {};
		std::vector<std::string_view> MessageFormatStrings {};
		std::vector<bool> MessageIsValidation {};
		std::vector<int32_t> Levels {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TargetFileBuildOutput>;
	};
} // namespace rivet::ddl::generated

// clang-format on
