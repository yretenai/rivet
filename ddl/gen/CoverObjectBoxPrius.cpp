// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/CoverObjectBoxPrius.hpp>

namespace rivet::ddl::generated {
	CoverObjectBoxPrius::CoverObjectBoxPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		GenFirepoints = serialized->get_bool(GenFirepoints_type_id);
		GenerateAIPerches = serialized->get_bool(GenerateAIPerches_type_id); 
	}

	[[nodiscard]] auto
	CoverObjectBoxPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CoverObjectBoxPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CoverObjectBoxPrius> {
		if (incoming_type_id == CoverObjectBoxPrius::type_id) {
			return std::make_shared<CoverObjectBoxPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
