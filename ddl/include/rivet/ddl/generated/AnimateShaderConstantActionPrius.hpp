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
	struct RIVET_DDL_SHARED AnimateShaderConstantActionPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "AnimateShaderConstantActionPrius";
		constexpr static rivet::rivet_type_id type_id = 0x7a80862f;

		constexpr static std::string_view ActionType_type_name = "ActionType";
		constexpr static rivet::rivet_type_id ActionType_type_id = 0x874b2194;
		constexpr static std::string_view Shader_type_name = "Shader";
		constexpr static rivet::rivet_type_id Shader_type_id = 0xc18bd04f;
		constexpr static std::string_view ConstantName_type_name = "ConstantName";
		constexpr static rivet::rivet_type_id ConstantName_type_id = 0xc6991700;
		constexpr static std::string_view StartValue_type_name = "StartValue";
		constexpr static rivet::rivet_type_id StartValue_type_id = 0x651c34d0;
		constexpr static std::string_view EndValue_type_name = "EndValue";
		constexpr static rivet::rivet_type_id EndValue_type_id = 0x5550361f;
		constexpr static std::string_view Duration_type_name = "Duration";
		constexpr static rivet::rivet_type_id Duration_type_id = 0x7c5e3db0; 

		explicit AnimateShaderConstantActionPrius() = default;
		explicit AnimateShaderConstantActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::x10228b34 ActionType {};
		std::string_view Shader {};
		std::string_view ConstantName {};
		float StartValue {};
		float EndValue {};
		float Duration {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AnimateShaderConstantActionPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
