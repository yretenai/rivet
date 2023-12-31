// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SortedNodeNames.hpp>

namespace rivet::ddl::generated {
	SortedNodeNames::SortedNodeNames([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		SortedByAlphabet = serialized->get_strings(SortedByAlphabet_type_id);
		SortedByBFT = serialized->get_strings(SortedByBFT_type_id);
		SortedByDFT = serialized->get_strings(SortedByDFT_type_id); 
	}

	[[nodiscard]] auto
	SortedNodeNames::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SortedNodeNames::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SortedNodeNames> {
		if (incoming_type_id == SortedNodeNames::type_id) {
			return std::make_shared<SortedNodeNames>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
