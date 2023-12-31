// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/References.hpp>

namespace rivet::ddl::generated {
	References::References([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		AutoLoad = serialized->get_strings(AutoLoad_type_id);
		ManualLoad = serialized->get_strings(ManualLoad_type_id);
		AutoLoadWwise = serialized->get_strings(AutoLoadWwise_type_id);
		ManualLoadWwise = serialized->get_strings(ManualLoadWwise_type_id); 
	}

	[[nodiscard]] auto
	References::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	References::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<References> {
		if (incoming_type_id == References::type_id) {
			return std::make_shared<References>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
