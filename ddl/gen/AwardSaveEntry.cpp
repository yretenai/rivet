// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AwardBaseSave.hpp> 

#include <rivet/ddl/generated/AwardSaveEntry.hpp>

namespace rivet::ddl::generated {
	AwardSaveEntry::AwardSaveEntry([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		CodeName = serialized->get_string(CodeName_type_id);
		AwardSave = serialized->unwrap_into<rivet::ddl::generated::AwardBaseSave>(AwardSave_type_id); 
	}

	[[nodiscard]] auto
	AwardSaveEntry::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AwardSaveEntry::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AwardSaveEntry> {
		if (incoming_type_id == AwardSaveEntry::type_id) {
			return std::make_shared<AwardSaveEntry>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
