// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ClankPuzzleDeathStopperPrius.hpp>

namespace rivet::ddl::generated {
	ClankPuzzleDeathStopperPrius::ClankPuzzleDeathStopperPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {

	}

	[[nodiscard]] auto
	ClankPuzzleDeathStopperPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ClankPuzzleDeathStopperPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ClankPuzzleDeathStopperPrius> {
		if (incoming_type_id == ClankPuzzleDeathStopperPrius::type_id) {
			return std::make_shared<ClankPuzzleDeathStopperPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
