// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/IcicleDamageRange.hpp> 

#include <rivet/ddl/generated/ShotIcicleBlastPrius.hpp>

namespace rivet::ddl::generated {
	ShotIcicleBlastPrius::ShotIcicleBlastPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): SimpleShotPrius(serialized) {
		CloseRangeDamage = serialized->unwrap_into<rivet::ddl::generated::IcicleDamageRange>(CloseRangeDamage_type_id);
		MidRangeDamage = serialized->unwrap_into<rivet::ddl::generated::IcicleDamageRange>(MidRangeDamage_type_id);
		LongRangeDamage = serialized->unwrap_into<rivet::ddl::generated::IcicleDamageRange>(LongRangeDamage_type_id);
		DamageHashString = serialized->get_string(DamageHashString_type_id); 
	}

	auto
	ShotIcicleBlastPrius::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	ShotIcicleBlastPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ShotIcicleBlastPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ShotIcicleBlastPrius> {
		if (incoming_type_id == ShotIcicleBlastPrius::type_id) {
			return std::make_shared<ShotIcicleBlastPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
