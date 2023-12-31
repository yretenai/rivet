// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MeleePropPrius.hpp>

namespace rivet::ddl::generated {
	MeleePropPrius::MeleePropPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): PropDamagePrius(serialized) {

	}

	[[nodiscard]] auto
	MeleePropPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MeleePropPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MeleePropPrius> {
		if (incoming_type_id == MeleePropPrius::type_id) {
			return std::make_shared<MeleePropPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
