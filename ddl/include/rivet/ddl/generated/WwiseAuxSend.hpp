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
	struct RIVET_DDL_SHARED WwiseAuxSend : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "WwiseAuxSend";
		constexpr static rivet::rivet_type_id type_id = 0x1573accf;

		constexpr static std::string_view AuxSendName_type_name = "AuxSendName";
		constexpr static rivet::rivet_type_id AuxSendName_type_id = 0xaf24a03a;
		constexpr static std::string_view AuxSendId_type_name = "AuxSendId";
		constexpr static rivet::rivet_type_id AuxSendId_type_id = 0x30502f58; 

		explicit WwiseAuxSend() = default;
		explicit WwiseAuxSend([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view AuxSendName {};
		uint32_t AuxSendId {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WwiseAuxSend>;
	};
} // namespace rivet::ddl::generated

// clang-format on
