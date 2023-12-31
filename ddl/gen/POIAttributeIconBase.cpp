// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/POIAttributeIconSingleSVG.hpp>
#include <rivet/ddl/generated/POIAttributeIconSingle.hpp>
#include <rivet/ddl/generated/POIAttributeIconNone.hpp> 

#include <rivet/ddl/generated/POIAttributeIconBase.hpp>

namespace rivet::ddl::generated {
	POIAttributeIconBase::POIAttributeIconBase([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {

	}

	[[nodiscard]] auto
	POIAttributeIconBase::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	POIAttributeIconBase::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<POIAttributeIconBase> {
		if (incoming_type_id == POIAttributeIconBase::type_id) {
			return std::make_shared<POIAttributeIconBase>(serialized);
		}

		auto POIAttributeIconNone_ptr = POIAttributeIconNone::from_substruct(incoming_type_id, serialized);
		if (POIAttributeIconNone_ptr != nullptr) {
			return POIAttributeIconNone_ptr;
		}

		auto POIAttributeIconSingle_ptr = POIAttributeIconSingle::from_substruct(incoming_type_id, serialized);
		if (POIAttributeIconSingle_ptr != nullptr) {
			return POIAttributeIconSingle_ptr;
		}

		auto POIAttributeIconSingleSVG_ptr = POIAttributeIconSingleSVG::from_substruct(incoming_type_id, serialized);
		if (POIAttributeIconSingleSVG_ptr != nullptr) {
			return POIAttributeIconSingleSVG_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
