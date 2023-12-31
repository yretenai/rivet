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
	struct RIVET_DDL_SHARED SetVectorActionPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "SetVectorActionPrius";
		constexpr static rivet::rivet_type_id type_id = 0x15316f33;

		constexpr static std::string_view ActionType_type_name = "ActionType";
		constexpr static rivet::rivet_type_id ActionType_type_id = 0x874b2194;
		constexpr static std::string_view X_type_name = "X";
		constexpr static rivet::rivet_type_id X_type_id = 0x5e33418d;
		constexpr static std::string_view Y_type_name = "Y";
		constexpr static rivet::rivet_type_id Y_type_id = 0x2934711b;
		constexpr static std::string_view Z_type_name = "Z";
		constexpr static rivet::rivet_type_id Z_type_id = 0xb03d20a1;
		constexpr static std::string_view UseDefaultsForUnconnectedInputs_type_name = "UseDefaultsForUnconnectedInputs";
		constexpr static rivet::rivet_type_id UseDefaultsForUnconnectedInputs_type_id = 0xc1801c0e; 

		explicit SetVectorActionPrius() = default;
		explicit SetVectorActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::x10228b34 ActionType {};
		float X {};
		float Y {};
		float Z {};
		bool UseDefaultsForUnconnectedInputs {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SetVectorActionPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
