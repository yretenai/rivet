// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/POIAttributeOutroNone.hpp>
#include <rivet/ddl/generated/POIAttributeOutroTimer.hpp> 

#include <rivet/ddl/generated/POIAttributeOutroBase.hpp>

namespace rivet::ddl::generated {
	POIAttributeOutroBase::POIAttributeOutroBase([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {

	}

	[[nodiscard]] auto
	POIAttributeOutroBase::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	POIAttributeOutroBase::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<POIAttributeOutroBase> {
		if (incoming_type_id == POIAttributeOutroBase::type_id) {
			return std::make_shared<POIAttributeOutroBase>(serialized);
		}

		auto POIAttributeOutroTimer_ptr = POIAttributeOutroTimer::from_substruct(incoming_type_id, serialized);
		if (POIAttributeOutroTimer_ptr != nullptr) {
			return POIAttributeOutroTimer_ptr;
		}

		auto POIAttributeOutroNone_ptr = POIAttributeOutroNone::from_substruct(incoming_type_id, serialized);
		if (POIAttributeOutroNone_ptr != nullptr) {
			return POIAttributeOutroNone_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
