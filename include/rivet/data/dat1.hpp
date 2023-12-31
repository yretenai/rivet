// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

#include <ankerl/unordered_dense.h>
#include <cstdint>
#include <memory>
#include <string_view>
#include <unordered_set>
#include <utility>

#include <rivet/rivet_array.hpp>
#include <rivet/rivet_keywords.hpp>

namespace rivet::data {
	struct RIVET_SHARED dat1 {
		constexpr static uint32_t magic = 0x44415431u;

		struct dat1_header {
			uint32_t magic;
			rivet_type_id schema;
			rivet_size size;
			uint16_t section_count;
			uint16_t reserved;
		};

		static_assert(sizeof(dat1_header) == 16);

		struct dat1_entry {
			rivet_type_id type_id;
			rivet_off offset;
			rivet_size size;
		};

		static_assert(sizeof(dat1_entry) == 12);

		dat1_header header = {};
		std::shared_ptr<rivet_data_array> buffer = {};
		std::shared_ptr<rivet_data_array> resident_buffer = {};
		std::unordered_set<rivet_type_id> section_ids = {};
		ankerl::unordered_dense::map<rivet_type_id, std::pair<dat1_entry, std::shared_ptr<rivet_data_array>>> sections;
		std::string_view type_name = {};

		dat1() = default;

		explicit dat1(const std::shared_ptr<rivet_data_array> &stream, const std::shared_ptr<rivet_data_array> &resident_buffer = nullptr);

		[[nodiscard]] auto
		get_section_data(rivet_type_id type_id) const -> std::shared_ptr<rivet_data_array>;

		template <typename T>
		auto
		get_section(const rivet_type_id type_id) const -> std::shared_ptr<rivet_array<T>> {
			const auto data = get_section_data(type_id);
			if (data == nullptr) {
				return nullptr;
			}

			return data->cast<T>();
		}
	};
} // namespace rivet::data
