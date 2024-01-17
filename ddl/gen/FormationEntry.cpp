// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/FormationEntry.hpp>

namespace rivet::ddl::generated {
	FormationEntry::FormationEntry([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		StartPoint = serialized->get_uint64(StartPoint_type_id, 0);
		EntryCurve = serialized->get_uint64(EntryCurve_type_id, 0);
		AttackPoint = serialized->get_uint64(AttackPoint_type_id, 0);
		ExitCurve = serialized->get_uint64(ExitCurve_type_id, 0); 
	}

	[[nodiscard]] auto
	FormationEntry::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	FormationEntry::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<FormationEntry> {
		if (incoming_type_id == FormationEntry::type_id) {
			return std::make_shared<FormationEntry>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
