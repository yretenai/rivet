// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/FootstepEvent.hpp>
#include <rivet/ddl/generated/FootstepRequestEvent.hpp>
#include <rivet/ddl/generated/AddGroundEvent.hpp>
#include <rivet/ddl/generated/AnimLandEvent.hpp> 

#include <rivet/ddl/generated/GroundEvent.hpp>

namespace rivet::ddl::generated {
	GroundEvent::GroundEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		LocatorName = serialized->get_string(LocatorName_type_id);
		CheckDistance = serialized->get_float(CheckDistance_type_id);
		Label = serialized->get_string(Label_type_id);
		DoCollision = serialized->get_bool(DoCollision_type_id);
		Material = serialized->get_enum<rivet::ddl::generated::x10b3c4cf>(Material_type_id, rivet::ddl::generated::x10b3c4cf_values);
		MaterialAsset = serialized->get_uint64(MaterialAsset_type_id);
		QueryHandle = serialized->get_uint64(QueryHandle_type_id);
		InWater = serialized->get_bool(InWater_type_id);
		FoundCollision = serialized->get_bool(FoundCollision_type_id); 
	}

	[[nodiscard]] auto
	GroundEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	GroundEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GroundEvent> {
		if (incoming_type_id == GroundEvent::type_id) {
			return std::make_shared<GroundEvent>(serialized);
		}

		auto AnimLandEvent_ptr = AnimLandEvent::from_substruct(incoming_type_id, serialized);
		if (AnimLandEvent_ptr != nullptr) {
			return AnimLandEvent_ptr;
		}

		auto AddGroundEvent_ptr = AddGroundEvent::from_substruct(incoming_type_id, serialized);
		if (AddGroundEvent_ptr != nullptr) {
			return AddGroundEvent_ptr;
		}

		auto FootstepRequestEvent_ptr = FootstepRequestEvent::from_substruct(incoming_type_id, serialized);
		if (FootstepRequestEvent_ptr != nullptr) {
			return FootstepRequestEvent_ptr;
		}

		auto FootstepEvent_ptr = FootstepEvent::from_substruct(incoming_type_id, serialized);
		if (FootstepEvent_ptr != nullptr) {
			return FootstepEvent_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
