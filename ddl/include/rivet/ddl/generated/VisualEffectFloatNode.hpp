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
	struct VisualEffectFloat;
	struct VisualEffectNodeConnectedOutputPort;
	struct VisualEffectNodeConnectedInputPort; 

	struct RIVET_DDL_SHARED VisualEffectFloatNode : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "VisualEffectFloatNode";
		constexpr static rivet::rivet_type_id type_id = 0x74962d04;

		constexpr static std::string_view NodeId_type_name = "NodeId";
		constexpr static rivet::rivet_type_id NodeId_type_id = 0x371a59e0;
		constexpr static std::string_view XPos_type_name = "XPos";
		constexpr static rivet::rivet_type_id XPos_type_id = 0xf88aee81;
		constexpr static std::string_view YPos_type_name = "YPos";
		constexpr static rivet::rivet_type_id YPos_type_id = 0x403689e4;
		constexpr static std::string_view DisplayName_type_name = "DisplayName";
		constexpr static rivet::rivet_type_id DisplayName_type_id = 0xeaf33243;
		constexpr static std::string_view ConnectedInputs_type_name = "ConnectedInputs";
		constexpr static rivet::rivet_type_id ConnectedInputs_type_id = 0x8ca57bf5;
		constexpr static std::string_view ConnectedOutputs_type_name = "ConnectedOutputs";
		constexpr static rivet::rivet_type_id ConnectedOutputs_type_id = 0x824bee0e;
		constexpr static std::string_view OutputPort_Output_type_name = "OutputPort_Output";
		constexpr static rivet::rivet_type_id OutputPort_Output_type_id = 0x7778788c; 

		explicit VisualEffectFloatNode() = default;
		explicit VisualEffectFloatNode([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint64_t NodeId {};
		int32_t XPos {};
		int32_t YPos {};
		std::string_view DisplayName {};
		std::vector<std::shared_ptr<rivet::ddl::generated::VisualEffectNodeConnectedInputPort>> ConnectedInputs {};
		std::vector<std::shared_ptr<rivet::ddl::generated::VisualEffectNodeConnectedOutputPort>> ConnectedOutputs {};
		std::shared_ptr<rivet::ddl::generated::VisualEffectFloat> OutputPort_Output {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VisualEffectFloatNode>;
	};
} // namespace rivet::ddl::generated

// clang-format on
