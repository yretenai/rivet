// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/VaultViewerTakeScreenshot.hpp>

namespace rivet::ddl::generated {
	VaultViewerTakeScreenshot::VaultViewerTakeScreenshot([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		OutputPath = serialized->get_string(OutputPath_type_id, {}); 
	}

	[[nodiscard]] auto
	VaultViewerTakeScreenshot::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	VaultViewerTakeScreenshot::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VaultViewerTakeScreenshot> {
		if (incoming_type_id == VaultViewerTakeScreenshot::type_id) {
			return std::make_shared<VaultViewerTakeScreenshot>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
