// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ClankPuzzleWireRiderPrius.hpp>

namespace rivet::ddl::generated {
	ClankPuzzleWireRiderPrius::ClankPuzzleWireRiderPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {

	}

	[[nodiscard]] auto
	ClankPuzzleWireRiderPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ClankPuzzleWireRiderPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ClankPuzzleWireRiderPrius> {
		if (incoming_type_id == ClankPuzzleWireRiderPrius::type_id) {
			return std::make_shared<ClankPuzzleWireRiderPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
