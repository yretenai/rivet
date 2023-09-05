// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/StatusEmitterAuraPrius.hpp>

namespace rivet::ddl::generated {
	StatusEmitterAuraPrius::StatusEmitterAuraPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): StatusEmitterBasePrius(serialized) {
		Range = serialized->get_float(Range_type_id);
		ValidTargetTypes = serialized->get_bitset<rivet::ddl::generated::TargetType>(ValidTargetTypes_type_id, rivet::ddl::generated::TargetType_values); 
	}

	auto
	StatusEmitterAuraPrius::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	StatusEmitterAuraPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	StatusEmitterAuraPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<StatusEmitterAuraPrius> {
		if (incoming_type_id == StatusEmitterAuraPrius::type_id) {
			return std::make_shared<StatusEmitterAuraPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
