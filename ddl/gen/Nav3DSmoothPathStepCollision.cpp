// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/Nav3DSmoothPathStepCollision.hpp>

namespace rivet::ddl::generated {
	Nav3DSmoothPathStepCollision::Nav3DSmoothPathStepCollision([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Handle = serialized->get_uint64(Handle_type_id); 
	}

	[[nodiscard]] auto
	Nav3DSmoothPathStepCollision::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	Nav3DSmoothPathStepCollision::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<Nav3DSmoothPathStepCollision> {
		if (incoming_type_id == Nav3DSmoothPathStepCollision::type_id) {
			return std::make_shared<Nav3DSmoothPathStepCollision>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
