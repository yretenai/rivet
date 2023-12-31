// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/EditorDebugOptions.hpp> 

#include <rivet/ddl/generated/Cinematic2SessionData.hpp>

namespace rivet::ddl::generated {
	Cinematic2SessionData::Cinematic2SessionData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Selection = serialized->get_uint64s(Selection_type_id);
		RenderMode = serialized->get_enum<rivet::ddl::generated::EditorRenderMode>(RenderMode_type_id, rivet::ddl::generated::EditorRenderMode_values);
		DebugOptions = serialized->unwrap_into<rivet::ddl::generated::EditorDebugOptions>(DebugOptions_type_id); 
	}

	[[nodiscard]] auto
	Cinematic2SessionData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	Cinematic2SessionData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<Cinematic2SessionData> {
		if (incoming_type_id == Cinematic2SessionData::type_id) {
			return std::make_shared<Cinematic2SessionData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
