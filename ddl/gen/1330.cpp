// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/LookGroupVoiceOverride.hpp> 

#include <rivet/ddl/generated/LookGroupVoiceOverrideData.hpp>

namespace rivet::ddl::generated {
	LookGroupVoiceOverrideData::LookGroupVoiceOverrideData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		LookGroupVoiceOverrides = serialized->unwrap_into_many<rivet::ddl::generated::LookGroupVoiceOverride>(LookGroupVoiceOverrides_type_id); 
	}

	auto
	LookGroupVoiceOverrideData::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	LookGroupVoiceOverrideData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	LookGroupVoiceOverrideData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<LookGroupVoiceOverrideData> {
		if (incoming_type_id == LookGroupVoiceOverrideData::type_id) {
			return std::make_shared<LookGroupVoiceOverrideData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
