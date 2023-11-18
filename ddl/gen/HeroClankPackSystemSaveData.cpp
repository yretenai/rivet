// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/HeroClankPackSystemSaveData.hpp>

namespace rivet::ddl::generated {
	HeroClankPackSystemSaveData::HeroClankPackSystemSaveData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		BackpackConfigs = serialized->get_strings(BackpackConfigs_type_id);
		DebugSourceInfo = serialized->get_strings(DebugSourceInfo_type_id); 
	}

	[[nodiscard]] auto
	HeroClankPackSystemSaveData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HeroClankPackSystemSaveData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HeroClankPackSystemSaveData> {
		if (incoming_type_id == HeroClankPackSystemSaveData::type_id) {
			return std::make_shared<HeroClankPackSystemSaveData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
