// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/FossilizeHoleTrackerPrius.hpp> 

#include <rivet/ddl/generated/ShotFossilizerPrius.hpp>

namespace rivet::ddl::generated {
	ShotFossilizerPrius::ShotFossilizerPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): BasicBulletPrius(serialized) {
		HoleTrackerPrius = serialized->unwrap_into<rivet::ddl::generated::FossilizeHoleTrackerPrius>(HoleTrackerPrius_type_id); 
	}

	auto
	ShotFossilizerPrius::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	ShotFossilizerPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ShotFossilizerPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ShotFossilizerPrius> {
		if (incoming_type_id == ShotFossilizerPrius::type_id) {
			return std::make_shared<ShotFossilizerPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
