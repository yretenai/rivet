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
	struct SoundPropagation2OcclParamsDef;
	struct SoundPropagation2DistModelDef; 

	struct RIVET_DDL_SHARED SoundPropagation2RoomParamsDef : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "SoundPropagation2RoomParamsDef";
		constexpr static rivet::rivet_type_id type_id = 0x5250e780;

		constexpr static std::string_view DesignerOutputBusLeveldB_type_name = "DesignerOutputBusLeveldB";
		constexpr static rivet::rivet_type_id DesignerOutputBusLeveldB_type_id = 0xa21f1868;
		constexpr static std::string_view AuxSendScalar_type_name = "AuxSendScalar";
		constexpr static rivet::rivet_type_id AuxSendScalar_type_id = 0xb11d5e51;
		constexpr static std::string_view DistanceModel_type_name = "DistanceModel";
		constexpr static rivet::rivet_type_id DistanceModel_type_id = 0x6fb61669;
		constexpr static std::string_view DirectPathOcclusion_type_name = "DirectPathOcclusion";
		constexpr static rivet::rivet_type_id DirectPathOcclusion_type_id = 0x680947db;
		constexpr static std::string_view RoomPathOcclusion_type_name = "RoomPathOcclusion";
		constexpr static rivet::rivet_type_id RoomPathOcclusion_type_id = 0x413a321f; 

		explicit SoundPropagation2RoomParamsDef() = default;
		explicit SoundPropagation2RoomParamsDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float DesignerOutputBusLeveldB {};
		float AuxSendScalar {};
		std::shared_ptr<rivet::ddl::generated::SoundPropagation2DistModelDef> DistanceModel {};
		std::shared_ptr<rivet::ddl::generated::SoundPropagation2OcclParamsDef> DirectPathOcclusion {};
		std::shared_ptr<rivet::ddl::generated::SoundPropagation2OcclParamsDef> RoomPathOcclusion {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SoundPropagation2RoomParamsDef>;
	};
} // namespace rivet::ddl::generated

// clang-format on
