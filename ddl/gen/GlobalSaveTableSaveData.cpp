// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/GlobalSaveTableSaveData.hpp>

namespace rivet::ddl::generated {
	GlobalSaveTableSaveData::GlobalSaveTableSaveData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Table = serialized->get_floats(Table_type_id); 
	}

	[[nodiscard]] auto
	GlobalSaveTableSaveData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	GlobalSaveTableSaveData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GlobalSaveTableSaveData> {
		if (incoming_type_id == GlobalSaveTableSaveData::type_id) {
			return std::make_shared<GlobalSaveTableSaveData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
