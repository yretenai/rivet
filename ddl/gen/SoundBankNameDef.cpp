// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SoundGroupNameDef.hpp> 

#include <rivet/ddl/generated/SoundBankNameDef.hpp>

namespace rivet::ddl::generated {
	SoundBankNameDef::SoundBankNameDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		BankName = serialized->get_string(BankName_type_id);
		EventNames = serialized->get_strings(EventNames_type_id);
		TriggerNames = serialized->get_strings(TriggerNames_type_id);
		StateGroupNames = serialized->unwrap_into_many<rivet::ddl::generated::SoundGroupNameDef>(StateGroupNames_type_id);
		SwitchGroupNames = serialized->unwrap_into_many<rivet::ddl::generated::SoundGroupNameDef>(SwitchGroupNames_type_id);
		GameParameterNames = serialized->get_strings(GameParameterNames_type_id);
		EnvironmentNames = serialized->get_strings(EnvironmentNames_type_id); 
	}

	[[nodiscard]] auto
	SoundBankNameDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SoundBankNameDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SoundBankNameDef> {
		if (incoming_type_id == SoundBankNameDef::type_id) {
			return std::make_shared<SoundBankNameDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
