// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DialogTriggerDisabledPrius.hpp>

namespace rivet::ddl::generated {
	DialogTriggerDisabledPrius::DialogTriggerDisabledPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Trigger = serialized->get_enum<rivet::ddl::generated::x6be956dd>(Trigger_type_id, rivet::ddl::generated::x6be956dd_values); 
	}

	[[nodiscard]] auto
	DialogTriggerDisabledPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DialogTriggerDisabledPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DialogTriggerDisabledPrius> {
		if (incoming_type_id == DialogTriggerDisabledPrius::type_id) {
			return std::make_shared<DialogTriggerDisabledPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
