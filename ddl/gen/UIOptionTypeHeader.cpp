// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/UIOptionTypeHeader.hpp>

namespace rivet::ddl::generated {
	UIOptionTypeHeader::UIOptionTypeHeader([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): UIOptionTypeBase(serialized) {

	}

	[[nodiscard]] auto
	UIOptionTypeHeader::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	UIOptionTypeHeader::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UIOptionTypeHeader> {
		if (incoming_type_id == UIOptionTypeHeader::type_id) {
			return std::make_shared<UIOptionTypeHeader>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
