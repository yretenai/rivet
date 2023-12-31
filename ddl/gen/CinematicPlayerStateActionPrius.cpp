// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/CinematicPlayerStateActionPrius.hpp>

namespace rivet::ddl::generated {
	CinematicPlayerStateActionPrius::CinematicPlayerStateActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ActionType = serialized->get_enum<rivet::ddl::generated::x10228b34>(ActionType_type_id, rivet::ddl::generated::x10228b34_values);
		Flags = serialized->get_bitset<rivet::ddl::generated::xc1e2b7b6>(Flags_type_id, rivet::ddl::generated::xc1e2b7b6_values);
		CurrencyCollectDist = serialized->get_float(CurrencyCollectDist_type_id);
		DeactivateOnDestroy = serialized->get_bool(DeactivateOnDestroy_type_id); 
	}

	[[nodiscard]] auto
	CinematicPlayerStateActionPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CinematicPlayerStateActionPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CinematicPlayerStateActionPrius> {
		if (incoming_type_id == CinematicPlayerStateActionPrius::type_id) {
			return std::make_shared<CinematicPlayerStateActionPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
