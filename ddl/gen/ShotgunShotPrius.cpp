// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/PixelizerShotPrius.hpp> 

#include <rivet/ddl/generated/ShotgunShotPrius.hpp>

namespace rivet::ddl::generated {
	ShotgunShotPrius::ShotgunShotPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): BasicBulletPrius(serialized) {

	}

	[[nodiscard]] auto
	ShotgunShotPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ShotgunShotPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ShotgunShotPrius> {
		if (incoming_type_id == ShotgunShotPrius::type_id) {
			return std::make_shared<ShotgunShotPrius>(serialized);
		}

		auto PixelizerShotPrius_ptr = PixelizerShotPrius::from_substruct(incoming_type_id, serialized);
		if (PixelizerShotPrius_ptr != nullptr) {
			return PixelizerShotPrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
