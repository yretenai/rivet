// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/PixelizerShotPrius.hpp>

namespace rivet::ddl::generated {
	PixelizerShotPrius::PixelizerShotPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ShotgunShotPrius(serialized) {

	}

	[[nodiscard]] auto
	PixelizerShotPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	PixelizerShotPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PixelizerShotPrius> {
		if (incoming_type_id == PixelizerShotPrius::type_id) {
			return std::make_shared<PixelizerShotPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
