// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/POIAttributeDistanceTextNone.hpp>
#include <rivet/ddl/generated/POIAttributeDistanceTextOffscreenOnly.hpp>
#include <rivet/ddl/generated/POIAttributeDistanceTextAlways.hpp>
#include <rivet/ddl/generated/POIAttributeDistanceTextOnscreenOnly.hpp> 

#include <rivet/ddl/generated/POIAttributeDistanceTextBase.hpp>

namespace rivet::ddl::generated {
	POIAttributeDistanceTextBase::POIAttributeDistanceTextBase([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {

	}

	[[nodiscard]] auto
	POIAttributeDistanceTextBase::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	POIAttributeDistanceTextBase::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<POIAttributeDistanceTextBase> {
		if (incoming_type_id == POIAttributeDistanceTextBase::type_id) {
			return std::make_shared<POIAttributeDistanceTextBase>(serialized);
		}

		auto POIAttributeDistanceTextOnscreenOnly_ptr = POIAttributeDistanceTextOnscreenOnly::from_substruct(incoming_type_id, serialized);
		if (POIAttributeDistanceTextOnscreenOnly_ptr != nullptr) {
			return POIAttributeDistanceTextOnscreenOnly_ptr;
		}

		auto POIAttributeDistanceTextAlways_ptr = POIAttributeDistanceTextAlways::from_substruct(incoming_type_id, serialized);
		if (POIAttributeDistanceTextAlways_ptr != nullptr) {
			return POIAttributeDistanceTextAlways_ptr;
		}

		auto POIAttributeDistanceTextOffscreenOnly_ptr = POIAttributeDistanceTextOffscreenOnly::from_substruct(incoming_type_id, serialized);
		if (POIAttributeDistanceTextOffscreenOnly_ptr != nullptr) {
			return POIAttributeDistanceTextOffscreenOnly_ptr;
		}

		auto POIAttributeDistanceTextNone_ptr = POIAttributeDistanceTextNone::from_substruct(incoming_type_id, serialized);
		if (POIAttributeDistanceTextNone_ptr != nullptr) {
			return POIAttributeDistanceTextNone_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
