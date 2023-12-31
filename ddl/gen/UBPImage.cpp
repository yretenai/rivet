// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/UBPImage.hpp>

namespace rivet::ddl::generated {
	UBPImage::UBPImage([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		url = serialized->get_string(url_type_id);
		type = serialized->get_string(type_type_id); 
	}

	[[nodiscard]] auto
	UBPImage::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	UBPImage::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UBPImage> {
		if (incoming_type_id == UBPImage::type_id) {
			return std::make_shared<UBPImage>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
