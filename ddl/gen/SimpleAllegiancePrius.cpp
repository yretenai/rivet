// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SimpleAllegiancePrius.hpp>

namespace rivet::ddl::generated {
	SimpleAllegiancePrius::SimpleAllegiancePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Allegiance = serialized->get_enum<rivet::ddl::generated::x6bdf4ba1>(Allegiance_type_id, rivet::ddl::generated::x6bdf4ba1_values); 
	}

	[[nodiscard]] auto
	SimpleAllegiancePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SimpleAllegiancePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SimpleAllegiancePrius> {
		if (incoming_type_id == SimpleAllegiancePrius::type_id) {
			return std::make_shared<SimpleAllegiancePrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
