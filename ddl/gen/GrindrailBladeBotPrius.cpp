// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/GrindrailBladeBotPrius.hpp>

namespace rivet::ddl::generated {
	GrindrailBladeBotPrius::GrindrailBladeBotPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		AnticipateRange = serialized->get_float(AnticipateRange_type_id, 10.000000);
		AttackRange = serialized->get_float(AttackRange_type_id, 3.000000);
		DamagePercent = serialized->get_float(DamagePercent_type_id, 0.200000); 
	}

	[[nodiscard]] auto
	GrindrailBladeBotPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	GrindrailBladeBotPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GrindrailBladeBotPrius> {
		if (incoming_type_id == GrindrailBladeBotPrius::type_id) {
			return std::make_shared<GrindrailBladeBotPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
