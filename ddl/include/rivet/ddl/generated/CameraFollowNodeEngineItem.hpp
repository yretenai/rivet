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
	struct RIVET_DDL_SHARED CameraFollowNodeEngineItem : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "CameraFollowNodeEngineItem";
		constexpr static rivet::rivet_type_id type_id = 0x93666e4a;

		constexpr static std::string_view Node_type_name = "Node";
		constexpr static rivet::rivet_type_id Node_type_id = 0xb5ef28f5; 

		explicit CameraFollowNodeEngineItem() = default;
		explicit CameraFollowNodeEngineItem([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint64_t Node {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CameraFollowNodeEngineItem>;
	};
} // namespace rivet::ddl::generated

// clang-format on
