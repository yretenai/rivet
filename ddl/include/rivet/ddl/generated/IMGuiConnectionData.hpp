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
	struct RIVET_DDL_SHARED IMGuiConnectionData : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "IMGuiConnectionData";
		constexpr static rivet::rivet_type_id type_id = 0x1d9067ec;

		constexpr static std::string_view DrawColumn_type_name = "DrawColumn";
		constexpr static rivet::rivet_type_id DrawColumn_type_id = 0xc056147d;
		constexpr static std::string_view DrawRow_type_name = "DrawRow";
		constexpr static rivet::rivet_type_id DrawRow_type_id = 0xb413d78b;
		constexpr static std::string_view ConnectionId_type_name = "ConnectionId";
		constexpr static rivet::rivet_type_id ConnectionId_type_id = 0x1398be22;
		constexpr static std::string_view UniqueId_type_name = "UniqueId";
		constexpr static rivet::rivet_type_id UniqueId_type_id = 0x32ca55d0; 

		explicit IMGuiConnectionData() = default;
		explicit IMGuiConnectionData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint32_t DrawColumn {};
		uint32_t DrawRow {};
		uint64_t ConnectionId {};
		uint32_t UniqueId {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<IMGuiConnectionData>;
	};
} // namespace rivet::ddl::generated

// clang-format on
