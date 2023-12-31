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

#include <rivet/ddl/generated/enums/x1264b76c.hpp>
#include <rivet/ddl/generated/enums/x1946b734.hpp>
#include <rivet/ddl/generated/enums/x10228b34.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED PrototypeMessageActionPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "PrototypeMessageActionPrius";
		constexpr static rivet::rivet_type_id type_id = 0xe353ee27;

		constexpr static std::string_view ActionType_type_name = "ActionType";
		constexpr static rivet::rivet_type_id ActionType_type_id = 0x874b2194;
		constexpr static std::string_view MessageText_type_name = "MessageText";
		constexpr static rivet::rivet_type_id MessageText_type_id = 0x723bca34;
		constexpr static std::string_view Duration_type_name = "Duration";
		constexpr static rivet::rivet_type_id Duration_type_id = 0x7c5e3db0;
		constexpr static std::string_view ClearAllMsgs_type_name = "ClearAllMsgs";
		constexpr static rivet::rivet_type_id ClearAllMsgs_type_id = 0x320b2879;
		constexpr static std::string_view PosX_type_name = "PosX";
		constexpr static rivet::rivet_type_id PosX_type_id = 0x58c2c0de;
		constexpr static std::string_view PosY_type_name = "PosY";
		constexpr static rivet::rivet_type_id PosY_type_id = 0x2fc5f048;
		constexpr static std::string_view Position3D_type_name = "Position3D";
		constexpr static rivet::rivet_type_id Position3D_type_id = 0xd199d9ca;
		constexpr static std::string_view Align_type_name = "Align";
		constexpr static rivet::rivet_type_id Align_type_id = 0xcd636c0a;
		constexpr static std::string_view Fontsize_type_name = "Fontsize";
		constexpr static rivet::rivet_type_id Fontsize_type_id = 0x1c71247a;
		constexpr static std::string_view ColorPick_type_name = "ColorPick";
		constexpr static rivet::rivet_type_id ColorPick_type_id = 0x26ccd3dc;
		constexpr static std::string_view FormatAsInt_type_name = "FormatAsInt";
		constexpr static rivet::rivet_type_id FormatAsInt_type_id = 0x995b8ec6;
		constexpr static std::string_view HideOnRegionLoad_type_name = "HideOnRegionLoad";
		constexpr static rivet::rivet_type_id HideOnRegionLoad_type_id = 0x190de87;
		constexpr static std::string_view HideFromDemo_type_name = "HideFromDemo";
		constexpr static rivet::rivet_type_id HideFromDemo_type_id = 0x285587dc; 

		explicit PrototypeMessageActionPrius() = default;
		explicit PrototypeMessageActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::x10228b34 ActionType {};
		std::string_view MessageText {};
		float Duration {};
		bool ClearAllMsgs {};
		uint32_t PosX {};
		uint32_t PosY {};
		bool Position3D {};
		rivet::ddl::generated::x1946b734 Align {};
		float Fontsize {};
		rivet::ddl::generated::x1264b76c ColorPick {};
		bool FormatAsInt {};
		bool HideOnRegionLoad {};
		bool HideFromDemo {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PrototypeMessageActionPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
