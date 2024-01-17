// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/FossilizeBeardAttacherPrius.hpp>

namespace rivet::ddl::generated {
	FossilizeBeardAttacherPrius::FossilizeBeardAttacherPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		BeardActor = serialized->get_string(BeardActor_type_id, {}); 
	}

	[[nodiscard]] auto
	FossilizeBeardAttacherPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	FossilizeBeardAttacherPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<FossilizeBeardAttacherPrius> {
		if (incoming_type_id == FossilizeBeardAttacherPrius::type_id) {
			return std::make_shared<FossilizeBeardAttacherPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
