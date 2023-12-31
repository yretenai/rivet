// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/StringHashPlug.hpp> 

#include <rivet/ddl/generated/InputPlugStringHash.hpp>

namespace rivet::ddl::generated {
	InputPlugStringHash::InputPlugStringHash([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): InputPlugBaseDef(serialized) {
		Value = serialized->unwrap_into<rivet::ddl::generated::StringHashPlug>(Value_type_id); 
	}

	[[nodiscard]] auto
	InputPlugStringHash::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	InputPlugStringHash::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<InputPlugStringHash> {
		if (incoming_type_id == InputPlugStringHash::type_id) {
			return std::make_shared<InputPlugStringHash>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
