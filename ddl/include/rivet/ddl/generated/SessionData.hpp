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
	struct EngineControlSessionData;
	struct SessionPersistentData;
	struct SessionTransientData;
	struct SessionWindowSize;
	struct SessionFilesByType;
	struct SessionAssetError;
	struct NodeGraphEditorSessionData;
	struct ZoneSessionData;
	struct NodeGraphSessionData;
	struct MaterialGraphSessionData;
	struct PerformanceSessionData;
	struct Cinematic2SessionData;
	struct CinematicSessionData;
	struct AnimSetSessionData; 

	struct RIVET_DDL_SHARED SessionData : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "SessionData";
		constexpr static rivet::rivet_type_id type_id = 0xb0af8c46;

		constexpr static std::string_view PersistentData_type_name = "PersistentData";
		constexpr static rivet::rivet_type_id PersistentData_type_id = 0xd280fe14;
		constexpr static std::string_view TransientData_type_name = "TransientData";
		constexpr static rivet::rivet_type_id TransientData_type_id = 0x11685cf3;
		constexpr static std::string_view WindowSize_type_name = "WindowSize";
		constexpr static rivet::rivet_type_id WindowSize_type_id = 0xa2979036;
		constexpr static std::string_view OpenAssets_type_name = "OpenAssets";
		constexpr static rivet::rivet_type_id OpenAssets_type_id = 0x64ceea1b;
		constexpr static std::string_view RequestOpen_type_name = "RequestOpen";
		constexpr static rivet::rivet_type_id RequestOpen_type_id = 0x9df25f7;
		constexpr static std::string_view AssetErrors_type_name = "AssetErrors";
		constexpr static rivet::rivet_type_id AssetErrors_type_id = 0xa942c52b;
		constexpr static std::string_view ZoneData_type_name = "ZoneData";
		constexpr static rivet::rivet_type_id ZoneData_type_id = 0x90e4c61b;
		constexpr static std::string_view ScriptData_type_name = "ScriptData";
		constexpr static rivet::rivet_type_id ScriptData_type_id = 0x9b82e2e1;
		constexpr static std::string_view MaterialGraphData_type_name = "MaterialGraphData";
		constexpr static rivet::rivet_type_id MaterialGraphData_type_id = 0x30945dd4;
		constexpr static std::string_view NodeGraphEditorData_type_name = "NodeGraphEditorData";
		constexpr static rivet::rivet_type_id NodeGraphEditorData_type_id = 0x5facdea2;
		constexpr static std::string_view PerformanceData_type_name = "PerformanceData";
		constexpr static rivet::rivet_type_id PerformanceData_type_id = 0x6f9e2818;
		constexpr static std::string_view CinematicData_type_name = "CinematicData";
		constexpr static rivet::rivet_type_id CinematicData_type_id = 0x7705d4b4;
		constexpr static std::string_view Cinematic2Data_type_name = "Cinematic2Data";
		constexpr static rivet::rivet_type_id Cinematic2Data_type_id = 0x3ae8ee63;
		constexpr static std::string_view AnimSetData_type_name = "AnimSetData";
		constexpr static rivet::rivet_type_id AnimSetData_type_id = 0x69d2b714;
		constexpr static std::string_view EngineControlData_type_name = "EngineControlData";
		constexpr static rivet::rivet_type_id EngineControlData_type_id = 0x80ff637c; 

		explicit SessionData() = default;
		explicit SessionData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::SessionPersistentData> PersistentData {};
		std::shared_ptr<rivet::ddl::generated::SessionTransientData> TransientData {};
		std::shared_ptr<rivet::ddl::generated::SessionWindowSize> WindowSize {};
		std::vector<std::shared_ptr<rivet::ddl::generated::SessionFilesByType>> OpenAssets {};
		std::vector<std::shared_ptr<rivet::ddl::generated::SessionFilesByType>> RequestOpen {};
		std::vector<std::shared_ptr<rivet::ddl::generated::SessionAssetError>> AssetErrors {};
		std::shared_ptr<rivet::ddl::generated::ZoneSessionData> ZoneData {};
		std::shared_ptr<rivet::ddl::generated::NodeGraphSessionData> ScriptData {};
		std::shared_ptr<rivet::ddl::generated::MaterialGraphSessionData> MaterialGraphData {};
		std::shared_ptr<rivet::ddl::generated::NodeGraphEditorSessionData> NodeGraphEditorData {};
		std::shared_ptr<rivet::ddl::generated::PerformanceSessionData> PerformanceData {};
		std::shared_ptr<rivet::ddl::generated::CinematicSessionData> CinematicData {};
		std::shared_ptr<rivet::ddl::generated::Cinematic2SessionData> Cinematic2Data {};
		std::shared_ptr<rivet::ddl::generated::AnimSetSessionData> AnimSetData {};
		std::shared_ptr<rivet::ddl::generated::EngineControlSessionData> EngineControlData {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SessionData>;
	};
} // namespace rivet::ddl::generated

// clang-format on
