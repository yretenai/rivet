// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/NefBlimpCurveFollowerLeanUpdaterPrius.hpp>

namespace rivet::ddl::generated {
	NefBlimpCurveFollowerLeanUpdaterPrius::NefBlimpCurveFollowerLeanUpdaterPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {

	}

	[[nodiscard]] auto
	NefBlimpCurveFollowerLeanUpdaterPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	NefBlimpCurveFollowerLeanUpdaterPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<NefBlimpCurveFollowerLeanUpdaterPrius> {
		if (incoming_type_id == NefBlimpCurveFollowerLeanUpdaterPrius::type_id) {
			return std::make_shared<NefBlimpCurveFollowerLeanUpdaterPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
