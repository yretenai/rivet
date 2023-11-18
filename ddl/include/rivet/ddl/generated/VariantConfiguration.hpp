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

#include <rivet/ddl/generated/enums/xc3e5efea.hpp> 

namespace rivet::ddl::generated {
	struct VariantLookData; 

	struct RIVET_DDL_SHARED VariantConfiguration : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "VariantConfiguration";
		constexpr static rivet::rivet_type_id type_id = 0xd360e847;

		constexpr static std::string_view Variant_type_name = "Variant";
		constexpr static rivet::rivet_type_id Variant_type_id = 0xf0a9dc95;
		constexpr static std::string_view ValidLookGroups_type_name = "ValidLookGroups";
		constexpr static rivet::rivet_type_id ValidLookGroups_type_id = 0xe1d6fd5b;
		constexpr static std::string_view VariantConstantLooks_type_name = "VariantConstantLooks";
		constexpr static rivet::rivet_type_id VariantConstantLooks_type_id = 0x8729cb27; 

		explicit VariantConfiguration() = default;
		explicit VariantConfiguration([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::xc3e5efea Variant {};
		std::vector<std::shared_ptr<rivet::ddl::generated::VariantLookData>> ValidLookGroups {};
		std::vector<std::string_view> VariantConstantLooks {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VariantConfiguration>;
	};
} // namespace rivet::ddl::generated

// clang-format on
