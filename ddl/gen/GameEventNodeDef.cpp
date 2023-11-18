// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/OutputPlugSignal.hpp> 

#include <rivet/ddl/generated/GameEventNodeDef.hpp>

namespace rivet::ddl::generated {
	GameEventNodeDef::GameEventNodeDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Id = serialized->get_uint64(Id_type_id);
		Type = serialized->get_enum<rivet::ddl::generated::x577f103e>(Type_type_id, rivet::ddl::generated::x577f103e_values);
		Collapsed = serialized->get_bool(Collapsed_type_id);
		Disabled = serialized->get_bool(Disabled_type_id);
		X = serialized->get_float(X_type_id);
		Y = serialized->get_float(Y_type_id);
		GameEventName = serialized->get_string(GameEventName_type_id);
		Output = serialized->unwrap_into<rivet::ddl::generated::OutputPlugSignal>(Output_type_id); 
	}

	[[nodiscard]] auto
	GameEventNodeDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	GameEventNodeDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GameEventNodeDef> {
		if (incoming_type_id == GameEventNodeDef::type_id) {
			return std::make_shared<GameEventNodeDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
