// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/CompatVaultAddAnimClipsToAnimSet.hpp>

namespace rivet::ddl::generated {
	CompatVaultAddAnimClipsToAnimSet::CompatVaultAddAnimClipsToAnimSet([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Type = serialized->get_enum<rivet::ddl::generated::x63e8ba6e>(Type_type_id, rivet::ddl::generated::x63e8ba6e_values);
		AnimClips = serialized->get_strings(AnimClips_type_id); 
	}

	[[nodiscard]] auto
	CompatVaultAddAnimClipsToAnimSet::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CompatVaultAddAnimClipsToAnimSet::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CompatVaultAddAnimClipsToAnimSet> {
		if (incoming_type_id == CompatVaultAddAnimClipsToAnimSet::type_id) {
			return std::make_shared<CompatVaultAddAnimClipsToAnimSet>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated