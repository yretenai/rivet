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
	struct RIVET_DDL_SHARED AnimSkeletonInfo : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "AnimSkeletonInfo";
		constexpr static rivet::rivet_type_id type_id = 0x5e797069;

		constexpr static std::string_view MayaNameSpace_type_name = "MayaNameSpace";
		constexpr static rivet::rivet_type_id MayaNameSpace_type_id = 0xe7b7ef37;
		constexpr static std::string_view BodySkeleton_type_name = "BodySkeleton";
		constexpr static rivet::rivet_type_id BodySkeleton_type_id = 0x7a9eab17;
		constexpr static std::string_view HeadSkeleton_type_name = "HeadSkeleton";
		constexpr static rivet::rivet_type_id HeadSkeleton_type_id = 0xc9a07590; 

		explicit AnimSkeletonInfo() = default;
		explicit AnimSkeletonInfo([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view MayaNameSpace {};
		std::string_view BodySkeleton {};
		std::string_view HeadSkeleton {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AnimSkeletonInfo>;
	};
} // namespace rivet::ddl::generated

// clang-format on
