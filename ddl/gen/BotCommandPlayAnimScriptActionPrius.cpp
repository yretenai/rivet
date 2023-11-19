// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/BotCommandPlayAnimScriptActionPrius.hpp>

namespace rivet::ddl::generated {
	BotCommandPlayAnimScriptActionPrius::BotCommandPlayAnimScriptActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ActionType = serialized->get_enum<rivet::ddl::generated::x10228b34>(ActionType_type_id, rivet::ddl::generated::x10228b34_values);
		BotCommandPlayAnimFlags = serialized->get_bitset<rivet::ddl::generated::BotCommandPlayAnimFlags>(BotCommandPlayAnimFlags_type_id, rivet::ddl::generated::BotCommandPlayAnimFlags_values);
		Rate = serialized->get_float(Rate_type_id); 
	}

	[[nodiscard]] auto
	BotCommandPlayAnimScriptActionPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BotCommandPlayAnimScriptActionPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BotCommandPlayAnimScriptActionPrius> {
		if (incoming_type_id == BotCommandPlayAnimScriptActionPrius::type_id) {
			return std::make_shared<BotCommandPlayAnimScriptActionPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated