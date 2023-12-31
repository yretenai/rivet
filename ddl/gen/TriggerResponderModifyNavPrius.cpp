// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TriggerResponderNavModGrp.hpp> 

#include <rivet/ddl/generated/TriggerResponderModifyNavPrius.hpp>

namespace rivet::ddl::generated {
	TriggerResponderModifyNavPrius::TriggerResponderModifyNavPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): TriggerResponderBasePrius(serialized) {
		PolyFlags = serialized->get_bitset<rivet::ddl::generated::xc204b456>(PolyFlags_type_id, rivet::ddl::generated::xc204b456_values);
		Triggered = serialized->unwrap_into_many<rivet::ddl::generated::TriggerResponderNavModGrp>(Triggered_type_id);
		Untriggered = serialized->unwrap_into_many<rivet::ddl::generated::TriggerResponderNavModGrp>(Untriggered_type_id); 
	}

	[[nodiscard]] auto
	TriggerResponderModifyNavPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TriggerResponderModifyNavPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TriggerResponderModifyNavPrius> {
		if (incoming_type_id == TriggerResponderModifyNavPrius::type_id) {
			return std::make_shared<TriggerResponderModifyNavPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
