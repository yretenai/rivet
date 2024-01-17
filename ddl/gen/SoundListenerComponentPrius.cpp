// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SoundListenerComponentPrius.hpp>

namespace rivet::ddl::generated {
	SoundListenerComponentPrius::SoundListenerComponentPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Type = serialized->get_bitset<rivet::ddl::generated::x9baa48b3>(Type_type_id, rivet::ddl::generated::x9baa48b3_values, 3);
		LocatorName = serialized->get_string(LocatorName_type_id, {}); 
	}

	[[nodiscard]] auto
	SoundListenerComponentPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SoundListenerComponentPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SoundListenerComponentPrius> {
		if (incoming_type_id == SoundListenerComponentPrius::type_id) {
			return std::make_shared<SoundListenerComponentPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
