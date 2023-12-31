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

#include <rivet/ddl/generated/enums/xd64fa9b1.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED UIDisplayObjectData : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "UIDisplayObjectData";
		constexpr static rivet::rivet_type_id type_id = 0xf7620dfb;

		constexpr static std::string_view ObjectType_type_name = "ObjectType";
		constexpr static rivet::rivet_type_id ObjectType_type_id = 0x7dfa0351;
		constexpr static std::string_view ObjectActor_type_name = "ObjectActor";
		constexpr static rivet::rivet_type_id ObjectActor_type_id = 0xc858642e;
		constexpr static std::string_view Scale_type_name = "Scale";
		constexpr static rivet::rivet_type_id Scale_type_id = 0xf515e945;
		constexpr static std::string_view RotationSpeed_type_name = "RotationSpeed";
		constexpr static rivet::rivet_type_id RotationSpeed_type_id = 0xe5938d1e;
		constexpr static std::string_view InitialYaw_type_name = "InitialYaw";
		constexpr static rivet::rivet_type_id InitialYaw_type_id = 0x7ddfeff9;
		constexpr static std::string_view StaticRoll_type_name = "StaticRoll";
		constexpr static rivet::rivet_type_id StaticRoll_type_id = 0xd241dff3;
		constexpr static std::string_view CenterToOrigin_type_name = "CenterToOrigin";
		constexpr static rivet::rivet_type_id CenterToOrigin_type_id = 0xc28dc267;
		constexpr static std::string_view Look_type_name = "Look";
		constexpr static rivet::rivet_type_id Look_type_id = 0x1baa14b2; 

		explicit UIDisplayObjectData() = default;
		explicit UIDisplayObjectData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::xd64fa9b1 ObjectType {};
		std::string_view ObjectActor {};
		float Scale {};
		float RotationSpeed {};
		float InitialYaw {};
		float StaticRoll {};
		bool CenterToOrigin {};
		std::string_view Look {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UIDisplayObjectData>;
	};
} // namespace rivet::ddl::generated

// clang-format on
