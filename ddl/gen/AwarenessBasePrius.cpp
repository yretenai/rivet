// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ManualAwarenessPrius.hpp>
#include <rivet/ddl/generated/SkirmishAwarenessPrius.hpp>
#include <rivet/ddl/generated/OmniAwarenessPrius.hpp>
#include <rivet/ddl/generated/HeroAwarenessPrius.hpp>
#include <rivet/ddl/generated/NullAwarenessPrius.hpp>
#include <rivet/ddl/generated/BotAreaAwarenessPrius.hpp> 

#include <rivet/ddl/generated/AwarenessBasePrius.hpp>

namespace rivet::ddl::generated {
	AwarenessBasePrius::AwarenessBasePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {

	}

	[[nodiscard]] auto
	AwarenessBasePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AwarenessBasePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AwarenessBasePrius> {
		if (incoming_type_id == AwarenessBasePrius::type_id) {
			return std::make_shared<AwarenessBasePrius>(serialized);
		}

		auto BotAreaAwarenessPrius_ptr = BotAreaAwarenessPrius::from_substruct(incoming_type_id, serialized);
		if (BotAreaAwarenessPrius_ptr != nullptr) {
			return BotAreaAwarenessPrius_ptr;
		}

		auto NullAwarenessPrius_ptr = NullAwarenessPrius::from_substruct(incoming_type_id, serialized);
		if (NullAwarenessPrius_ptr != nullptr) {
			return NullAwarenessPrius_ptr;
		}

		auto OmniAwarenessPrius_ptr = OmniAwarenessPrius::from_substruct(incoming_type_id, serialized);
		if (OmniAwarenessPrius_ptr != nullptr) {
			return OmniAwarenessPrius_ptr;
		}

		auto SkirmishAwarenessPrius_ptr = SkirmishAwarenessPrius::from_substruct(incoming_type_id, serialized);
		if (SkirmishAwarenessPrius_ptr != nullptr) {
			return SkirmishAwarenessPrius_ptr;
		}

		auto ManualAwarenessPrius_ptr = ManualAwarenessPrius::from_substruct(incoming_type_id, serialized);
		if (ManualAwarenessPrius_ptr != nullptr) {
			return ManualAwarenessPrius_ptr;
		}

		auto HeroAwarenessPrius_ptr = HeroAwarenessPrius::from_substruct(incoming_type_id, serialized);
		if (HeroAwarenessPrius_ptr != nullptr) {
			return HeroAwarenessPrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
