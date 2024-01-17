// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ECMCommentNodeDef.hpp>
#include <rivet/ddl/generated/ECMFieldOpNodeDef.hpp>
#include <rivet/ddl/generated/ECMInputNodeDef.hpp>
#include <rivet/ddl/generated/ECMEffectNodeDef.hpp> 

#include <rivet/ddl/generated/ECMResponseDef.hpp>

namespace rivet::ddl::generated {
	ECMResponseDef::ECMResponseDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Id = serialized->get_uint64(Id_type_id, 0);
		Index = serialized->get_int32(Index_type_id, 0);
		Enabled = serialized->get_bool(Enabled_type_id, true);
		Name = serialized->get_string(Name_type_id, {});
		EffectNodes = serialized->unwrap_into_many<rivet::ddl::generated::ECMEffectNodeDef>(EffectNodes_type_id);
		InputNodes = serialized->unwrap_into_many<rivet::ddl::generated::ECMInputNodeDef>(InputNodes_type_id);
		FieldOpNodes = serialized->unwrap_into_many<rivet::ddl::generated::ECMFieldOpNodeDef>(FieldOpNodes_type_id);
		CommentNodes = serialized->unwrap_into_many<rivet::ddl::generated::ECMCommentNodeDef>(CommentNodes_type_id); 
	}

	[[nodiscard]] auto
	ECMResponseDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ECMResponseDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ECMResponseDef> {
		if (incoming_type_id == ECMResponseDef::type_id) {
			return std::make_shared<ECMResponseDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
