// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/GenericChunks.hpp>

namespace rivet::ddl::generated {
	GenericChunks::GenericChunks([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Chunks = serialized->get_strings(Chunks_type_id);
		Min = serialized->get_uint32(Min_type_id, 0);
		Max = serialized->get_uint32(Max_type_id, 0); 
	}

	[[nodiscard]] auto
	GenericChunks::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	GenericChunks::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GenericChunks> {
		if (incoming_type_id == GenericChunks::type_id) {
			return std::make_shared<GenericChunks>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
