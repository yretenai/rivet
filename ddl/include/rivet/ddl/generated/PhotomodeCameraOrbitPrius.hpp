// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

// clang-format off

#include <cstdint>
#include <memory>
#include <string_view>
#include <vector>

#include <rivet/hash/type_id.hpp>
#include <rivet/rivet_array.hpp>
#include <rivet/rivet_keywords.hpp>
#include <rivet/structures/rivet_serialization.hpp>

#include <rivet/ddl/generated/PhotomodeCameraBasePrius.hpp> 

namespace rivet::ddl::generated {
	struct OrbitCamData; 

	struct RIVET_DDL_SHARED PhotomodeCameraOrbitPrius : PhotomodeCameraBasePrius {
		constexpr const static std::string_view type_name = "PhotomodeCameraOrbitPrius";
		constexpr const static rivet::rivet_type_id type_id = 0x8d71e3a5;

		constexpr const static std::string_view CamData_type_name = "CamData";
		constexpr const static rivet::rivet_type_id CamData_type_id = 0xa857067c; 

		explicit PhotomodeCameraOrbitPrius() = default;
		explicit PhotomodeCameraOrbitPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::OrbitCamData> CamData {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PhotomodeCameraOrbitPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
