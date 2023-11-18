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

#include <rivet/ddl/generated/EventBase.hpp> 

namespace rivet::ddl::generated {
	struct DDLVector3; 

	struct RIVET_DDL_SHARED ChunkedEvent : EventBase {
		constexpr static std::string_view type_name = "ChunkedEvent";
		constexpr static rivet::rivet_type_id type_id = 0x726663dd;

		constexpr static std::string_view ChunkingComponentName_type_name = "ChunkingComponentName";
		constexpr static rivet::rivet_type_id ChunkingComponentName_type_id = 0xe7230f11;
		constexpr static std::string_view ConfigurationName_type_name = "ConfigurationName";
		constexpr static rivet::rivet_type_id ConfigurationName_type_id = 0x19f22c5c;
		constexpr static std::string_view HitDirection_type_name = "HitDirection";
		constexpr static rivet::rivet_type_id HitDirection_type_id = 0x188c2ef8; 

		explicit ChunkedEvent() = default;
		explicit ChunkedEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view ChunkingComponentName {};
		std::string_view ConfigurationName {};
		std::shared_ptr<rivet::ddl::generated::DDLVector3> HitDirection {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ChunkedEvent>;
	};
} // namespace rivet::ddl::generated

// clang-format on
