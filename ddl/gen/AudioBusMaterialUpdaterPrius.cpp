// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AudioBusMaterialUpdaterPrius.hpp>

namespace rivet::ddl::generated {
	AudioBusMaterialUpdaterPrius::AudioBusMaterialUpdaterPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		MaterialConstantName = serialized->get_string(MaterialConstantName_type_id, {});
		MaterialMapName = serialized->get_string(MaterialMapName_type_id, {});
		AudioBus = serialized->get_string(AudioBus_type_id, {});
		MinBusValue = serialized->get_float(MinBusValue_type_id, 0.000000);
		MaxBusValue = serialized->get_float(MaxBusValue_type_id, 1.000000);
		RandomBonusValue = serialized->get_float(RandomBonusValue_type_id, 0.020000); 
	}

	[[nodiscard]] auto
	AudioBusMaterialUpdaterPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AudioBusMaterialUpdaterPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AudioBusMaterialUpdaterPrius> {
		if (incoming_type_id == AudioBusMaterialUpdaterPrius::type_id) {
			return std::make_shared<AudioBusMaterialUpdaterPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
