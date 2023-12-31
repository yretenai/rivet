// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/BotPartialAnimsManagerPrius.hpp>

namespace rivet::ddl::generated {
	BotPartialAnimsManagerPrius::BotPartialAnimsManagerPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		StartEnabled = serialized->get_bool(StartEnabled_type_id);
		PartialAnimsToActivate = serialized->get_strings(PartialAnimsToActivate_type_id); 
	}

	[[nodiscard]] auto
	BotPartialAnimsManagerPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BotPartialAnimsManagerPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BotPartialAnimsManagerPrius> {
		if (incoming_type_id == BotPartialAnimsManagerPrius::type_id) {
			return std::make_shared<BotPartialAnimsManagerPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
