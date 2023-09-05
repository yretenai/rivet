// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ShotThumperPrius.hpp>

namespace rivet::ddl::generated {
	ShotThumperPrius::ShotThumperPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): LobbedShotPrius(serialized) {
		DamageLOSType = serialized->get_enum<rivet::ddl::generated::DamageLOSTypes>(DamageLOSType_type_id, rivet::ddl::generated::DamageLOSTypes_values); 
	}

	auto
	ShotThumperPrius::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	ShotThumperPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ShotThumperPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ShotThumperPrius> {
		if (incoming_type_id == ShotThumperPrius::type_id) {
			return std::make_shared<ShotThumperPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
