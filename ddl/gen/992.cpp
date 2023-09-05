// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/BoxBreakerItemConfig.hpp>

namespace rivet::ddl::generated {
	BoxBreakerItemConfig::BoxBreakerItemConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): GadgetItemConfig(serialized) {
		BoxBreakRange = serialized->get_float(BoxBreakRange_type_id);
		BoltPickupRange = serialized->get_float(BoltPickupRange_type_id); 
	}

	auto
	BoxBreakerItemConfig::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	BoxBreakerItemConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BoxBreakerItemConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BoxBreakerItemConfig> {
		if (incoming_type_id == BoxBreakerItemConfig::type_id) {
			return std::make_shared<BoxBreakerItemConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
