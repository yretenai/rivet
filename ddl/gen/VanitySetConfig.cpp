// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/VanityPerkBase.hpp> 

#include <rivet/ddl/generated/VanitySetConfig.hpp>

namespace rivet::ddl::generated {
	VanitySetConfig::VanitySetConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ConfigBase(serialized) {
		VanityBundles = serialized->get_strings(VanityBundles_type_id);
		DefaultColor = serialized->get_uint8(DefaultColor_type_id, 0u);
		IsDuplicate = serialized->get_bool(IsDuplicate_type_id, false);
		OriginalSet = serialized->get_string(OriginalSet_type_id, {});
		Perk = serialized->unwrap_into<rivet::ddl::generated::VanityPerkBase>(Perk_type_id); 
	}

	[[nodiscard]] auto
	VanitySetConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	VanitySetConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VanitySetConfig> {
		if (incoming_type_id == VanitySetConfig::type_id) {
			return std::make_shared<VanitySetConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
