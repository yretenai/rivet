// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/GadgetSwingshotPrius.hpp> 

#include <rivet/ddl/generated/SwingshotItemConfig.hpp>

namespace rivet::ddl::generated {
	SwingshotItemConfig::SwingshotItemConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): GadgetItemConfig(serialized) {
		SwingshotPrius = serialized->unwrap_into<rivet::ddl::generated::GadgetSwingshotPrius>(SwingshotPrius_type_id); 
	}

	[[nodiscard]] auto
	SwingshotItemConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SwingshotItemConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SwingshotItemConfig> {
		if (incoming_type_id == SwingshotItemConfig::type_id) {
			return std::make_shared<SwingshotItemConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
