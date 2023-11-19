// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/VisualEffectParentInfluencePrius.hpp>

namespace rivet::ddl::generated {
	VisualEffectParentInfluencePrius::VisualEffectParentInfluencePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ParentActor = serialized->get_uint64(ParentActor_type_id);
		ParentInfluenceBirth = serialized->get_float(ParentInfluenceBirth_type_id);
		ParentInfluenceDeath = serialized->get_float(ParentInfluenceDeath_type_id); 
	}

	[[nodiscard]] auto
	VisualEffectParentInfluencePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	VisualEffectParentInfluencePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VisualEffectParentInfluencePrius> {
		if (incoming_type_id == VisualEffectParentInfluencePrius::type_id) {
			return std::make_shared<VisualEffectParentInfluencePrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated