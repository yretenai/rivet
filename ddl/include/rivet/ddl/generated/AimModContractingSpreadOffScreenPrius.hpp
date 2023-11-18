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

#include <rivet/ddl/generated/AimModifierPrius.hpp> 

namespace rivet::ddl::generated {
	struct ContractingVolley; 

	struct RIVET_DDL_SHARED AimModContractingSpreadOffScreenPrius : AimModifierPrius {
		constexpr static std::string_view type_name = "AimModContractingSpreadOffScreenPrius";
		constexpr static rivet::rivet_type_id type_id = 0xa75d2336;

		constexpr static std::string_view OffScreen_type_name = "OffScreen";
		constexpr static rivet::rivet_type_id OffScreen_type_id = 0x70eed091;
		constexpr static std::string_view OnScreen_type_name = "OnScreen";
		constexpr static rivet::rivet_type_id OnScreen_type_id = 0x24432213; 

		explicit AimModContractingSpreadOffScreenPrius() = default;
		explicit AimModContractingSpreadOffScreenPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::ContractingVolley> OffScreen {};
		std::shared_ptr<rivet::ddl::generated::ContractingVolley> OnScreen {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AimModContractingSpreadOffScreenPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
