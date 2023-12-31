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
	struct RIVET_DDL_SHARED SimpleBobAndSpinPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "SimpleBobAndSpinPrius";
		constexpr static rivet::rivet_type_id type_id = 0x25af7da9;

		constexpr static std::string_view Frequency_type_name = "Frequency";
		constexpr static rivet::rivet_type_id Frequency_type_id = 0xa482271f;
		constexpr static std::string_view Amplitude_type_name = "Amplitude";
		constexpr static rivet::rivet_type_id Amplitude_type_id = 0xe950071d;
		constexpr static std::string_view Spin_type_name = "Spin";
		constexpr static rivet::rivet_type_id Spin_type_id = 0x229ae43f;
		constexpr static std::string_view RandomizeBob_type_name = "RandomizeBob";
		constexpr static rivet::rivet_type_id RandomizeBob_type_id = 0x6edd5c5a; 

		explicit SimpleBobAndSpinPrius() = default;
		explicit SimpleBobAndSpinPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float Frequency {};
		float Amplitude {};
		float Spin {};
		bool RandomizeBob {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SimpleBobAndSpinPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
