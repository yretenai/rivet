// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ShotSwingshotPrius.hpp>

namespace rivet::ddl::generated {
	ShotSwingshotPrius::ShotSwingshotPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ShotBasePrius(serialized) {

	}

	[[nodiscard]] auto
	ShotSwingshotPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ShotSwingshotPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ShotSwingshotPrius> {
		if (incoming_type_id == ShotSwingshotPrius::type_id) {
			return std::make_shared<ShotSwingshotPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
