// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/PerfSpecModelData.hpp> 

#include <rivet/ddl/generated/PerfSpecModelSwapPrius.hpp>

namespace rivet::ddl::generated {
	PerfSpecModelSwapPrius::PerfSpecModelSwapPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ModelsPerSpec = serialized->unwrap_into_many<rivet::ddl::generated::PerfSpecModelData>(ModelsPerSpec_type_id); 
	}

	[[nodiscard]] auto
	PerfSpecModelSwapPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	PerfSpecModelSwapPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PerfSpecModelSwapPrius> {
		if (incoming_type_id == PerfSpecModelSwapPrius::type_id) {
			return std::make_shared<PerfSpecModelSwapPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
