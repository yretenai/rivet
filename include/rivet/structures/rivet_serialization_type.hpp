// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <cstdint>
#include <string_view>

#include <rivet/hash/type_id.hpp>

namespace rivet::structures {
	enum class rivet_serialized_type : uint8_t {
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
		unknown14,
		boolean,
		file,
		tuid,
		json,
		none,
		instance_id = 0x14,
		max = 0x14
	};

	// enum_value has no ddl type, because it's always a constructed type
	// same applies to bitfield and object. if object is "any" it's a "json" value.
	RIVET_DEFINE_TYPE_ID(ddl_string, "string");					  // -> std::string_view
	RIVET_DEFINE_TYPE_ID(ddl_boolean, "boolean");				  // -> bool
	RIVET_DEFINE_TYPE_ID(ddl_float, "float");					  // -> float
	RIVET_DEFINE_TYPE_ID(ddl_double, "double");					  // -> double
	RIVET_DEFINE_TYPE_ID(ddl_uint64, "uint64_t");				  // -> uint64_t
	RIVET_DEFINE_TYPE_ID(ddl_uint32, "uint32_t");				  // -> uint32_t
	RIVET_DEFINE_TYPE_ID(ddl_uint16, "uint16_t");				  // -> uint16_t
	RIVET_DEFINE_TYPE_ID(ddl_uint8, "uint8_t");					  // -> uint8_t
	RIVET_DEFINE_TYPE_ID(ddl_int64, "int64_t");					  // -> int64_t
	RIVET_DEFINE_TYPE_ID(ddl_int32, "int32_t");					  // -> int32_t
	RIVET_DEFINE_TYPE_ID(ddl_int16, "int16_t");					  // -> int16_t
	RIVET_DEFINE_TYPE_ID(ddl_int8, "int8_t");					  // -> int8_t
	RIVET_DEFINE_TYPE_ID(ddl_file, "file");						  // -> std::string_view
	RIVET_DEFINE_TYPE_ID(ddl_tuid, "tuid");						  // -> uint64_t
	RIVET_DEFINE_TYPE_ID(ddl_json, "json");						  // -> rivet::structures::rivet_serialized_value, usually rivet::structures::rivet_serialized_object
	RIVET_DEFINE_FAKE_TYPE_ID(ddl_instance_id, "id", 0xECDE95E9); // -> uint64_t
} // namespace rivet::structures
