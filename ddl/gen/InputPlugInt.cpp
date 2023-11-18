// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/IntPlug.hpp> 

#include <rivet/ddl/generated/InputPlugInt.hpp>

namespace rivet::ddl::generated {
	InputPlugInt::InputPlugInt([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): InputPlugBaseDef(serialized) {
		Value = serialized->unwrap_into<rivet::ddl::generated::IntPlug>(Value_type_id); 
	}

	[[nodiscard]] auto
	InputPlugInt::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	InputPlugInt::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<InputPlugInt> {
		if (incoming_type_id == InputPlugInt::type_id) {
			return std::make_shared<InputPlugInt>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
