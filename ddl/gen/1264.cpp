// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/PhotomodeCameraFreeMovePrius.hpp>
#include <rivet/ddl/generated/PhotomodeCameraFirstPersonPrius.hpp>
#include <rivet/ddl/generated/PhotomodeCameraOrbitPrius.hpp>
#include <rivet/ddl/generated/PhotomodeCameraSelfiePrius.hpp> 

#include <rivet/ddl/generated/PhotomodeCameraBasePrius.hpp>

namespace rivet::ddl::generated {
	PhotomodeCameraBasePrius::PhotomodeCameraBasePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): CameraPrius(serialized) {

	}

	auto
	PhotomodeCameraBasePrius::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	PhotomodeCameraBasePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	PhotomodeCameraBasePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PhotomodeCameraBasePrius> {
		if (incoming_type_id == PhotomodeCameraBasePrius::type_id) {
			return std::make_shared<PhotomodeCameraBasePrius>(serialized);
		}

		auto PhotomodeCameraFirstPersonPrius_ptr = PhotomodeCameraFirstPersonPrius::from_substruct(incoming_type_id, serialized);
		if (PhotomodeCameraFirstPersonPrius_ptr != nullptr) {
			return PhotomodeCameraFirstPersonPrius_ptr;
		}

		auto PhotomodeCameraFreeMovePrius_ptr = PhotomodeCameraFreeMovePrius::from_substruct(incoming_type_id, serialized);
		if (PhotomodeCameraFreeMovePrius_ptr != nullptr) {
			return PhotomodeCameraFreeMovePrius_ptr;
		}

		auto PhotomodeCameraOrbitPrius_ptr = PhotomodeCameraOrbitPrius::from_substruct(incoming_type_id, serialized);
		if (PhotomodeCameraOrbitPrius_ptr != nullptr) {
			return PhotomodeCameraOrbitPrius_ptr;
		}

		auto PhotomodeCameraSelfiePrius_ptr = PhotomodeCameraSelfiePrius::from_substruct(incoming_type_id, serialized);
		if (PhotomodeCameraSelfiePrius_ptr != nullptr) {
			return PhotomodeCameraSelfiePrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
