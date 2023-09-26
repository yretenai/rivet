// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

#include <cstdint>
#include <filesystem>
#include <memory>

#include <rivet/hash/type_id.hpp>
#include <rivet/rivet_array.hpp>
#include <rivet/rivet_keywords.hpp>

namespace rivet {
	namespace data {
		struct asset_bundle;
	} // namespace data

	namespace gfx {
		struct RIVET_SHARED texture {
			constexpr const static rivet_type_id type_id = 0x8F53A199;

#pragma pack(push, 1)

			struct texture_header {
				rivet_size resident_size;
				rivet_size stream_size;
				rivet_size16 stream_width;
				rivet_size16 stream_height;
				rivet_size16 resident_width;
				rivet_size16 resident_height;
				rivet_size16 surface_count;
				uint8_t unknown11; // flags? 27 possible combinations, most common = 0x10
				uint8_t unknown12; // seems to be grouped by type
				uint32_t format;
				float mid_alpha_level;
				uint16_t unknown1C; // 0: Vertex Animation, 1: Texture, 2: ??, 3: ??, 4: Cubemap
				rivet_size16 mip_count;
				uint8_t streamed_mips; // 0 when stream_size is 0
				uint8_t unknown21;	   // 1 - 3. usually 1. 2 seems to be some sort of cubemap? 3 = vertex animation?
				uint8_t unknown22;	   // copy of unknown21
				uint8_t unknown23;	   // copy of unknown21
				uint64_t unknown24;	   // always zero, maybe not in embedded textures.
			};

			static_assert(sizeof(texture_header) == 0x2C);

#pragma pack(pop)

			RIVET_DEFINE_TYPE_ID(texture_header, "Texture Header");

			explicit texture(const rivet::data::asset_bundle &bundle, rivet_size index = 0);

			texture(const std::shared_ptr<rivet_data_array> &dat1_stream, const std::shared_ptr<rivet_data_array> &resident, const std::shared_ptr<rivet_data_array> &stream = nullptr) {
				init(dat1_stream, resident, stream);
			}

			void
			provide_stream(const std::shared_ptr<rivet_data_array> &stream);

			void
			provide_resident(const std::shared_ptr<rivet_data_array> &stream);

			[[nodiscard]] auto
			is_convertable() const -> bool;

			[[nodiscard]] auto
			to_png(rivet_index surface_index) const -> std::shared_ptr<rivet_data_array>;

			void
			to_tiff(rivet_index surface_index, const std::filesystem::path &path) const;

			[[nodiscard]] auto
			to_dds() const -> std::shared_ptr<rivet_data_array>;

			[[nodiscard]] auto
			is_hdr() const -> bool {
				return header.format == 95 || header.format == 96;
			}

			[[nodiscard]] auto
			needs_stream() const -> bool {
				return header.stream_size > 0;
			}

			[[nodiscard]] auto
			get_header() const -> texture_header {
				return header;
			}

		private:
			texture_header header {};
			std::shared_ptr<rivet_data_array> resident_buffer;
			std::shared_ptr<rivet_data_array> stream_buffer;

			[[nodiscard]] auto
			decompress_compressonator(uint32_t target, rivet_index surface_index) const -> std::shared_ptr<rivet_data_array>;

			void
			init(const std::shared_ptr<rivet_data_array> &dat1_stream, const std::shared_ptr<rivet_data_array> &resident_buffer, const std::shared_ptr<rivet_data_array> &stream_buffer = nullptr);
		};
	} // namespace gfx
} // namespace rivet
