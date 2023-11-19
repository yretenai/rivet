// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/KnockbackReactionModifier.hpp>

namespace rivet::ddl::generated {
	KnockbackReactionModifier::KnockbackReactionModifier([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Types = serialized->get_bitset<rivet::ddl::generated::x7f7c56aa>(Types_type_id, rivet::ddl::generated::x7f7c56aa_values);
		MinYTranslationScale = serialized->get_float(MinYTranslationScale_type_id);
		MaxYTranslationScale = serialized->get_float(MaxYTranslationScale_type_id);
		MinXZTranslationScale = serialized->get_float(MinXZTranslationScale_type_id);
		MaxXZTranslationScale = serialized->get_float(MaxXZTranslationScale_type_id);
		MinTimeScale = serialized->get_float(MinTimeScale_type_id);
		MaxTimeScale = serialized->get_float(MaxTimeScale_type_id);
		PopMotionToHitDirection = serialized->get_bool(PopMotionToHitDirection_type_id); 
	}

	[[nodiscard]] auto
	KnockbackReactionModifier::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	KnockbackReactionModifier::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<KnockbackReactionModifier> {
		if (incoming_type_id == KnockbackReactionModifier::type_id) {
			return std::make_shared<KnockbackReactionModifier>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated