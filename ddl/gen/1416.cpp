// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/OmniDelayAwarenessPrius.hpp>

namespace rivet::ddl::generated {
	OmniDelayAwarenessPrius::OmniDelayAwarenessPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): OmniAwarenessPrius(serialized) {
		ApplyConfirmStagger = serialized->get_bool(ApplyConfirmStagger_type_id);
		IgnoreTargetsInWater = serialized->get_bool(IgnoreTargetsInWater_type_id); 
	}

	auto
	OmniDelayAwarenessPrius::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	OmniDelayAwarenessPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	OmniDelayAwarenessPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<OmniDelayAwarenessPrius> {
		if (incoming_type_id == OmniDelayAwarenessPrius::type_id) {
			return std::make_shared<OmniDelayAwarenessPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
