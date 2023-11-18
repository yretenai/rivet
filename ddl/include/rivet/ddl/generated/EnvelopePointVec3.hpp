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
	struct DDLVector3; 

	struct RIVET_DDL_SHARED EnvelopePointVec3 : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "EnvelopePointVec3";
		constexpr static rivet::rivet_type_id type_id = 0x3f9a2461;

		constexpr static std::string_view CanModifyX_type_name = "CanModifyX";
		constexpr static rivet::rivet_type_id CanModifyX_type_id = 0xade0c28b;
		constexpr static std::string_view CanModifyY_type_name = "CanModifyY";
		constexpr static rivet::rivet_type_id CanModifyY_type_id = 0xdae7f21d;
		constexpr static std::string_view HoudiniInterpolationType_type_name = "HoudiniInterpolationType";
		constexpr static rivet::rivet_type_id HoudiniInterpolationType_type_id = 0x367642d7;
		constexpr static std::string_view X_type_name = "X";
		constexpr static rivet::rivet_type_id X_type_id = 0x5e33418d;
		constexpr static std::string_view Y_type_name = "Y";
		constexpr static rivet::rivet_type_id Y_type_id = 0x2934711b; 

		explicit EnvelopePointVec3() = default;
		explicit EnvelopePointVec3([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		bool CanModifyX {};
		bool CanModifyY {};
		int32_t HoudiniInterpolationType {};
		float X {};
		std::shared_ptr<rivet::ddl::generated::DDLVector3> Y {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<EnvelopePointVec3>;
	};
} // namespace rivet::ddl::generated

// clang-format on
