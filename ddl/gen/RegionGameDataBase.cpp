// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AutoGeneratedOverlayData.hpp>
#include <rivet/ddl/generated/AutoShadowZoneOverlayData.hpp>
#include <rivet/ddl/generated/CustomOverlayRegionData.hpp>
#include <rivet/ddl/generated/MissionConfig.hpp>
#include <rivet/ddl/generated/ExampleRegionData.hpp>
#include <rivet/ddl/generated/QuestData.hpp>
#include <rivet/ddl/generated/PerfSpecRegionData.hpp>
#include <rivet/ddl/generated/StoryMissionData.hpp>
#include <rivet/ddl/generated/AutoGenerateFromRegionOverlayData.hpp>
#include <rivet/ddl/generated/AdditionalHibernateZoneData.hpp> 

#include <rivet/ddl/generated/RegionGameDataBase.hpp>

namespace rivet::ddl::generated {
	RegionGameDataBase::RegionGameDataBase([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {

	}

	[[nodiscard]] auto
	RegionGameDataBase::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	RegionGameDataBase::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RegionGameDataBase> {
		if (incoming_type_id == RegionGameDataBase::type_id) {
			return std::make_shared<RegionGameDataBase>(serialized);
		}

		auto AdditionalHibernateZoneData_ptr = AdditionalHibernateZoneData::from_substruct(incoming_type_id, serialized);
		if (AdditionalHibernateZoneData_ptr != nullptr) {
			return AdditionalHibernateZoneData_ptr;
		}

		auto AutoGenerateFromRegionOverlayData_ptr = AutoGenerateFromRegionOverlayData::from_substruct(incoming_type_id, serialized);
		if (AutoGenerateFromRegionOverlayData_ptr != nullptr) {
			return AutoGenerateFromRegionOverlayData_ptr;
		}

		auto QuestData_ptr = QuestData::from_substruct(incoming_type_id, serialized);
		if (QuestData_ptr != nullptr) {
			return QuestData_ptr;
		}

		auto ExampleRegionData_ptr = ExampleRegionData::from_substruct(incoming_type_id, serialized);
		if (ExampleRegionData_ptr != nullptr) {
			return ExampleRegionData_ptr;
		}

		auto MissionConfig_ptr = MissionConfig::from_substruct(incoming_type_id, serialized);
		if (MissionConfig_ptr != nullptr) {
			return MissionConfig_ptr;
		}

		auto StoryMissionData_ptr = StoryMissionData::from_substruct(incoming_type_id, serialized);
		if (StoryMissionData_ptr != nullptr) {
			return StoryMissionData_ptr;
		}

		auto AutoShadowZoneOverlayData_ptr = AutoShadowZoneOverlayData::from_substruct(incoming_type_id, serialized);
		if (AutoShadowZoneOverlayData_ptr != nullptr) {
			return AutoShadowZoneOverlayData_ptr;
		}

		auto AutoGeneratedOverlayData_ptr = AutoGeneratedOverlayData::from_substruct(incoming_type_id, serialized);
		if (AutoGeneratedOverlayData_ptr != nullptr) {
			return AutoGeneratedOverlayData_ptr;
		}

		auto PerfSpecRegionData_ptr = PerfSpecRegionData::from_substruct(incoming_type_id, serialized);
		if (PerfSpecRegionData_ptr != nullptr) {
			return PerfSpecRegionData_ptr;
		}

		auto CustomOverlayRegionData_ptr = CustomOverlayRegionData::from_substruct(incoming_type_id, serialized);
		if (CustomOverlayRegionData_ptr != nullptr) {
			return CustomOverlayRegionData_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
