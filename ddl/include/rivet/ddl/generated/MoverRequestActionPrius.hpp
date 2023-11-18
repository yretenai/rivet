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

#include <rivet/ddl/generated/enums/x10228b34.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED MoverRequestActionPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "MoverRequestActionPrius";
		constexpr static rivet::rivet_type_id type_id = 0xc458bc9f;

		constexpr static std::string_view ActionType_type_name = "ActionType";
		constexpr static rivet::rivet_type_id ActionType_type_id = 0x874b2194;
		constexpr static std::string_view BodyBottomHeight_type_name = "BodyBottomHeight";
		constexpr static rivet::rivet_type_id BodyBottomHeight_type_id = 0x40e4ca53;
		constexpr static std::string_view BodyTopHeight_type_name = "BodyTopHeight";
		constexpr static rivet::rivet_type_id BodyTopHeight_type_id = 0x670b404f;
		constexpr static std::string_view UseExistingBodySize_type_name = "UseExistingBodySize";
		constexpr static rivet::rivet_type_id UseExistingBodySize_type_id = 0xeb7d1d46;
		constexpr static std::string_view PlanarDeflection_type_name = "PlanarDeflection";
		constexpr static rivet::rivet_type_id PlanarDeflection_type_id = 0x33c81fd4;
		constexpr static std::string_view RequestIsOffset_type_name = "RequestIsOffset";
		constexpr static rivet::rivet_type_id RequestIsOffset_type_id = 0x3c93e1fb;
		constexpr static std::string_view DisableGravity_type_name = "DisableGravity";
		constexpr static rivet::rivet_type_id DisableGravity_type_id = 0xa2f8897c;
		constexpr static std::string_view DisableGravityPersistent_type_name = "DisableGravityPersistent";
		constexpr static rivet::rivet_type_id DisableGravityPersistent_type_id = 0xd1f209c3;
		constexpr static std::string_view DisableGround_type_name = "DisableGround";
		constexpr static rivet::rivet_type_id DisableGround_type_id = 0x2f974193; 

		explicit MoverRequestActionPrius() = default;
		explicit MoverRequestActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::x10228b34 ActionType {};
		float BodyBottomHeight {};
		float BodyTopHeight {};
		bool UseExistingBodySize {};
		bool PlanarDeflection {};
		bool RequestIsOffset {};
		bool DisableGravity {};
		bool DisableGravityPersistent {};
		bool DisableGround {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MoverRequestActionPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
