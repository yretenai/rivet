// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ShockwaveGrenadeShotPrius.hpp>

namespace rivet::ddl::generated {
	ShockwaveGrenadeShotPrius::ShockwaveGrenadeShotPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): GrenadeShotPrius(serialized) {

	}

	[[nodiscard]] auto
	ShockwaveGrenadeShotPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ShockwaveGrenadeShotPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ShockwaveGrenadeShotPrius> {
		if (incoming_type_id == ShockwaveGrenadeShotPrius::type_id) {
			return std::make_shared<ShockwaveGrenadeShotPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
