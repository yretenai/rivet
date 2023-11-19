// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/PerfSpecLookData.hpp> 

#include <rivet/ddl/generated/PerfSpecLooksPrius.hpp>

namespace rivet::ddl::generated {
	PerfSpecLooksPrius::PerfSpecLooksPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		LooksPerSpec = serialized->unwrap_into_many<rivet::ddl::generated::PerfSpecLookData>(LooksPerSpec_type_id); 
	}

	[[nodiscard]] auto
	PerfSpecLooksPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	PerfSpecLooksPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PerfSpecLooksPrius> {
		if (incoming_type_id == PerfSpecLooksPrius::type_id) {
			return std::make_shared<PerfSpecLooksPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated