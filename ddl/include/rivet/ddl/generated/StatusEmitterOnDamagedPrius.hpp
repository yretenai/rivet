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

#include <rivet/ddl/generated/StatusEmitterBasePrius.hpp>
#include <rivet/ddl/generated/enums/x8d7e44cf.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED StatusEmitterOnDamagedPrius : StatusEmitterBasePrius {
		constexpr const static std::string_view type_name = "StatusEmitterOnDamagedPrius";
		constexpr const static rivet::rivet_type_id type_id = 0x87f50a9f;

		constexpr const static std::string_view DamageThreshold_type_name = "DamageThreshold";
		constexpr const static rivet::rivet_type_id DamageThreshold_type_id = 0x3623f7e6;
		constexpr const static std::string_view ProcPercent_type_name = "ProcPercent";
		constexpr const static rivet::rivet_type_id ProcPercent_type_id = 0x41c6897;
		constexpr const static std::string_view DamageTypes_type_name = "DamageTypes";
		constexpr const static rivet::rivet_type_id DamageTypes_type_id = 0xc1e511be; 

		explicit StatusEmitterOnDamagedPrius() = default;
		explicit StatusEmitterOnDamagedPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float DamageThreshold {};
		float ProcPercent {};
		std::vector<rivet::ddl::generated::x8d7e44cf> DamageTypes {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<StatusEmitterOnDamagedPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
