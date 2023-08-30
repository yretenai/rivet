// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

#include <cstdint>
#include <memory>
#include <string>
#include <unordered_map>
#include <utility>

#include <rivet/rivet_array.hpp>
#include <rivet/rivet_keywords.hpp>
#include <rivet/structures/rivet_asset.hpp>

namespace rivet::data {
	struct RIVET_SHARED dat1 {
		constexpr const static uint32_t magic = 0x44415431;

		struct data_header_t {
			uint32_t magic;
			rivet_type_id schema;
			rivet_size size;
			uint16_t section_count;
			uint16_t reserved;
		};

		static_assert(sizeof(data_header_t) == 16);

		struct data_entry_t {
			rivet_type_id type_id;
			rivet_off offset;
			rivet_size size;
		};

		static_assert(sizeof(data_entry_t) == 12);

		data_header_t header = {};
		std::shared_ptr<rivet_data_array> buffer = {};
		std::shared_ptr<rivet_data_array> string_buffer = {};
		std::unordered_map<rivet_type_id, std::pair<data_entry_t, std::shared_ptr<rivet_data_array>>> sections;
		std::string_view type_name = {};
		rivet::structures::rivet_asset_header asset_header = {};

		explicit dat1(const std::shared_ptr<rivet_data_array> &stream);

		[[nodiscard]] auto
		get_section_data(rivet_type_id type_id) const -> std::shared_ptr<rivet_data_array>;

		template <typename T>
		auto
		get_section(rivet_type_id type_id) const -> std::shared_ptr<rivet_array<T>> {
			auto data = get_section_data(type_id);
			if (data == nullptr) {
				return nullptr;
			}

			return data->cast<T>();
		}
	};
} // namespace rivet::data
