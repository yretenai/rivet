// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/HealthDropTier.hpp>

namespace rivet::ddl::generated {
	HealthDropTier::HealthDropTier([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		HealthPrecentage = serialized->get_float(HealthPrecentage_type_id);
		DropPercentage = serialized->get_float(DropPercentage_type_id); 
	}

	[[nodiscard]] auto
	HealthDropTier::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HealthDropTier::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HealthDropTier> {
		if (incoming_type_id == HealthDropTier::type_id) {
			return std::make_shared<HealthDropTier>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
