// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/HorizontalAngleOffsetEmitterPrius.hpp>
#include <rivet/ddl/generated/DDLVector3.hpp> 

#include <rivet/ddl/generated/LocalOffsetEmitterPrius.hpp>

namespace rivet::ddl::generated {
	LocalOffsetEmitterPrius::LocalOffsetEmitterPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): WeaponEmitterBasePrius(serialized) {
		EmitFromUser = serialized->get_bool(EmitFromUser_type_id);
		Offset = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(Offset_type_id); 
	}

	[[nodiscard]] auto
	LocalOffsetEmitterPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	LocalOffsetEmitterPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<LocalOffsetEmitterPrius> {
		if (incoming_type_id == LocalOffsetEmitterPrius::type_id) {
			return std::make_shared<LocalOffsetEmitterPrius>(serialized);
		}

		auto HorizontalAngleOffsetEmitterPrius_ptr = HorizontalAngleOffsetEmitterPrius::from_substruct(incoming_type_id, serialized);
		if (HorizontalAngleOffsetEmitterPrius_ptr != nullptr) {
			return HorizontalAngleOffsetEmitterPrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
