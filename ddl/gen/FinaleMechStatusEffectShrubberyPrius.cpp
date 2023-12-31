// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/FinaleMechStatusEffectShrubberyPrius.hpp>

namespace rivet::ddl::generated {
	FinaleMechStatusEffectShrubberyPrius::FinaleMechStatusEffectShrubberyPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): StatusEffectShrubberyPrius(serialized) {

	}

	[[nodiscard]] auto
	FinaleMechStatusEffectShrubberyPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	FinaleMechStatusEffectShrubberyPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<FinaleMechStatusEffectShrubberyPrius> {
		if (incoming_type_id == FinaleMechStatusEffectShrubberyPrius::type_id) {
			return std::make_shared<FinaleMechStatusEffectShrubberyPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
