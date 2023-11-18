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
	struct VanityPerkBase; 

	struct RIVET_DDL_SHARED VanitySetConfig : ConfigBase {
		constexpr static std::string_view type_name = "VanitySetConfig";
		constexpr static rivet::rivet_type_id type_id = 0x4d121082;

		constexpr static std::string_view VanityBundles_type_name = "VanityBundles";
		constexpr static rivet::rivet_type_id VanityBundles_type_id = 0x229d71b5;
		constexpr static std::string_view DefaultColor_type_name = "DefaultColor";
		constexpr static rivet::rivet_type_id DefaultColor_type_id = 0x7ccd1470;
		constexpr static std::string_view IsDuplicate_type_name = "IsDuplicate";
		constexpr static rivet::rivet_type_id IsDuplicate_type_id = 0xa6036107;
		constexpr static std::string_view OriginalSet_type_name = "OriginalSet";
		constexpr static rivet::rivet_type_id OriginalSet_type_id = 0x254f8245;
		constexpr static std::string_view Perk_type_name = "Perk";
		constexpr static rivet::rivet_type_id Perk_type_id = 0xf39e155f; 

		explicit VanitySetConfig() = default;
		explicit VanitySetConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<std::string_view> VanityBundles {};
		uint8_t DefaultColor {};
		bool IsDuplicate {};
		std::string_view OriginalSet {};
		std::shared_ptr<rivet::ddl::generated::VanityPerkBase> Perk {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VanitySetConfig>;
	};
} // namespace rivet::ddl::generated

// clang-format on
