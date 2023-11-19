// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TargetCheckBasePrius.hpp> 

#include <rivet/ddl/generated/TargetHunterCustomCheck.hpp>

namespace rivet::ddl::generated {
	TargetHunterCustomCheck::TargetHunterCustomCheck([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Check = serialized->unwrap_into<rivet::ddl::generated::TargetCheckBasePrius>(Check_type_id); 
	}

	[[nodiscard]] auto
	TargetHunterCustomCheck::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TargetHunterCustomCheck::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TargetHunterCustomCheck> {
		if (incoming_type_id == TargetHunterCustomCheck::type_id) {
			return std::make_shared<TargetHunterCustomCheck>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated