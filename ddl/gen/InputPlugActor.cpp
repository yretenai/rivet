// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ActorPlug.hpp> 

#include <rivet/ddl/generated/InputPlugActor.hpp>

namespace rivet::ddl::generated {
	InputPlugActor::InputPlugActor([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): InputPlugBaseDef(serialized) {
		Value = serialized->unwrap_into<rivet::ddl::generated::ActorPlug>(Value_type_id); 
	}

	[[nodiscard]] auto
	InputPlugActor::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	InputPlugActor::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<InputPlugActor> {
		if (incoming_type_id == InputPlugActor::type_id) {
			return std::make_shared<InputPlugActor>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
