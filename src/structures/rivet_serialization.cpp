// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#define RIVET_USE_NLOHMANN

#include <nlohmann/json.hpp>

#include <rivet/ddl/serialization.hpp>
#include <rivet/hash/type_id.hpp>
#include <rivet/rivet_keywords.hpp>
#include <rivet/structures/rivet_serialization.hpp>

using namespace rivet;
using namespace rivet::structures;

namespace rivet::structures {
	ankerl::unordered_dense::map<rivet_type_id, rivet_ddl_ctor> ddl_constructors;

	auto
	get_ddl_constructors() -> ankerl::unordered_dense::map<rivet_type_id, rivet_ddl_ctor> & {
		return ddl_constructors;
	}

	rivet_serialized_object::rivet_serialized_object(const std::shared_ptr<rivet_data_array> &buffer): host_buffer(buffer) { }

	[[nodiscard]] auto
	rivet_serialized_object::get_field(rivet_type_id field_id) const noexcept -> std::optional<std::vector<rivet::structures::rivet_serialized_value>> {
		auto entry = values.find(field_id);
		if (entry == values.end()) {
			return std::nullopt;
		}

		return entry->second;
	}

	[[nodiscard]] auto
	rivet_serialized_object::get_field(const std::string_view &name) const noexcept -> std::optional<std::vector<rivet::structures::rivet_serialized_value>> {
		return get_field(rivet::hash::hash_type_id(name));
	}

	[[nodiscard]] auto
	rivet_serialized_object::has_field(rivet_type_id field_id) const noexcept -> bool {
		return values.find(field_id) != values.end();
	}

	[[nodiscard]] auto
	rivet_serialized_object::has_field(const std::string_view &name) const noexcept -> bool {
		return has_field(rivet::hash::hash_type_id(name));
	}

	[[nodiscard]] auto
	rivet_serialized_object::construct(rivet_type_id type_id) const noexcept -> std::shared_ptr<rivet_ddl_base> {
		if (ddl_constructors.contains(type_id)) { // no polymorphic handling because ddl constructors will only have root types.
			return ddl_constructors[type_id](shared_from_this());
		}

		return nullptr;
	}

	[[nodiscard]] auto
	rivet_serialized_object::get_uint64(rivet_type_id field_id) const noexcept -> uint64_t {
		return get_field<uint64_t>(field_id);
	}

	[[nodiscard]] auto
	rivet_serialized_object::get_uint32(rivet_type_id field_id) const noexcept -> uint32_t {
		return get_field<int64_t, uint32_t>(field_id);
	}

	[[nodiscard]] auto
	rivet_serialized_object::get_uint16(rivet_type_id field_id) const noexcept -> uint16_t {
		return get_field<int64_t, uint16_t>(field_id);
	}

	[[nodiscard]] auto
	rivet_serialized_object::get_uint8(rivet_type_id field_id) const noexcept -> uint8_t {
		return get_field<int64_t, uint8_t>(field_id);
	}

	[[nodiscard]] auto
	rivet_serialized_object::get_int64(rivet_type_id field_id) const noexcept -> int64_t {
		return get_field<int64_t>(field_id);
	}

	[[nodiscard]] auto
	rivet_serialized_object::get_int32(rivet_type_id field_id) const noexcept -> int32_t {
		return get_field<int64_t, int32_t>(field_id);
	}

	[[nodiscard]] auto
	rivet_serialized_object::get_int16(rivet_type_id field_id) const noexcept -> int16_t {
		return get_field<int64_t, int16_t>(field_id);
	}

	[[nodiscard]] auto
	rivet_serialized_object::get_int8(rivet_type_id field_id) const noexcept -> int8_t {
		return get_field<int64_t, int8_t>(field_id);
	}

	[[nodiscard]] auto
	rivet_serialized_object::get_double(rivet_type_id field_id) const noexcept -> double {
		return get_field<double>(field_id);
	}

	[[nodiscard]] auto
	rivet_serialized_object::get_float(rivet_type_id field_id) const noexcept -> float {
		return get_field<double, float>(field_id);
	}

	[[nodiscard]] auto
	rivet_serialized_object::get_bool(rivet_type_id field_id) const noexcept -> bool {
		return get_field<bool>(field_id);
	}

	[[nodiscard]] auto
	rivet_serialized_object::get_string(rivet_type_id field_id) const noexcept -> std::string_view {
		return get_field<std::string_view>(field_id);
	}

	[[nodiscard]] auto
	rivet_serialized_object::get_uint64s(rivet_type_id field_id) const noexcept -> std::vector<uint64_t> {
		return get_fields<uint64_t>(field_id);
	}

	[[nodiscard]] auto
	rivet_serialized_object::get_uint32s(rivet_type_id field_id) const noexcept -> std::vector<uint32_t> {
		return get_fields<uint64_t, uint32_t>(field_id);
	}

	[[nodiscard]] auto
	rivet_serialized_object::get_uint16s(rivet_type_id field_id) const noexcept -> std::vector<uint16_t> {
		return get_fields<uint64_t, uint16_t>(field_id);
	}

	[[nodiscard]] auto
	rivet_serialized_object::get_uint8s(rivet_type_id field_id) const noexcept -> std::vector<uint8_t> {
		return get_fields<uint64_t, uint8_t>(field_id);
	}

	[[nodiscard]] auto
	rivet_serialized_object::get_int64s(rivet_type_id field_id) const noexcept -> std::vector<int64_t> {
		return get_fields<int64_t>(field_id);
	}

	[[nodiscard]] auto
	rivet_serialized_object::get_int32s(rivet_type_id field_id) const noexcept -> std::vector<int32_t> {
		return get_fields<int64_t, int32_t>(field_id);
	}

	[[nodiscard]] auto
	rivet_serialized_object::get_int16s(rivet_type_id field_id) const noexcept -> std::vector<int16_t> {
		return get_fields<int64_t, int16_t>(field_id);
	}

	[[nodiscard]] auto
	rivet_serialized_object::get_int8s(rivet_type_id field_id) const noexcept -> std::vector<int8_t> {
		return get_fields<int64_t, int8_t>(field_id);
	}

	[[nodiscard]] auto
	rivet_serialized_object::get_doubles(rivet_type_id field_id) const noexcept -> std::vector<double> {
		return get_fields<double>(field_id);
	}

	[[nodiscard]] auto
	rivet_serialized_object::get_floats(rivet_type_id field_id) const noexcept -> std::vector<float> {
		return get_fields<double, float>(field_id);
	}

	[[nodiscard]] auto
	rivet_serialized_object::get_bools(rivet_type_id field_id) const noexcept -> std::vector<bool> {
		return get_fields<bool>(field_id);
	}

	[[nodiscard]] auto
	rivet_serialized_object::get_strings(rivet_type_id field_id) const noexcept -> std::vector<std::string_view> {
		return get_fields<std::string_view>(field_id);
	}

	auto
	rivet_serialized_object::to_json(const int indent, const char indent_char, const bool ensure_ascii) const -> std::string {
		return to_nlohmann_json().dump(indent, indent_char, ensure_ascii);
	}

	auto
	rivet_serialized_object::to_nlohmann_json() const -> nlohmann::json {
		auto json = nlohmann::json();

		for (const auto &[field_id, field_value] : values) {
			auto field_name_it = field_names.find(field_id);
			const std::string field_name = field_name_it != field_names.end() ? std::string(field_name_it->second) : std::to_string(field_id);

			if (field_value.empty()) {
				json[field_name] = nullptr;
				continue;
			}

			if (field_value.size() == 1) {
				const auto &value = field_value.at(0);

				std::visit(
					[&json, field_name](auto &&arg) {
						using T = std::decay_t<decltype(arg)>;
						if constexpr (std::is_same_v<T, uint64_t> || std::is_same_v<T, int64_t> || std::is_same_v<T, double> || std::is_same_v<T, bool> || std::is_same_v<T, nullptr_t>) {
							json[field_name] = arg;
							return;
						} else if constexpr (std::is_same_v<T, std::string_view>) {
							json[field_name] = std::string(arg);
							return;
						} else if constexpr (std::is_same_v<T, std::shared_ptr<rivet_serialized_object>>) {
							json[field_name] = arg->to_nlohmann_json();
							return;
						}
					},
					value);
			} else {
				auto array = nlohmann::json::array();

				for (const auto &value : field_value) {
					std::visit(
						[&array](auto &&arg) {
							using T = std::decay_t<decltype(arg)>;
							if constexpr (std::is_same_v<T, uint64_t> || std::is_same_v<T, int64_t> || std::is_same_v<T, double> || std::is_same_v<T, bool> || std::is_same_v<T, nullptr_t>) {
								array.emplace_back(arg);
								return;
							} else if constexpr (std::is_same_v<T, std::string_view>) {
								array.emplace_back(std::string(arg));
								return;
							} else if constexpr (std::is_same_v<T, std::shared_ptr<rivet_serialized_object>>) {
								array.emplace_back(arg->to_nlohmann_json());
								return;
							}
						},
						value);
				}

				json[field_name] = array;
			}
		}

		return json;
	}

	rivet_ddl_base::rivet_ddl_base(const std::shared_ptr<const rivet_serialized_object> &serialized): host_buffer(serialized->host_buffer) { }
} // namespace rivet::structures
