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

#include <rivet/ddl/generated/enums/x72fd960.hpp>
#include <rivet/ddl/generated/enums/xbb647502.hpp>
#include <rivet/ddl/generated/SlottedInteractObjectPrius.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED InteractCannonPrius : SlottedInteractObjectPrius {
		constexpr static std::string_view type_name = "InteractCannonPrius";
		constexpr static rivet::rivet_type_id type_id = 0x33ad0b2b;

		constexpr static std::string_view AimType_type_name = "AimType";
		constexpr static rivet::rivet_type_id AimType_type_id = 0xf2b63172;
		constexpr static std::string_view FireButton_type_name = "FireButton";
		constexpr static rivet::rivet_type_id FireButton_type_id = 0xaf168880; 

		explicit InteractCannonPrius() = default;
		explicit InteractCannonPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::xbb647502 AimType {};
		rivet::ddl::generated::x72fd960 FireButton {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<InteractCannonPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
