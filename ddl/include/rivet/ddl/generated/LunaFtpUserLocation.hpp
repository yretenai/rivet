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

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED LunaFtpUserLocation : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "LunaFtpUserLocation";
		constexpr static rivet::rivet_type_id type_id = 0x7351c6a;

		constexpr static std::string_view LocationName_type_name = "LocationName";
		constexpr static rivet::rivet_type_id LocationName_type_id = 0x11267bd7;
		constexpr static std::string_view GameBuildsDir_type_name = "GameBuildsDir";
		constexpr static rivet::rivet_type_id GameBuildsDir_type_id = 0x41a70502; 

		explicit LunaFtpUserLocation() = default;
		explicit LunaFtpUserLocation([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view LocationName {};
		std::string_view GameBuildsDir {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<LunaFtpUserLocation>;
	};
} // namespace rivet::ddl::generated

// clang-format on
