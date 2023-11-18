// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MaterialSwap.hpp>

namespace rivet::ddl::generated {
	MaterialSwap::MaterialSwap([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Original = serialized->get_string(Original_type_id);
		Replacement = serialized->get_string(Replacement_type_id); 
	}

	[[nodiscard]] auto
	MaterialSwap::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MaterialSwap::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MaterialSwap> {
		if (incoming_type_id == MaterialSwap::type_id) {
			return std::make_shared<MaterialSwap>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
