// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DamageModifierHitDirectionOutgoingPrius.hpp>
#include <rivet/ddl/generated/DamageModifierProcOutgoingPrius.hpp>
#include <rivet/ddl/generated/DamageModifierShockwavePrius.hpp>
#include <rivet/ddl/generated/DamageModifierExplosionPrius.hpp>
#include <rivet/ddl/generated/DamageModifierDirectionalOutgoingPrius.hpp>
#include <rivet/ddl/generated/DamageModifierConditionEntry.hpp>
#include <rivet/ddl/generated/DamageModifierCentipedeMeleeOutgoingPrius.hpp>
#include <rivet/ddl/generated/DamageModifierIgnoreOutgoingPrius.hpp>
#include <rivet/ddl/generated/DamageModMultOutgoingPrius.hpp>
#include <rivet/ddl/generated/DamageModifierVerticalLimitPrius.hpp>
#include <rivet/ddl/generated/DamageModifierListPrius.hpp>
#include <rivet/ddl/generated/DamageModifierInnerOuterPrius.hpp>
#include <rivet/ddl/generated/DamageModifierPercentOutgoingPrius.hpp>
#include <rivet/ddl/generated/DamageModAddOutgoingPrius.hpp>
#include <rivet/ddl/generated/DamageModifierHazardPrius.hpp>
#include <rivet/ddl/generated/DamageModifierAddFlagsPrius.hpp>
#include <rivet/ddl/generated/DamageModifierHitDirectionPrius.hpp>
#include <rivet/ddl/generated/DamageModifierOutgoingBattleBrewScalePrius.hpp>
#include <rivet/ddl/generated/DamageModifierOutwardBlastPrius.hpp> 

#include <rivet/ddl/generated/DamageModifierOutgoingPrius.hpp>

namespace rivet::ddl::generated {
	DamageModifierOutgoingPrius::DamageModifierOutgoingPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ModifierName = serialized->get_string(ModifierName_type_id);
		Conditions = serialized->unwrap_into_many<rivet::ddl::generated::DamageModifierConditionEntry>(Conditions_type_id); 
	}

	[[nodiscard]] auto
	DamageModifierOutgoingPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DamageModifierOutgoingPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DamageModifierOutgoingPrius> {
		if (incoming_type_id == DamageModifierOutgoingPrius::type_id) {
			return std::make_shared<DamageModifierOutgoingPrius>(serialized);
		}

		auto DamageModifierCentipedeMeleeOutgoingPrius_ptr = DamageModifierCentipedeMeleeOutgoingPrius::from_substruct(incoming_type_id, serialized);
		if (DamageModifierCentipedeMeleeOutgoingPrius_ptr != nullptr) {
			return DamageModifierCentipedeMeleeOutgoingPrius_ptr;
		}

		auto DamageModifierDirectionalOutgoingPrius_ptr = DamageModifierDirectionalOutgoingPrius::from_substruct(incoming_type_id, serialized);
		if (DamageModifierDirectionalOutgoingPrius_ptr != nullptr) {
			return DamageModifierDirectionalOutgoingPrius_ptr;
		}

		auto DamageModifierIgnoreOutgoingPrius_ptr = DamageModifierIgnoreOutgoingPrius::from_substruct(incoming_type_id, serialized);
		if (DamageModifierIgnoreOutgoingPrius_ptr != nullptr) {
			return DamageModifierIgnoreOutgoingPrius_ptr;
		}

		auto DamageModMultOutgoingPrius_ptr = DamageModMultOutgoingPrius::from_substruct(incoming_type_id, serialized);
		if (DamageModMultOutgoingPrius_ptr != nullptr) {
			return DamageModMultOutgoingPrius_ptr;
		}

		auto DamageModAddOutgoingPrius_ptr = DamageModAddOutgoingPrius::from_substruct(incoming_type_id, serialized);
		if (DamageModAddOutgoingPrius_ptr != nullptr) {
			return DamageModAddOutgoingPrius_ptr;
		}

		auto DamageModifierInnerOuterPrius_ptr = DamageModifierInnerOuterPrius::from_substruct(incoming_type_id, serialized);
		if (DamageModifierInnerOuterPrius_ptr != nullptr) {
			return DamageModifierInnerOuterPrius_ptr;
		}

		auto DamageModifierHazardPrius_ptr = DamageModifierHazardPrius::from_substruct(incoming_type_id, serialized);
		if (DamageModifierHazardPrius_ptr != nullptr) {
			return DamageModifierHazardPrius_ptr;
		}

		auto DamageModifierAddFlagsPrius_ptr = DamageModifierAddFlagsPrius::from_substruct(incoming_type_id, serialized);
		if (DamageModifierAddFlagsPrius_ptr != nullptr) {
			return DamageModifierAddFlagsPrius_ptr;
		}

		auto DamageModifierHitDirectionPrius_ptr = DamageModifierHitDirectionPrius::from_substruct(incoming_type_id, serialized);
		if (DamageModifierHitDirectionPrius_ptr != nullptr) {
			return DamageModifierHitDirectionPrius_ptr;
		}

		auto DamageModifierPercentOutgoingPrius_ptr = DamageModifierPercentOutgoingPrius::from_substruct(incoming_type_id, serialized);
		if (DamageModifierPercentOutgoingPrius_ptr != nullptr) {
			return DamageModifierPercentOutgoingPrius_ptr;
		}

		auto DamageModifierOutwardBlastPrius_ptr = DamageModifierOutwardBlastPrius::from_substruct(incoming_type_id, serialized);
		if (DamageModifierOutwardBlastPrius_ptr != nullptr) {
			return DamageModifierOutwardBlastPrius_ptr;
		}

		auto DamageModifierOutgoingBattleBrewScalePrius_ptr = DamageModifierOutgoingBattleBrewScalePrius::from_substruct(incoming_type_id, serialized);
		if (DamageModifierOutgoingBattleBrewScalePrius_ptr != nullptr) {
			return DamageModifierOutgoingBattleBrewScalePrius_ptr;
		}

		auto DamageModifierListPrius_ptr = DamageModifierListPrius::from_substruct(incoming_type_id, serialized);
		if (DamageModifierListPrius_ptr != nullptr) {
			return DamageModifierListPrius_ptr;
		}

		auto DamageModifierVerticalLimitPrius_ptr = DamageModifierVerticalLimitPrius::from_substruct(incoming_type_id, serialized);
		if (DamageModifierVerticalLimitPrius_ptr != nullptr) {
			return DamageModifierVerticalLimitPrius_ptr;
		}

		auto DamageModifierExplosionPrius_ptr = DamageModifierExplosionPrius::from_substruct(incoming_type_id, serialized);
		if (DamageModifierExplosionPrius_ptr != nullptr) {
			return DamageModifierExplosionPrius_ptr;
		}

		auto DamageModifierShockwavePrius_ptr = DamageModifierShockwavePrius::from_substruct(incoming_type_id, serialized);
		if (DamageModifierShockwavePrius_ptr != nullptr) {
			return DamageModifierShockwavePrius_ptr;
		}

		auto DamageModifierProcOutgoingPrius_ptr = DamageModifierProcOutgoingPrius::from_substruct(incoming_type_id, serialized);
		if (DamageModifierProcOutgoingPrius_ptr != nullptr) {
			return DamageModifierProcOutgoingPrius_ptr;
		}

		auto DamageModifierHitDirectionOutgoingPrius_ptr = DamageModifierHitDirectionOutgoingPrius::from_substruct(incoming_type_id, serialized);
		if (DamageModifierHitDirectionOutgoingPrius_ptr != nullptr) {
			return DamageModifierHitDirectionOutgoingPrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
