// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/EventInitializationPlug.hpp> 

#include <rivet/ddl/generated/OutputPlugEventInitialization.hpp>

namespace rivet::ddl::generated {
	OutputPlugEventInitialization::OutputPlugEventInitialization([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): OutputPlugBaseDef(serialized) {
		Value = serialized->unwrap_into<rivet::ddl::generated::EventInitializationPlug>(Value_type_id); 
	}

	[[nodiscard]] auto
	OutputPlugEventInitialization::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	OutputPlugEventInitialization::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<OutputPlugEventInitialization> {
		if (incoming_type_id == OutputPlugEventInitialization::type_id) {
			return std::make_shared<OutputPlugEventInitialization>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
