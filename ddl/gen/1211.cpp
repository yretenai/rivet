// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ProxAggroRange.hpp>

namespace rivet::ddl::generated {
	ProxAggroRange::ProxAggroRange([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Range = serialized->get_float(Range_type_id);
		AggroAtRange = serialized->get_float(AggroAtRange_type_id); 
	}

	auto
	ProxAggroRange::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	ProxAggroRange::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ProxAggroRange::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ProxAggroRange> {
		if (incoming_type_id == ProxAggroRange::type_id) {
			return std::make_shared<ProxAggroRange>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
