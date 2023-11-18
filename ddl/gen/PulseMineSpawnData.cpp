// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/PulseMineSpawnData.hpp>

namespace rivet::ddl::generated {
	PulseMineSpawnData::PulseMineSpawnData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): AttachableShotSpawnData(serialized) {

	}

	[[nodiscard]] auto
	PulseMineSpawnData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	PulseMineSpawnData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PulseMineSpawnData> {
		if (incoming_type_id == PulseMineSpawnData::type_id) {
			return std::make_shared<PulseMineSpawnData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
