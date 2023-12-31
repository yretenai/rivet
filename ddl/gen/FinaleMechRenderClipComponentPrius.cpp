// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/FinaleMechRenderClipComponentPrius.hpp>

namespace rivet::ddl::generated {
	FinaleMechRenderClipComponentPrius::FinaleMechRenderClipComponentPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): RenderClipComponentPrius(serialized) {

	}

	[[nodiscard]] auto
	FinaleMechRenderClipComponentPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	FinaleMechRenderClipComponentPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<FinaleMechRenderClipComponentPrius> {
		if (incoming_type_id == FinaleMechRenderClipComponentPrius::type_id) {
			return std::make_shared<FinaleMechRenderClipComponentPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
