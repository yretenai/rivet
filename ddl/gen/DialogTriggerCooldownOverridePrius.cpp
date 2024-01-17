// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DialogTriggerCooldownOverridePrius.hpp>

namespace rivet::ddl::generated {
	DialogTriggerCooldownOverridePrius::DialogTriggerCooldownOverridePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Trigger = serialized->get_enum<rivet::ddl::generated::x6be956dd>(Trigger_type_id, rivet::ddl::generated::x6be956dd_values, rivet::ddl::generated::x6be956dd::None);
		Cooldown = serialized->get_float(Cooldown_type_id, 0.000000); 
	}

	[[nodiscard]] auto
	DialogTriggerCooldownOverridePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DialogTriggerCooldownOverridePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DialogTriggerCooldownOverridePrius> {
		if (incoming_type_id == DialogTriggerCooldownOverridePrius::type_id) {
			return std::make_shared<DialogTriggerCooldownOverridePrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
