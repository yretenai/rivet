// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SargassoCentipedeAODPrius.hpp> 

#include <rivet/ddl/generated/SargassoCentipedeAODSpawnData.hpp>

namespace rivet::ddl::generated {
	SargassoCentipedeAODSpawnData::SargassoCentipedeAODSpawnData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): AttachableShotSpawnData(serialized) {
		AODPrius = serialized->unwrap_into<rivet::ddl::generated::SargassoCentipedeAODPrius>(AODPrius_type_id); 
	}

	[[nodiscard]] auto
	SargassoCentipedeAODSpawnData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SargassoCentipedeAODSpawnData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SargassoCentipedeAODSpawnData> {
		if (incoming_type_id == SargassoCentipedeAODSpawnData::type_id) {
			return std::make_shared<SargassoCentipedeAODSpawnData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated