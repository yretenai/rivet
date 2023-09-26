// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <cmath>
#include <cstdint>

#include <rivet/rivet_keywords.hpp>
#include <rivet/rivet_vec.hpp>

namespace rivet::structures::gfx {
	static const float rivet_sqrt2 = 1.4142135623730950488016887242097f;
	static const float rivet_sqrt2_bits = rivet_sqrt2 / (0x3ff / 2.0f); // 10 bits, divide by 2 to get [-1, 1]
	static const float rivet_one = 1.0f;
	static const float rivet_half = 0.50f;
	static const float rivet_quarter = 0.25f;
	static const float rivet_unorm8 = 255.0f;

#pragma pack(push, 1)

	struct rivet_standard_vert {
		rivet_vec4ih position;
		uint32_t normal_tangent {};
		rivet_vec2ih uv0;

		[[nodiscard]] auto RIVET_INLINE
		unpack_position(const float &scale) const -> rivet_vec4f {
			return rivet_vec4f(position) * scale;
		}

		[[nodiscard]] auto RIVET_INLINE
		unpack_normal() const -> rivet_vec3f {
			auto normal = rivet_vec3f();

			auto packed_x = static_cast<float>(normal_tangent & 0x3FF);
			auto packed_y = static_cast<float>((normal_tangent >> 10) & 0x3FF);
			auto flip = (normal_tangent >> 31) == 0;

			auto nxy = rivet_vec2f(packed_x, packed_y) * rivet_sqrt2_bits - rivet_sqrt2;
			auto nxxyy = nxy[0] * nxy[0] + nxy[1] * nxy[1];
			auto weight = std::sqrt(rivet_one - nxxyy * rivet_quarter);
			nxy[0] *= weight;
			nxy[1] *= weight;
			auto nz = std::sqrt(rivet_one - nxxyy * rivet_half); // NOLINT(*-identifier-length)

			if (flip) {
				nz = -nz;
			}

			normal[0] = nxy[0];
			normal[1] = nxy[1];
			normal[2] = nz;

			return normal;
		}

		[[nodiscard]] auto RIVET_INLINE
		unpack_texcoord(const float &scale) const -> rivet_vec2f {
			auto unpacked = rivet_vec2f(uv0) / scale;
			unpacked[1] *= -1.0f;
			return unpacked;
		}

		[[nodiscard]] auto RIVET_INLINE
		unpack(const float &scale) const -> std::tuple<rivet_vec4f, rivet_vec3f, rivet_vec2f> {
			return std::make_tuple(unpack_position(scale), unpack_normal(), unpack_texcoord(scale));
		}
	};

	struct rivet_gpu_skin_vert {
		rivet_vec4b blend_indices;
		rivet_vec4b blend_weights;

		[[nodiscard]] auto RIVET_INLINE
		unpack_weights() const -> rivet_vec4f {
			return rivet_vec4f(blend_weights) / rivet_unorm8;
		}

		[[nodiscard]] auto RIVET_INLINE
		unpack_index() const -> rivet_vec4b {
			return blend_indices;
		}

		[[nodiscard]] auto RIVET_INLINE
		unpack() const -> std::tuple<rivet_vec4b, rivet_vec4f> {
			return std::make_tuple(unpack_index(), unpack_weights());
		}
	};

	struct rivet_skin_vert {
		uint8_t blend_index;
		uint8_t blend_weight;

		[[nodiscard]] auto RIVET_INLINE
		unpack_weights() const -> float {
			return static_cast<float>(blend_weight) / rivet_unorm8;
		}

		[[nodiscard]] auto RIVET_INLINE
		unpack_index() const -> uint8_t {
			return blend_index;
		}

		[[nodiscard]] auto RIVET_INLINE
		unpack() const -> std::tuple<uint8_t, float> {
			return std::make_tuple(unpack_index(), unpack_weights());
		}
	};

	struct rivet_texcoord_vert {
		rivet_vec2ih uv1;

		[[nodiscard]] auto RIVET_INLINE
		unpack(const float &scale) const -> rivet_vec2f {
			auto unpacked = rivet_vec2f(uv1) / scale;
			unpacked[1] *= -1.0f;
			return unpacked;
		}
	};

	struct rivet_color_vert {
		rivet_vec4b color;

		[[nodiscard]] auto RIVET_INLINE
		unpack() const -> rivet_vec4f {
			return rivet_vec4f(color) / rivet_unorm8;
		}
	};

#pragma pack(pop)

} // namespace rivet::structures::gfx
