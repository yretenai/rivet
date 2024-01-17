// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/UnderGrindOffEvent.hpp>

namespace rivet::ddl::generated {
	UnderGrindOffEvent::UnderGrindOffEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		Material = serialized->get_enum<rivet::ddl::generated::x10b3c4cf>(Material_type_id, rivet::ddl::generated::x10b3c4cf_values, rivet::ddl::generated::x10b3c4cf::None); 
	}

	[[nodiscard]] auto
	UnderGrindOffEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	UnderGrindOffEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UnderGrindOffEvent> {
		if (incoming_type_id == UnderGrindOffEvent::type_id) {
			return std::make_shared<UnderGrindOffEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
