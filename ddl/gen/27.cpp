// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/GeneralInventoryListElement.hpp> 

#include <rivet/ddl/generated/MasterGeneralInventoryList.hpp>

namespace rivet::ddl::generated {
	MasterGeneralInventoryList::MasterGeneralInventoryList([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ConfigBase(serialized) {
		GeneralInventoryItems = serialized->unwrap_into_many<rivet::ddl::generated::GeneralInventoryListElement>(GeneralInventoryItems_type_id); 
	}

	auto
	MasterGeneralInventoryList::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	MasterGeneralInventoryList::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MasterGeneralInventoryList::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MasterGeneralInventoryList> {
		if (incoming_type_id == MasterGeneralInventoryList::type_id) {
			return std::make_shared<MasterGeneralInventoryList>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
