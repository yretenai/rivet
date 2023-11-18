// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/POITypeMapIcon.hpp>
#include <rivet/ddl/generated/POITypeNone.hpp>
#include <rivet/ddl/generated/POITypeNest.hpp>
#include <rivet/ddl/generated/POITypePing.hpp>
#include <rivet/ddl/generated/POITypeMission.hpp>
#include <rivet/ddl/generated/POITypeInteract.hpp>
#include <rivet/ddl/generated/DDLVector3.hpp> 

#include <rivet/ddl/generated/POIInstanceDataBase.hpp>

namespace rivet::ddl::generated {
	POIInstanceDataBase::POIInstanceDataBase([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Offset = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(Offset_type_id);
		LOSChecks = serialized->get_bool(LOSChecks_type_id); 
	}

	[[nodiscard]] auto
	POIInstanceDataBase::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	POIInstanceDataBase::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<POIInstanceDataBase> {
		if (incoming_type_id == POIInstanceDataBase::type_id) {
			return std::make_shared<POIInstanceDataBase>(serialized);
		}

		auto POITypeInteract_ptr = POITypeInteract::from_substruct(incoming_type_id, serialized);
		if (POITypeInteract_ptr != nullptr) {
			return POITypeInteract_ptr;
		}

		auto POITypeMission_ptr = POITypeMission::from_substruct(incoming_type_id, serialized);
		if (POITypeMission_ptr != nullptr) {
			return POITypeMission_ptr;
		}

		auto POITypePing_ptr = POITypePing::from_substruct(incoming_type_id, serialized);
		if (POITypePing_ptr != nullptr) {
			return POITypePing_ptr;
		}

		auto POITypeNest_ptr = POITypeNest::from_substruct(incoming_type_id, serialized);
		if (POITypeNest_ptr != nullptr) {
			return POITypeNest_ptr;
		}

		auto POITypeNone_ptr = POITypeNone::from_substruct(incoming_type_id, serialized);
		if (POITypeNone_ptr != nullptr) {
			return POITypeNone_ptr;
		}

		auto POITypeMapIcon_ptr = POITypeMapIcon::from_substruct(incoming_type_id, serialized);
		if (POITypeMapIcon_ptr != nullptr) {
			return POITypeMapIcon_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
