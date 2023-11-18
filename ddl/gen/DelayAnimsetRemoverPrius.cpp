// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DelayAnimsetRemoverPrius.hpp>

namespace rivet::ddl::generated {
	DelayAnimsetRemoverPrius::DelayAnimsetRemoverPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		AnimSet = serialized->get_uint64(AnimSet_type_id);
		AnimSetUniqueId = serialized->get_uint32(AnimSetUniqueId_type_id);
		DriverNameHash = serialized->get_uint32(DriverNameHash_type_id);
		DelayTime = serialized->get_float(DelayTime_type_id); 
	}

	[[nodiscard]] auto
	DelayAnimsetRemoverPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DelayAnimsetRemoverPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DelayAnimsetRemoverPrius> {
		if (incoming_type_id == DelayAnimsetRemoverPrius::type_id) {
			return std::make_shared<DelayAnimsetRemoverPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
