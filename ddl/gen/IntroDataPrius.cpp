// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/CurveIntroDataPrius.hpp>
#include <rivet/ddl/generated/IntroActorDataPrius.hpp>
#include <rivet/ddl/generated/VolumeIntroDataPrius.hpp>
#include <rivet/ddl/generated/AnimCluePrius.hpp>
#include <rivet/ddl/generated/PortalIntroDataPrius.hpp>
#include <rivet/ddl/generated/DropPodPrius.hpp>
#include <rivet/ddl/generated/ValidUserList.hpp> 

#include <rivet/ddl/generated/IntroDataPrius.hpp>

namespace rivet::ddl::generated {
	IntroDataPrius::IntroDataPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ValidUsers = serialized->unwrap_into<rivet::ddl::generated::ValidUserList>(ValidUsers_type_id); 
	}

	[[nodiscard]] auto
	IntroDataPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	IntroDataPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<IntroDataPrius> {
		if (incoming_type_id == IntroDataPrius::type_id) {
			return std::make_shared<IntroDataPrius>(serialized);
		}

		auto DropPodPrius_ptr = DropPodPrius::from_substruct(incoming_type_id, serialized);
		if (DropPodPrius_ptr != nullptr) {
			return DropPodPrius_ptr;
		}

		auto PortalIntroDataPrius_ptr = PortalIntroDataPrius::from_substruct(incoming_type_id, serialized);
		if (PortalIntroDataPrius_ptr != nullptr) {
			return PortalIntroDataPrius_ptr;
		}

		auto VolumeIntroDataPrius_ptr = VolumeIntroDataPrius::from_substruct(incoming_type_id, serialized);
		if (VolumeIntroDataPrius_ptr != nullptr) {
			return VolumeIntroDataPrius_ptr;
		}

		auto IntroActorDataPrius_ptr = IntroActorDataPrius::from_substruct(incoming_type_id, serialized);
		if (IntroActorDataPrius_ptr != nullptr) {
			return IntroActorDataPrius_ptr;
		}

		auto AnimCluePrius_ptr = AnimCluePrius::from_substruct(incoming_type_id, serialized);
		if (AnimCluePrius_ptr != nullptr) {
			return AnimCluePrius_ptr;
		}

		auto CurveIntroDataPrius_ptr = CurveIntroDataPrius::from_substruct(incoming_type_id, serialized);
		if (CurveIntroDataPrius_ptr != nullptr) {
			return CurveIntroDataPrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
