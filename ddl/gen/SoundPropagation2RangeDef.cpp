// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SoundPropagation2RangeDef.hpp>

namespace rivet::ddl::generated {
	SoundPropagation2RangeDef::SoundPropagation2RangeDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Min = serialized->get_float(Min_type_id, 0.000000);
		Max = serialized->get_float(Max_type_id, 0.000000); 
	}

	[[nodiscard]] auto
	SoundPropagation2RangeDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SoundPropagation2RangeDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SoundPropagation2RangeDef> {
		if (incoming_type_id == SoundPropagation2RangeDef::type_id) {
			return std::make_shared<SoundPropagation2RangeDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
