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

#include <rivet/ddl/generated/enums/x17c3a26f.hpp>
#include <rivet/ddl/generated/enums/xafae1264.hpp>
#include <rivet/ddl/generated/TriggerByBasePrius.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED TriggerByDistancePrius : TriggerByBasePrius {
		constexpr static std::string_view type_name = "TriggerByDistancePrius";
		constexpr static rivet::rivet_type_id type_id = 0xe8777fe8;

		constexpr static std::string_view AutoDisableType_type_name = "AutoDisableType";
		constexpr static rivet::rivet_type_id AutoDisableType_type_id = 0xc0d3221b;
		constexpr static std::string_view Shape_type_name = "Shape";
		constexpr static rivet::rivet_type_id Shape_type_id = 0xc4633319;
		constexpr static std::string_view TriggerDist_type_name = "TriggerDist";
		constexpr static rivet::rivet_type_id TriggerDist_type_id = 0xe5c2f546;
		constexpr static std::string_view TriggerDistPad_type_name = "TriggerDistPad";
		constexpr static rivet::rivet_type_id TriggerDistPad_type_id = 0x323396e4;
		constexpr static std::string_view OffsetX_type_name = "OffsetX";
		constexpr static rivet::rivet_type_id OffsetX_type_id = 0x30d28d6d;
		constexpr static std::string_view OffsetY_type_name = "OffsetY";
		constexpr static rivet::rivet_type_id OffsetY_type_id = 0x47d5bdfb;
		constexpr static std::string_view OffsetZ_type_name = "OffsetZ";
		constexpr static rivet::rivet_type_id OffsetZ_type_id = 0xdedcec41;
		constexpr static std::string_view BoxX_type_name = "BoxX";
		constexpr static rivet::rivet_type_id BoxX_type_id = 0x41268601;
		constexpr static std::string_view BoxY_type_name = "BoxY";
		constexpr static rivet::rivet_type_id BoxY_type_id = 0x3621b697;
		constexpr static std::string_view BoxZ_type_name = "BoxZ";
		constexpr static rivet::rivet_type_id BoxZ_type_id = 0xaf28e72d;
		constexpr static std::string_view Volume_type_name = "Volume";
		constexpr static rivet::rivet_type_id Volume_type_id = 0x87e283b9;
		constexpr static std::string_view AngleMin_type_name = "AngleMin";
		constexpr static rivet::rivet_type_id AngleMin_type_id = 0x7b57d539;
		constexpr static std::string_view AngleMax_type_name = "AngleMax";
		constexpr static rivet::rivet_type_id AngleMax_type_id = 0x475aea60;
		constexpr static std::string_view AnglePad_type_name = "AnglePad";
		constexpr static rivet::rivet_type_id AnglePad_type_id = 0x47a5860c;
		constexpr static std::string_view PollingDelayMin_type_name = "PollingDelayMin";
		constexpr static rivet::rivet_type_id PollingDelayMin_type_id = 0xb2f4539b;
		constexpr static std::string_view PollingDelayMax_type_name = "PollingDelayMax";
		constexpr static rivet::rivet_type_id PollingDelayMax_type_id = 0x8ef96cc2; 

		explicit TriggerByDistancePrius() = default;
		explicit TriggerByDistancePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::xafae1264 AutoDisableType {};
		rivet::ddl::generated::x17c3a26f Shape {};
		float TriggerDist {};
		float TriggerDistPad {};
		float OffsetX {};
		float OffsetY {};
		float OffsetZ {};
		float BoxX {};
		float BoxY {};
		float BoxZ {};
		uint64_t Volume {};
		float AngleMin {};
		float AngleMax {};
		float AnglePad {};
		float PollingDelayMin {};
		float PollingDelayMax {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TriggerByDistancePrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
