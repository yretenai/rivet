// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/HeapTemplate.hpp> 

#include <rivet/ddl/generated/RenderBudgets.hpp>

namespace rivet::ddl::generated {
	RenderBudgets::RenderBudgets([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ManagedBufferSmallHeapSize = serialized->get_uint32(ManagedBufferSmallHeapSize_type_id);
		ManagedBufferMaxAllocs = serialized->get_uint32(ManagedBufferMaxAllocs_type_id);
		SkinningBufferSize = serialized->get_uint64(SkinningBufferSize_type_id);
		FrozenSkinningBufferSize = serialized->get_uint64(FrozenSkinningBufferSize_type_id);
		DynamicD3DBufferSize = serialized->get_uint64(DynamicD3DBufferSize_type_id);
		LightGridBufferSize = serialized->get_uint64(LightGridBufferSize_type_id);
		ConstantBufferRingSize = serialized->get_uint64(ConstantBufferRingSize_type_id);
		DebugDynamicD3DBufferSize = serialized->get_uint32(DebugDynamicD3DBufferSize_type_id);
		XMemHeapTemplate = serialized->unwrap_into<rivet::ddl::generated::HeapTemplate>(XMemHeapTemplate_type_id);
		XMemGpuWCHeapTemplate = serialized->unwrap_into<rivet::ddl::generated::HeapTemplate>(XMemGpuWCHeapTemplate_type_id);
		XMemShaderHeapTemplate = serialized->unwrap_into<rivet::ddl::generated::HeapTemplate>(XMemShaderHeapTemplate_type_id); 
	}

	[[nodiscard]] auto
	RenderBudgets::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	RenderBudgets::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RenderBudgets> {
		if (incoming_type_id == RenderBudgets::type_id) {
			return std::make_shared<RenderBudgets>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
