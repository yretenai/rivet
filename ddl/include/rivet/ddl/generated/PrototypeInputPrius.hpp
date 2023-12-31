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

#include <rivet/ddl/generated/enums/x7a3f7920.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED PrototypeInputPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "PrototypeInputPrius";
		constexpr static rivet::rivet_type_id type_id = 0xcb302993;

		constexpr static std::string_view Button_type_name = "Button";
		constexpr static rivet::rivet_type_id Button_type_id = 0x47ee25a;
		constexpr static std::string_view TriggerCount_type_name = "TriggerCount";
		constexpr static rivet::rivet_type_id TriggerCount_type_id = 0xebd996d0;
		constexpr static std::string_view RetriggerDelay_type_name = "RetriggerDelay";
		constexpr static rivet::rivet_type_id RetriggerDelay_type_id = 0xffff3a00;
		constexpr static std::string_view UseRange_type_name = "UseRange";
		constexpr static rivet::rivet_type_id UseRange_type_id = 0x6a4e2be2;
		constexpr static std::string_view VolumeRange_type_name = "VolumeRange";
		constexpr static rivet::rivet_type_id VolumeRange_type_id = 0xa8fbfba2; 

		explicit PrototypeInputPrius() = default;
		explicit PrototypeInputPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::x7a3f7920 Button {};
		uint32_t TriggerCount {};
		float RetriggerDelay {};
		float UseRange {};
		bool VolumeRange {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PrototypeInputPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
