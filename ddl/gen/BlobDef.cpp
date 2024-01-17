// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/BlobDef.hpp>

namespace rivet::ddl::generated {
	BlobDef::BlobDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		TypeName = serialized->get_string(TypeName_type_id, {});
		Blob = serialized->get_field(Blob_type_id); 
	}

	[[nodiscard]] auto
	BlobDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BlobDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BlobDef> {
		if (incoming_type_id == BlobDef::type_id) {
			return std::make_shared<BlobDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
