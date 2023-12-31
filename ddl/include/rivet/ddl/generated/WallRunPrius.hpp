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

#include <rivet/ddl/generated/enums/x46ba7b62.hpp>
#include <rivet/ddl/generated/enums/x3e452084.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED WallRunPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "WallRunPrius";
		constexpr static rivet::rivet_type_id type_id = 0xb695d679;

		constexpr static std::string_view CenteringMode_type_name = "CenteringMode";
		constexpr static rivet::rivet_type_id CenteringMode_type_id = 0x273a388d;
		constexpr static std::string_view InitialDirection_type_name = "InitialDirection";
		constexpr static rivet::rivet_type_id InitialDirection_type_id = 0xbcab400;
		constexpr static std::string_view VerticalExtent_type_name = "VerticalExtent";
		constexpr static rivet::rivet_type_id VerticalExtent_type_id = 0x8c33ce75; 

		explicit WallRunPrius() = default;
		explicit WallRunPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::x3e452084 CenteringMode {};
		rivet::ddl::generated::x46ba7b62 InitialDirection {};
		float VerticalExtent {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WallRunPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
