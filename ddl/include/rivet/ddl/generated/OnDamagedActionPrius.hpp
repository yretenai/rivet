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

#include <rivet/ddl/generated/enums/x8d7e44cf.hpp>
#include <rivet/ddl/generated/enums/x10228b34.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED OnDamagedActionPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "OnDamagedActionPrius";
		constexpr static rivet::rivet_type_id type_id = 0xfe8f4866;

		constexpr static std::string_view ActionType_type_name = "ActionType";
		constexpr static rivet::rivet_type_id ActionType_type_id = 0x874b2194;
		constexpr static std::string_view InitListening_type_name = "InitListening";
		constexpr static rivet::rivet_type_id InitListening_type_id = 0xf387b27a;
		constexpr static std::string_view SignalMax_type_name = "SignalMax";
		constexpr static rivet::rivet_type_id SignalMax_type_id = 0x9149785e;
		constexpr static std::string_view PercentThreshold_type_name = "PercentThreshold";
		constexpr static rivet::rivet_type_id PercentThreshold_type_id = 0x792706c3;
		constexpr static std::string_view Type_type_name = "Type";
		constexpr static rivet::rivet_type_id Type_type_id = 0xbc4e9799;
		constexpr static std::string_view DamageName_type_name = "DamageName";
		constexpr static rivet::rivet_type_id DamageName_type_id = 0x56f13c62; 

		explicit OnDamagedActionPrius() = default;
		explicit OnDamagedActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::x10228b34 ActionType {};
		bool InitListening {};
		int32_t SignalMax {};
		float PercentThreshold {};
		rivet::ddl::generated::x8d7e44cf Type {};
		std::string_view DamageName {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<OnDamagedActionPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
