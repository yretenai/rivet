// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/serialization.hpp>
#include <rivet/hash/type_id.hpp>
#include <rivet/rivet_keywords.hpp>
#include <rivet/structures/rivet_serialization.hpp>

using namespace rivet;
using namespace rivet::structures;

namespace rivet {
	namespace structures {
		// UPDATE THE COMMENT IN rivet_serialization.hpp IF YOU CHANGE THE LOCATION OF THIS
		ankerl::unordered_dense::map<rivet_type_id, std::function<std::shared_ptr<rivet::structures::rivet_ddl_base>(const rivet::structures::rivet_serialized_object &)>> ddl_constructors;
	} // namespace structures

	namespace ddl {
		serialized::serialized(const std::shared_ptr<rivet_data_array> &data): rivet::structures::rivet_serialized_object(data) {
			if (host_buffer->size() < sizeof(rivet_serialized_header)) {
				throw std::runtime_error("Invalid buffer size");
			}

			header = host_buffer->get<rivet_serialized_header>(0);
			if (header.magic != magic_b) {
				throw std::runtime_error("Invalid magic");
			}

			buffer = data->slice(0, header.size);

			field_info = data->slice<rivet_serialized_field>(sizeof(rivet_serialized_header), header.node_count);
			auto field_name_offsets = data->slice<rivet_off>(sizeof(rivet_serialized_header) + sizeof(rivet_serialized_field) * header.node_count, header.node_count);

			for (auto field_name_offset : *field_name_offsets) {
				this->field_names.emplace_back(data->to_cstring_view(field_name_offset));
			}

			rivet_size cursor = sizeof(rivet_serialized_header) + sizeof(rivet_serialized_field) * header.node_count + sizeof(rivet_off) * header.node_count;
			for (const auto &field : *field_info) {
				auto count = field.get_count();
				if (field.get_unknown() != 0) {
					RIVET_DEBUG_BREAK;
				}

				auto &entry = values[field.type_id];

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
					case rivet_serialized_type::uint64:
					case rivet_serialized_type::tuid:
					case rivet_serialized_type::instance_id:
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
							cursor += sizeof(rivet_serialized_string) + string.length;
							cursor = (cursor + 3) & ~3; // align to 4 bytes
						}
					case rivet_serialized_type::object: throw rivet::not_implemented_error("serialized::serialized: object type not implemented");
					case rivet_serialized_type::none:
						for (auto index = 0u; index < count; index++) {
							entry.emplace_back(std::monostate());
						}
						break;
					case rivet_serialized_type::unknown19:
					default: throw rivet::not_implemented_error("serialized::serialized: unknown type");
				}
			}
		}

		auto
		serialized::to_json() const noexcept -> std::string {
			// todo
			return {};
		}
	} // namespace ddl
} // namespace rivet
