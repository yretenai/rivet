// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/CarryableDockPrius.hpp>

namespace rivet::ddl::generated {
	CarryableDockPrius::CarryableDockPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): SlottedInteractObjectPrius(serialized) {

	}

	[[nodiscard]] auto
	CarryableDockPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CarryableDockPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CarryableDockPrius> {
		if (incoming_type_id == CarryableDockPrius::type_id) {
			return std::make_shared<CarryableDockPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
