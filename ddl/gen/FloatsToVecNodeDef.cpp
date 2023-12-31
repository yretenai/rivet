// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/OutputPlugVec3.hpp>
#include <rivet/ddl/generated/InputPlugFloat.hpp> 

#include <rivet/ddl/generated/FloatsToVecNodeDef.hpp>

namespace rivet::ddl::generated {
	FloatsToVecNodeDef::FloatsToVecNodeDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): MathNodeBaseDef(serialized) {
		InX = serialized->unwrap_into<rivet::ddl::generated::InputPlugFloat>(InX_type_id);
		InY = serialized->unwrap_into<rivet::ddl::generated::InputPlugFloat>(InY_type_id);
		InZ = serialized->unwrap_into<rivet::ddl::generated::InputPlugFloat>(InZ_type_id);
		Vec = serialized->unwrap_into<rivet::ddl::generated::OutputPlugVec3>(Vec_type_id); 
	}

	[[nodiscard]] auto
	FloatsToVecNodeDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	FloatsToVecNodeDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<FloatsToVecNodeDef> {
		if (incoming_type_id == FloatsToVecNodeDef::type_id) {
			return std::make_shared<FloatsToVecNodeDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
