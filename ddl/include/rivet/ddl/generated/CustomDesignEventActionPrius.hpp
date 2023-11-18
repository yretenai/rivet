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
	struct DDLVector3; 

	struct RIVET_DDL_SHARED CustomDesignEventActionPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "CustomDesignEventActionPrius";
		constexpr static rivet::rivet_type_id type_id = 0xc66ca3d8;

		constexpr static std::string_view ActionType_type_name = "ActionType";
		constexpr static rivet::rivet_type_id ActionType_type_id = 0x874b2194;
		constexpr static std::string_view EventName_type_name = "EventName";
		constexpr static rivet::rivet_type_id EventName_type_id = 0x2048921d;
		constexpr static std::string_view Number_type_name = "Number";
		constexpr static rivet::rivet_type_id Number_type_id = 0xa8e85133;
		constexpr static std::string_view Vector_type_name = "Vector";
		constexpr static rivet::rivet_type_id Vector_type_id = 0x2516063c;
		constexpr static std::string_view String_type_name = "String";
		constexpr static rivet::rivet_type_id String_type_id = 0xa0c6fcce;
		constexpr static std::string_view Actor_type_name = "Actor";
		constexpr static rivet::rivet_type_id Actor_type_id = 0x5d269a38;
		constexpr static std::string_view Bool_type_name = "Bool";
		constexpr static rivet::rivet_type_id Bool_type_id = 0x6511f622; 

		explicit CustomDesignEventActionPrius() = default;
		explicit CustomDesignEventActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::x10228b34 ActionType {};
		std::string_view EventName {};
		float Number {};
		std::shared_ptr<rivet::ddl::generated::DDLVector3> Vector {};
		std::string_view String {};
		uint64_t Actor {};
		bool Bool {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CustomDesignEventActionPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
