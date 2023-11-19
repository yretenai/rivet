// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ActorAssetReferenceDef.hpp>
#include <rivet/ddl/generated/InputPlugSignal.hpp> 

#include <rivet/ddl/generated/DestroyActorNodeDef.hpp>

namespace rivet::ddl::generated {
	DestroyActorNodeDef::DestroyActorNodeDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Id = serialized->get_uint64(Id_type_id);
		Type = serialized->get_enum<rivet::ddl::generated::x577f103e>(Type_type_id, rivet::ddl::generated::x577f103e_values);
		Collapsed = serialized->get_bool(Collapsed_type_id);
		Disabled = serialized->get_bool(Disabled_type_id);
		X = serialized->get_float(X_type_id);
		Y = serialized->get_float(Y_type_id);
		Input = serialized->unwrap_into<rivet::ddl::generated::InputPlugSignal>(Input_type_id);
		ActorPathToSpawn = serialized->unwrap_into<rivet::ddl::generated::ActorAssetReferenceDef>(ActorPathToSpawn_type_id); 
	}

	[[nodiscard]] auto
	DestroyActorNodeDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DestroyActorNodeDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DestroyActorNodeDef> {
		if (incoming_type_id == DestroyActorNodeDef::type_id) {
			return std::make_shared<DestroyActorNodeDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated