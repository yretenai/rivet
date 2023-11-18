// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SaveDataBase.hpp> 

#include <rivet/ddl/generated/SystemSaveDataContainer.hpp>

namespace rivet::ddl::generated {
	SystemSaveDataContainer::SystemSaveDataContainer([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		SaveName = serialized->get_string(SaveName_type_id);
		SaveData = serialized->unwrap_into<rivet::ddl::generated::SaveDataBase>(SaveData_type_id); 
	}

	[[nodiscard]] auto
	SystemSaveDataContainer::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SystemSaveDataContainer::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SystemSaveDataContainer> {
		if (incoming_type_id == SystemSaveDataContainer::type_id) {
			return std::make_shared<SystemSaveDataContainer>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
