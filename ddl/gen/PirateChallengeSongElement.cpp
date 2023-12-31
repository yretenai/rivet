// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/PirateChallengeSongElement.hpp>

namespace rivet::ddl::generated {
	PirateChallengeSongElement::PirateChallengeSongElement([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		PirateType = serialized->get_enum<rivet::ddl::generated::PirateTypes>(PirateType_type_id, rivet::ddl::generated::PirateTypes_values);
		DemoLine = serialized->get_string(DemoLine_type_id);
		HeroLine = serialized->get_string(HeroLine_type_id);
		BackpackLine = serialized->get_string(BackpackLine_type_id); 
	}

	[[nodiscard]] auto
	PirateChallengeSongElement::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	PirateChallengeSongElement::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PirateChallengeSongElement> {
		if (incoming_type_id == PirateChallengeSongElement::type_id) {
			return std::make_shared<PirateChallengeSongElement>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
