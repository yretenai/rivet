// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DifficultyModDef.hpp> 

#include <rivet/ddl/generated/BotVariantDifficultyEntry.hpp>

namespace rivet::ddl::generated {
	BotVariantDifficultyEntry::BotVariantDifficultyEntry([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Variant = serialized->get_enum<rivet::ddl::generated::xc3e5efea>(Variant_type_id, rivet::ddl::generated::xc3e5efea_values);
		DifficultyModDefs = serialized->unwrap_into_many<rivet::ddl::generated::DifficultyModDef>(DifficultyModDefs_type_id); 
	}

	[[nodiscard]] auto
	BotVariantDifficultyEntry::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BotVariantDifficultyEntry::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BotVariantDifficultyEntry> {
		if (incoming_type_id == BotVariantDifficultyEntry::type_id) {
			return std::make_shared<BotVariantDifficultyEntry>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
