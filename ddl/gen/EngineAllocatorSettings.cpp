// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/HeapTemplate.hpp> 

#include <rivet/ddl/generated/EngineAllocatorSettings.hpp>

namespace rivet::ddl::generated {
	EngineAllocatorSettings::EngineAllocatorSettings([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		DynamicHeapTemplate = serialized->unwrap_into<rivet::ddl::generated::HeapTemplate>(DynamicHeapTemplate_type_id);
		DDLHeapTemplate = serialized->unwrap_into<rivet::ddl::generated::HeapTemplate>(DDLHeapTemplate_type_id);
		AssetHeapTemplate = serialized->unwrap_into<rivet::ddl::generated::HeapTemplate>(AssetHeapTemplate_type_id);
		PhysicsHeapTemplate = serialized->unwrap_into<rivet::ddl::generated::HeapTemplate>(PhysicsHeapTemplate_type_id);
		ComponentHeapTemplate = serialized->unwrap_into<rivet::ddl::generated::HeapTemplate>(ComponentHeapTemplate_type_id);
		SoundBanksHeapTemplate = serialized->unwrap_into<rivet::ddl::generated::HeapTemplate>(SoundBanksHeapTemplate_type_id);
		SoundHeapTemplate = serialized->unwrap_into<rivet::ddl::generated::HeapTemplate>(SoundHeapTemplate_type_id);
		ZoneAssetHeapTemplate = serialized->unwrap_into<rivet::ddl::generated::HeapTemplate>(ZoneAssetHeapTemplate_type_id);
		DebugScratch = serialized->get_bool(DebugScratch_type_id);
		PrintAllocSummaryAfterInit = serialized->get_bool(PrintAllocSummaryAfterInit_type_id);
		ShowLiveStats = serialized->get_enum<rivet::ddl::generated::xba58b2b9>(ShowLiveStats_type_id, rivet::ddl::generated::xba58b2b9_values);
		ManagedHeapWarningThresholdPercentage = serialized->get_int32(ManagedHeapWarningThresholdPercentage_type_id);
		ManagedHeapErrorThresholdPercentage = serialized->get_int32(ManagedHeapErrorThresholdPercentage_type_id);
		AssetHeapWarningThresholdPercentage = serialized->get_int32(AssetHeapWarningThresholdPercentage_type_id);
		AssetHeapErrorThresholdPercentage = serialized->get_int32(AssetHeapErrorThresholdPercentage_type_id);
		TextureHeapErrorThresholdPercentage = serialized->get_int32(TextureHeapErrorThresholdPercentage_type_id); 
	}

	[[nodiscard]] auto
	EngineAllocatorSettings::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	EngineAllocatorSettings::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<EngineAllocatorSettings> {
		if (incoming_type_id == EngineAllocatorSettings::type_id) {
			return std::make_shared<EngineAllocatorSettings>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
