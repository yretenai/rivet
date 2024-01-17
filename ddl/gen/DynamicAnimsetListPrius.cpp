// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DynamicAnimsetItem.hpp> 

#include <rivet/ddl/generated/DynamicAnimsetListPrius.hpp>

namespace rivet::ddl::generated {
	DynamicAnimsetListPrius::DynamicAnimsetListPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ItemList = serialized->unwrap_into_many<rivet::ddl::generated::DynamicAnimsetItem>(ItemList_type_id);
		AcquireRange = serialized->get_float(AcquireRange_type_id, 8.000000); 
	}

	[[nodiscard]] auto
	DynamicAnimsetListPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DynamicAnimsetListPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DynamicAnimsetListPrius> {
		if (incoming_type_id == DynamicAnimsetListPrius::type_id) {
			return std::make_shared<DynamicAnimsetListPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
