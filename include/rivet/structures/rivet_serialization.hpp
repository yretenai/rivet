// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

#include <cstdint>
#include <string>
#include <variant>
#include <vector>
#include <unordered_map>
#include <memory>

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
		global_string, // dat1 header offset?
		bitfield, // equivalent to uint64, but maps to an enum
		object, // nested object, no idea how to determine the subtype in polymorphic structures
		none,
		boolean, // equivalent to uint8
		asset, // string
		persistent_instance_id, // equivalent to uint64, also known as tuid
		buffer, // byte buffer??
		unknown19, // unused?
		id = 0x14, // equivalent to uint64
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

		[[nodiscard]] uint32_t get_length() const noexcept {
			return (meta & 0x00FFFFFF) >> 4;
		}

		[[nodiscard]] rivet_serialization_type get_type() const noexcept {
			return static_cast<rivet_serialization_type>(meta >> 24);
		}

		[[nodiscard]] uint32_t get_unknown() const noexcept {
			return meta & 0x0000000F;
		}
	};
	static_assert(sizeof(rivet_serialization_field_header) == 8);
	static_assert(offsetof(rivet_serialization_field_header, type_id) == 0);
	static_assert(offsetof(rivet_serialization_field_header, meta) == 4);

	struct rivet_serialization_string_header {
		rivet_size length;
		rivet_hash hash;
		rivet_checksum checksum;
	};
	static_assert(sizeof(rivet_serialization_string_header) == 16);

	struct rivet_serialized_object;

	typedef std::variant<uint8_t, uint16_t, uint32_t, uint64_t, int8_t, int16_t, int32_t, int64_t, float, double,
	                     std::shared_ptr<std::string_view>, rivet_hash, rivet_checksum, std::shared_ptr<rivet_serialized_object>,
						 bool, rivet_asset_id, std::nullptr_t> rivet_serialized_value;

	struct rivet_serialized_object {
		std::unordered_map<std::shared_ptr<std::string_view>, std::vector<rivet_serialized_value>> values = {};
	};
}
