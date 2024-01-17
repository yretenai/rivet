// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/OnPickupActionPrius.hpp>

namespace rivet::ddl::generated {
	OnPickupActionPrius::OnPickupActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ActionType = serialized->get_enum<rivet::ddl::generated::x10228b34>(ActionType_type_id, rivet::ddl::generated::x10228b34_values, rivet::ddl::generated::x10228b34::Events);
		ItemConfig = serialized->get_string(ItemConfig_type_id, {});
		InitListening = serialized->get_bool(InitListening_type_id, true); 
	}

	[[nodiscard]] auto
	OnPickupActionPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	OnPickupActionPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<OnPickupActionPrius> {
		if (incoming_type_id == OnPickupActionPrius::type_id) {
			return std::make_shared<OnPickupActionPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
