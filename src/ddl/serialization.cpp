// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/serialization.hpp>
#include <rivet/hash/type_id.hpp>
#include <rivet/rivet_keywords.hpp>
#include <rivet/structures/rivet_serialization.hpp>

using namespace rivet;
using namespace rivet::structures;

namespace rivet::ddl {
	serialized::serialized(const std::shared_ptr<rivet_data_array> &data, const std::shared_ptr<rivet_data_array> &dat1): rivet::structures::rivet_serialized_object(data) {
		if (host_buffer->size() < sizeof(rivet_serialized_header)) {
			throw std::runtime_error("Invalid buffer size");
		}

		header = host_buffer->get<rivet_serialized_header>(0);
		if (header.magic != magic_b) {
			throw std::runtime_error("Invalid magic");
		}

		buffer = host_buffer->slice(sizeof(rivet_serialized_header), header.size);

		field_info = buffer->slice<rivet_serialized_field>(0, header.node_count);
		auto field_name_offsets = buffer->slice<rivet_off>(sizeof(rivet_serialized_field) * header.node_count, header.node_count);

		if (dat1 != nullptr) {
			for (auto index = 0u; index < header.node_count; index++) {
				auto field_name_offset = field_name_offsets->get<rivet_off>(index);
				auto field_id = field_info->get(index).type_id;
				field_names.emplace(field_id, dat1->to_cstring_view(field_name_offset));
			}
		}

		rivet_size cursor = ((sizeof(rivet_serialized_field) + sizeof(rivet_off)) * header.node_count);
		auto abs_offset = buffer->offset + cursor;
		if((abs_offset % 4) != 0) {
			cursor += 4 - (abs_offset % 4); // align to 4 bytes??
		}

		for (const auto &field : *field_info) {
			auto count = field.get_count();
			if (field.get_unknown() != 0) {
				RIVET_DEBUG_BREAK;
			}

			auto &entry = values[field.type_id];

#ifndef _NDEBUG
			[[maybe_unused]] auto debug_offset = buffer->offset + cursor;
			[[maybe_unused]] auto debug_type = field.get_type();
#endif

			entry.reserve(count);
			switch (field.get_type()) {
				case rivet_serialized_type::boolean:
					for (auto index = 0u; index < count; index++) {
						entry.emplace_back(buffer->get<uint8_t>(cursor) != 0);
						cursor += sizeof(uint8_t);
					}
					break;
				case rivet_serialized_type::uint8:
					for (auto index = 0u; index < count; index++) {
						entry.emplace_back(static_cast<uint64_t>(buffer->get<uint8_t>(cursor)));
						cursor += sizeof(uint8_t);
					}
					break;
				case rivet_serialized_type::uint16:
					for (auto index = 0u; index < count; index++) {
						entry.emplace_back(static_cast<uint64_t>(buffer->get<uint16_t>(cursor)));
						cursor += sizeof(uint16_t);
					}
					break;
				case rivet_serialized_type::uint32:
					for (auto index = 0u; index < count; index++) {
						entry.emplace_back(static_cast<uint64_t>(buffer->get<uint32_t>(cursor)));
						cursor += sizeof(uint32_t);
					}
					break;
				case rivet_serialized_type::tuid:
				case rivet_serialized_type::instance_id: RIVET_DEBUG_BREAK; // fallthrough to uint64?
				case rivet_serialized_type::uint64:
					for (auto index = 0u; index < count; index++) {
						entry.emplace_back(buffer->get<uint64_t>(cursor));
						cursor += sizeof(uint64_t);
					}
					break;
				case rivet_serialized_type::int8:
					for (auto index = 0u; index < count; index++) {
						entry.emplace_back(static_cast<int64_t>(buffer->get<int8_t>(cursor)));
						cursor += sizeof(int8_t);
					}
					break;
				case rivet_serialized_type::int16:
					for (auto index = 0u; index < count; index++) {
						entry.emplace_back(static_cast<int64_t>(buffer->get<int16_t>(cursor)));
						cursor += sizeof(int16_t);
					}
					break;
				case rivet_serialized_type::int32:
					for (auto index = 0u; index < count; index++) {
						entry.emplace_back(static_cast<int64_t>(buffer->get<int32_t>(cursor)));
						cursor += sizeof(int32_t);
					}
					break;
				case rivet_serialized_type::int64:
					for (auto index = 0u; index < count; index++) {
						entry.emplace_back(buffer->get<int64_t>(cursor));
						cursor += sizeof(int64_t);
					}
					break;
				case rivet_serialized_type::float32:
					for (auto index = 0u; index < count; index++) {
						entry.emplace_back(static_cast<double>(buffer->get<float>(cursor)));
						cursor += sizeof(float);
					}
					break;
				case rivet_serialized_type::float64:
					for (auto index = 0u; index < count; index++) {
						entry.emplace_back(buffer->get<double>(cursor));
						cursor += sizeof(double);
					}
					break;
				case rivet_serialized_type::enum_value:
				case rivet_serialized_type::bitfield:
				case rivet_serialized_type::json:
				case rivet_serialized_type::file: RIVET_DEBUG_BREAK; // fallthrough to string?
				case rivet_serialized_type::string:
					for (auto index = 0u; index < count; index++) {
						auto string = buffer->get<rivet_serialized_string>(cursor);
						entry.emplace_back(buffer->to_string_view(cursor + sizeof(rivet_serialized_string), string.length));
						cursor += sizeof(rivet_serialized_string) + string.length + 1; // null byte.

						cursor = (cursor + 3) & ~3; // align to 4 bytes
					}
					break;
				case rivet_serialized_type::object:
					for (auto index = 0u; index < count; index++) {
						auto object = std::make_shared<serialized>(buffer->slice(cursor), dat1);
						entry.emplace_back(object);
						cursor += sizeof(rivet_serialized_header) + object->header.size;

						cursor = (cursor + 3) & ~3; // align to 4 bytes
					}
					break;
				case rivet_serialized_type::none:
					if (count < 1) { // only happens in save files?
						count = 1;
					}

					for (auto index = 0u; index < count; index++) {
						entry.emplace_back(std::nullptr_t());
					}

					cursor += count;
					break;
				case rivet_serialized_type::unknown14:
				default: throw rivet::not_implemented_error("serialized::serialized: unknown type");
			}
		}
	}
} // namespace rivet::ddl
