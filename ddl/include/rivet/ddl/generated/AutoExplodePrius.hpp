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

#include <rivet/ddl/generated/enums/KnockbackLevels.hpp>
#include <rivet/ddl/generated/enums/x8d7e44cf.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED AutoExplodePrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "AutoExplodePrius";
		constexpr static rivet::rivet_type_id type_id = 0x7e52c1a1;

		constexpr static std::string_view Delay_type_name = "Delay";
		constexpr static rivet::rivet_type_id Delay_type_id = 0xabc94c5a;
		constexpr static std::string_view Amount_type_name = "Amount";
		constexpr static rivet::rivet_type_id Amount_type_id = 0xb0d93e25;
		constexpr static std::string_view Radius_type_name = "Radius";
		constexpr static rivet::rivet_type_id Radius_type_id = 0x504203d;
		constexpr static std::string_view Type_type_name = "Type";
		constexpr static rivet::rivet_type_id Type_type_id = 0xbc4e9799;
		constexpr static std::string_view KnockbackLevel_type_name = "KnockbackLevel";
		constexpr static rivet::rivet_type_id KnockbackLevel_type_id = 0x2554a262;
		constexpr static std::string_view KnockbackAmount_type_name = "KnockbackAmount";
		constexpr static rivet::rivet_type_id KnockbackAmount_type_id = 0x7b1e600b;
		constexpr static std::string_view DestroyOnExplode_type_name = "DestroyOnExplode";
		constexpr static rivet::rivet_type_id DestroyOnExplode_type_id = 0x1ed06d86;
		constexpr static std::string_view LineOfSight_type_name = "LineOfSight";
		constexpr static rivet::rivet_type_id LineOfSight_type_id = 0x7f6a52f1; 

		explicit AutoExplodePrius() = default;
		explicit AutoExplodePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float Delay {};
		float Amount {};
		float Radius {};
		rivet::ddl::generated::x8d7e44cf Type {};
		rivet::ddl::generated::KnockbackLevels KnockbackLevel {};
		float KnockbackAmount {};
		bool DestroyOnExplode {};
		bool LineOfSight {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AutoExplodePrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
