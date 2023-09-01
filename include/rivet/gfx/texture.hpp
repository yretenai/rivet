// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

#include <rivet/data/asset_bundle.hpp>
#include <rivet/hash/type_id.hpp>
#include <rivet/rivet_keywords.hpp>

namespace rivet::gfx {
	struct RIVET_SHARED texture {
#pragma pack(push, 1)

		struct texture_header {
			rivet_size resident_size;
			rivet_size stream_size;
			uint16_t stream_width;
			uint16_t stream_height;
			uint16_t resident_width;
			uint16_t resident_height;
			uint16_t type;
			uint16_t flags;
			uint32_t format; // DXGI_FORMAT on Windows
			uint32_t unknown18;
			uint16_t unknown1C;
			uint16_t mip_count;
			uint8_t streamed_mips;
			uint8_t unknown21;
			uint8_t unknown22;
			uint8_t unknown23;
			uint64_t unknown24;
		};

		static_assert(sizeof(texture_header) == 0x2C);

#pragma pack(pop)

		RIVET_DEFINE_TYPE_ID(texture_header, "Texture Header");

		explicit texture(const std::shared_ptr<rivet_data_array> &stream, rivet_size index = 0);
		explicit texture(const rivet::data::asset_bundle &bundle, rivet_size index = 0);

		texture(const std::shared_ptr<rivet_data_array> &dat1_stream, const std::shared_ptr<rivet_data_array> &resident, const std::shared_ptr<rivet_data_array> &stream = nullptr) {
			init(dat1_stream, resident, stream);
		}

		void
		provide_stream(const std::shared_ptr<rivet_data_array> &stream);

		[[nodiscard]] auto
		to_png(rivet_index surface_index) const -> std::shared_ptr<rivet_data_array>;

		[[nodiscard]] auto
		to_tiff(rivet_index surface_index) const -> std::shared_ptr<rivet_data_array>;

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

		void
		init(const std::shared_ptr<rivet_data_array> &dat1_stream, const std::shared_ptr<rivet_data_array> &resident_buffer, const std::shared_ptr<rivet_data_array> &stream_buffer = nullptr);
	};
} // namespace rivet::gfx
