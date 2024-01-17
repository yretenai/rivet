// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/VendorPropManagerPrius.hpp> 

#include <rivet/ddl/generated/SimplePropManagerPrius.hpp>

namespace rivet::ddl::generated {
	SimplePropManagerPrius::SimplePropManagerPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		PropConfig = serialized->get_string(PropConfig_type_id, {});
		MatchPropDriverTime = serialized->get_bool(MatchPropDriverTime_type_id, true); 
	}

	[[nodiscard]] auto
	SimplePropManagerPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SimplePropManagerPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SimplePropManagerPrius> {
		if (incoming_type_id == SimplePropManagerPrius::type_id) {
			return std::make_shared<SimplePropManagerPrius>(serialized);
		}

		auto VendorPropManagerPrius_ptr = VendorPropManagerPrius::from_substruct(incoming_type_id, serialized);
		if (VendorPropManagerPrius_ptr != nullptr) {
			return VendorPropManagerPrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
