// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AndScriptedShotConditionalPrius.hpp>
#include <rivet/ddl/generated/NoScriptedShotConditionalPrius.hpp>
#include <rivet/ddl/generated/XorScriptedShotConditionalPrius.hpp>
#include <rivet/ddl/generated/OrScriptedShotConditionalPrius.hpp>
#include <rivet/ddl/generated/HitActorScriptedShotConditionalPrius.hpp>
#include <rivet/ddl/generated/NotScriptedShotConditionalPrius.hpp> 

#include <rivet/ddl/generated/ScriptedShotConditionalBasePrius.hpp>

namespace rivet::ddl::generated {
	ScriptedShotConditionalBasePrius::ScriptedShotConditionalBasePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {

	}

	[[nodiscard]] auto
	ScriptedShotConditionalBasePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ScriptedShotConditionalBasePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ScriptedShotConditionalBasePrius> {
		if (incoming_type_id == ScriptedShotConditionalBasePrius::type_id) {
			return std::make_shared<ScriptedShotConditionalBasePrius>(serialized);
		}

		auto NotScriptedShotConditionalPrius_ptr = NotScriptedShotConditionalPrius::from_substruct(incoming_type_id, serialized);
		if (NotScriptedShotConditionalPrius_ptr != nullptr) {
			return NotScriptedShotConditionalPrius_ptr;
		}

		auto HitActorScriptedShotConditionalPrius_ptr = HitActorScriptedShotConditionalPrius::from_substruct(incoming_type_id, serialized);
		if (HitActorScriptedShotConditionalPrius_ptr != nullptr) {
			return HitActorScriptedShotConditionalPrius_ptr;
		}

		auto XorScriptedShotConditionalPrius_ptr = XorScriptedShotConditionalPrius::from_substruct(incoming_type_id, serialized);
		if (XorScriptedShotConditionalPrius_ptr != nullptr) {
			return XorScriptedShotConditionalPrius_ptr;
		}

		auto NoScriptedShotConditionalPrius_ptr = NoScriptedShotConditionalPrius::from_substruct(incoming_type_id, serialized);
		if (NoScriptedShotConditionalPrius_ptr != nullptr) {
			return NoScriptedShotConditionalPrius_ptr;
		}

		auto AndScriptedShotConditionalPrius_ptr = AndScriptedShotConditionalPrius::from_substruct(incoming_type_id, serialized);
		if (AndScriptedShotConditionalPrius_ptr != nullptr) {
			return AndScriptedShotConditionalPrius_ptr;
		}

		auto OrScriptedShotConditionalPrius_ptr = OrScriptedShotConditionalPrius::from_substruct(incoming_type_id, serialized);
		if (OrScriptedShotConditionalPrius_ptr != nullptr) {
			return OrScriptedShotConditionalPrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
