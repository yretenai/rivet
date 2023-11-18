// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

#include <fx/gltf.h>
#include <tuple>

namespace rivet::gltf {
	template <typename T> using gltf_return_value = std::tuple<T, int32_t>;

	inline auto
	create_scene(fx::gltf::Document &gltf) -> gltf_return_value<fx::gltf::Scene> {
		auto id = gltf.scenes.size();
		auto scene = gltf.scenes.emplace_back();
		if (gltf.scene == -1) {
			gltf.scene = id;
		}
		return std::make_tuple(scene, id);
	}

	inline auto
	create_node(fx::gltf::Document &gltf) -> gltf_return_value<fx::gltf::Node> {
		auto id = gltf.nodes.size();
		auto node = gltf.nodes.emplace_back();
		return std::make_tuple(node, id);
	}

	inline auto
	create_mesh(fx::gltf::Document &gltf) -> gltf_return_value<fx::gltf::Mesh> {
		auto id = gltf.meshes.size();
		auto mesh = gltf.meshes.emplace_back();
		return std::make_tuple(mesh, id);
	}

	inline auto
	create_accessor(fx::gltf::Document &gltf) -> gltf_return_value<fx::gltf::Accessor> {
		auto id = gltf.accessors.size();
		auto accessor = gltf.accessors.emplace_back();
		return std::make_tuple(accessor, id);
	}

	inline auto
	create_buffer(fx::gltf::Document &gltf) -> gltf_return_value<fx::gltf::Buffer> {
		auto id = gltf.buffers.size();
		auto buffer = gltf.buffers.emplace_back();
		return std::make_tuple(buffer, id);
	}

	inline auto
	create_buffer_view(fx::gltf::Document &gltf) -> gltf_return_value<fx::gltf::BufferView> {
		auto id = gltf.bufferViews.size();
		auto buffer_view = gltf.bufferViews.emplace_back();
		return std::make_tuple(buffer_view, id);
	}

	inline auto
	create_material(fx::gltf::Document &gltf) -> gltf_return_value<fx::gltf::Material> {
		auto id = gltf.materials.size();
		auto material = gltf.materials.emplace_back();
		return std::make_tuple(material, id);
	}

	inline auto
	create_image(fx::gltf::Document &gltf) -> gltf_return_value<fx::gltf::Image> {
		auto id = gltf.images.size();
		auto image = gltf.images.emplace_back();
		return std::make_tuple(image, id);
	}

	inline auto
	create_texture(fx::gltf::Document &gltf) -> gltf_return_value<fx::gltf::Texture> {
		auto id = gltf.textures.size();
		auto texture = gltf.textures.emplace_back();
		return std::make_tuple(texture, id);
	}

	inline auto
	create_sampler(fx::gltf::Document &gltf) -> gltf_return_value<fx::gltf::Sampler> {
		auto id = gltf.samplers.size();
		auto sampler = gltf.samplers.emplace_back();
		return std::make_tuple(sampler, id);
	}

	inline auto
	create_skin(fx::gltf::Document &gltf) -> gltf_return_value<fx::gltf::Skin> {
		auto id = gltf.skins.size();
		auto skin = gltf.skins.emplace_back();
		return std::make_tuple(skin, id);
	}
} // namespace rivet::gltf
