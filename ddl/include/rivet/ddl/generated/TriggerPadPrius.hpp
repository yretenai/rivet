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
	struct RIVET_DDL_SHARED TriggerPadPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "TriggerPadPrius";
		constexpr static rivet::rivet_type_id type_id = 0xd824ea3d;

		constexpr static std::string_view StartEnabled_type_name = "StartEnabled";
		constexpr static rivet::rivet_type_id StartEnabled_type_id = 0x6f36ca8b;
		constexpr static std::string_view HeroUseOnly_type_name = "HeroUseOnly";
		constexpr static rivet::rivet_type_id HeroUseOnly_type_id = 0x203a030a;
		constexpr static std::string_view TriggerTime_type_name = "TriggerTime";
		constexpr static rivet::rivet_type_id TriggerTime_type_id = 0xb2abdf4; 

		explicit TriggerPadPrius() = default;
		explicit TriggerPadPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		bool StartEnabled {};
		bool HeroUseOnly {};
		float TriggerTime {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TriggerPadPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
