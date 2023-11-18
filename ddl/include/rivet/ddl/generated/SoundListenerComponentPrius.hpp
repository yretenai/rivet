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

#include <rivet/ddl/generated/bitsets/x9baa48b3.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED SoundListenerComponentPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "SoundListenerComponentPrius";
		constexpr static rivet::rivet_type_id type_id = 0x26feec65;

		constexpr static std::string_view Type_type_name = "Type";
		constexpr static rivet::rivet_type_id Type_type_id = 0xbc4e9799;
		constexpr static std::string_view LocatorName_type_name = "LocatorName";
		constexpr static rivet::rivet_type_id LocatorName_type_id = 0x5814524d; 

		explicit SoundListenerComponentPrius() = default;
		explicit SoundListenerComponentPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::x9baa48b3 Type {};
		std::string_view LocatorName {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SoundListenerComponentPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
