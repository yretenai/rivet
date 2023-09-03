// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

#include <ankerl/unordered_dense.h>
#include <cstdint>
#include <iosfwd>
#include <memory>
#include <string_view>
#include <variant>
#include <vector>

#include <rivet/rivet_array.hpp>
#include <rivet/rivet_keywords.hpp>

namespace rivet::structures {
	enum class rivet_serialization_type : uint8_t {
		uint8,
		uint16,
		uint32,
		uint64,
		int8,
		int16,
		int32,
		int64,
		float32,
		float64,
		string,
		enum_value,
		bitfield,
		object,
		none,
		boolean,
		file,
		tuid,
		json,
		unknown19,
		instance_id = 0x14,
		max = 0x14
	};

	struct rivet_serialization_object_header {
		uint32_t zero;
		uint16_t version_major;
		uint16_t version_minor;
		rivet_size node_count;
		rivet_size size;
	};

	static_assert(sizeof(rivet_serialization_object_header) == 16);

	struct rivet_serialization_field_header {
		rivet_type_id type_id;
		uint32_t meta;

		[[nodiscard]] auto
		get_length() const noexcept -> uint32_t {
			return (meta & 0x00FFFFFF) >> 4;
		}

		[[nodiscard]] auto
		get_type() const noexcept -> rivet_serialization_type {
			return static_cast<rivet_serialization_type>(meta >> 24);
		}

		[[nodiscard]] auto
		get_unknown() const noexcept -> uint32_t {
			return meta & 0x0000000F;
		}
	};

	static_assert(sizeof(rivet_serialization_field_header) == 8);

	struct rivet_serialization_string_header {
		rivet_size length;
		rivet_hash hash;
		rivet_checksum checksum;
	};

	static_assert(sizeof(rivet_serialization_string_header) == 16);

	struct rivet_serialized_object;

	using rivet_serialized_value =
		std::variant<uint64_t, int64_t, double, bool, std::nullptr_t, std::shared_ptr<std::string_view>, std::shared_ptr<rivet_serialized_object>, std::shared_ptr<rivet_data_array>>;

	struct rivet_serialized_object {
		ankerl::unordered_dense::map<std::shared_ptr<std::string_view>, std::vector<rivet_serialized_value>> values = {};
	};
} // namespace rivet::structures
