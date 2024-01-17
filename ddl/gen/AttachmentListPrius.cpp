// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AttachmentListPrius.hpp>

namespace rivet::ddl::generated {
	AttachmentListPrius::AttachmentListPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		MaxAttachments = serialized->get_uint32(MaxAttachments_type_id, 4); 
	}

	[[nodiscard]] auto
	AttachmentListPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AttachmentListPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AttachmentListPrius> {
		if (incoming_type_id == AttachmentListPrius::type_id) {
			return std::make_shared<AttachmentListPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
