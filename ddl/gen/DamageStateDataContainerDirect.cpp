// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DamageStateData.hpp> 

#include <rivet/ddl/generated/DamageStateDataContainerDirect.hpp>

namespace rivet::ddl::generated {
	DamageStateDataContainerDirect::DamageStateDataContainerDirect([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): DamageStateDataContainerBase(serialized) {
		Data = serialized->unwrap_into<rivet::ddl::generated::DamageStateData>(Data_type_id); 
	}

	[[nodiscard]] auto
	DamageStateDataContainerDirect::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DamageStateDataContainerDirect::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DamageStateDataContainerDirect> {
		if (incoming_type_id == DamageStateDataContainerDirect::type_id) {
			return std::make_shared<DamageStateDataContainerDirect>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated