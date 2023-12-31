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

#include <rivet/ddl/generated/InputPlugBaseDef.hpp> 

namespace rivet::ddl::generated {
	struct SignalPlug; 

	struct RIVET_DDL_SHARED InputPlugSignal : InputPlugBaseDef {
		constexpr static std::string_view type_name = "InputPlugSignal";
		constexpr static rivet::rivet_type_id type_id = 0x8454d859;

		constexpr static std::string_view Value_type_name = "Value";
		constexpr static rivet::rivet_type_id Value_type_id = 0x42494f5; 

		explicit InputPlugSignal() = default;
		explicit InputPlugSignal([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::SignalPlug> Value {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<InputPlugSignal>;
	};
} // namespace rivet::ddl::generated

// clang-format on
