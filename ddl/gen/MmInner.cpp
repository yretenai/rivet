// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MmLeaf.hpp> 

#include <rivet/ddl/generated/MmInner.hpp>

namespace rivet::ddl::generated {
	MmInner::MmInner([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Scalar = serialized->get_string(Scalar_type_id);
		Array = serialized->get_strings(Array_type_id);
		Hash = serialized->unwrap_into_many<rivet::ddl::generated::MmLeaf>(Hash_type_id); 
	}

	[[nodiscard]] auto
	MmInner::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MmInner::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MmInner> {
		if (incoming_type_id == MmInner::type_id) {
			return std::make_shared<MmInner>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
