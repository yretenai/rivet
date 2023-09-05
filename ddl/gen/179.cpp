// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DamageModAddOutgoingPrius.hpp>

namespace rivet::ddl::generated {
	DamageModAddOutgoingPrius::DamageModAddOutgoingPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): DamageModifierOutgoingPrius(serialized) {
		Add = serialized->get_float(Add_type_id); 
	}

	auto
	DamageModAddOutgoingPrius::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	DamageModAddOutgoingPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DamageModAddOutgoingPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DamageModAddOutgoingPrius> {
		if (incoming_type_id == DamageModAddOutgoingPrius::type_id) {
			return std::make_shared<DamageModAddOutgoingPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
