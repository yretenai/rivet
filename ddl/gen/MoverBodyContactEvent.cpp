// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MoverBodyContactEvent.hpp>

namespace rivet::ddl::generated {
	MoverBodyContactEvent::MoverBodyContactEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		HitMaterial = serialized->get_enum<rivet::ddl::generated::x10b3c4cf>(HitMaterial_type_id, rivet::ddl::generated::x10b3c4cf_values, rivet::ddl::generated::x10b3c4cf::None); 
	}

	[[nodiscard]] auto
	MoverBodyContactEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MoverBodyContactEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MoverBodyContactEvent> {
		if (incoming_type_id == MoverBodyContactEvent::type_id) {
			return std::make_shared<MoverBodyContactEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
