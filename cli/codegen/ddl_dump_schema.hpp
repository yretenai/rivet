// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

#include <unordered_set>
#include <variant>
#include <version>
#ifdef __cpp_lib_format
#include <format>
#else
#include <sstream>
#endif

#include <nlohmann/json.hpp>

#include <rivet/hash/type_id.hpp> // IWYU pragma: keep
#include <rivet/rivet_keywords.hpp>
#include <rivet/structures/rivet_serialization_type.hpp> // IWYU pragma: keep

#include "template.hpp"

enum class serialized_array_type : uint8_t {
	none,
	fixed,
	dynamic,
	hashmap
};

auto
to_hex(const uint64_t value) -> std::string {
#ifdef __cpp_lib_format
	return std::format("{:x}", value);
#else
	std::stringstream stream;
	stream << std::hex << value;
	return stream.str();
#endif
}

template <typename T>
auto
get_optional_json(const nlohmann::json &json, const char *property) -> std::optional<T> {
	auto iterator = json.find(property);
	if (iterator != json.end() && !iterator->is_null()) {
		return json.at(property).get<T>();
	}
	return std::nullopt;
}

struct name_info {
	std::string name {};
	rivet::rivet_type_id id {};

	void
	from_json(const nlohmann::json &json, const std::string &name_key = "name", const std::string &id_key = "type_id") {
		if (!name_key.empty()) {
			name = get_optional_json<std::string>(json, name_key.c_str()).value_or("");
		}

		id = (id_key.empty() ? std::nullopt : get_optional_json<rivet::rivet_type_id>(json, id_key.c_str())).value_or(rivet::hash::hash_type_id(name));
	}

	[[nodiscard]] auto
	get_id_hex() const -> std::string {
		return to_hex(id);
	}

	[[nodiscard]] auto
	get_name_safe() const -> std::string {
		if (name.empty()) {
			return "x" + get_id_hex();
		}
		return name;
	}
};

struct type_field_info {
	name_info name {};
	name_info type_name {};
	name_info allow_base_type {};
	rivet::structures::rivet_serialized_type type {};
	serialized_array_type array_type {};

	void
	from_json(const nlohmann::json &json) {
		name.from_json(json, "serialized_name");
		type_name.from_json(json, "", "type_id");
		allow_base_type.from_json(json, "clamp_type", "");
		type = static_cast<rivet::structures::rivet_serialized_type>(json["type"].get<int32_t>());
		array_type = static_cast<serialized_array_type>(json["array_type"].get<int32_t>());

		if (type == rivet::structures::rivet_serialized_type::enum_value) {
			type_name.id = json["enum_id"].get<rivet::rivet_type_id>();
		}
	}
};

struct struct_info {
	name_info name {};
	name_info base_name {};
	std::vector<type_field_info> fields {};
	std::vector<name_info> descendants {};

	void
	from_json(const nlohmann::json &json) {
		name.from_json(json, "name", "type_id");
		if (name.name == "WwiseEvent") { // duplicates with WWiseEvent, and in case-insensitive file systems, this will cause a collision
			name.name = "WwiseSoundEvent";
		}
		base_name.from_json(json, "", "parent_id");
		fields.reserve(json["fields"].size());
		for (const auto &field : json["fields"]) {
			fields.emplace_back();
			fields.back().from_json(field);
		}
	}
};

using root_info = name_info;

struct enum_value_info {
	name_info name {};
	name_info decl_name {};
	name_info friendly_name {};

	void
	from_json(const nlohmann::json &json) {
		name.from_json(json, "serialized_name", "id");
		decl_name = name;
		friendly_name.from_json(json, "name", "");
	}
};

struct enum_info {
	name_info name {};
	std::vector<enum_value_info> values {};

	void
	from_json(const nlohmann::json &json) {
		name.from_json(json, "serialized_name", "id");
		values.reserve(json["values"].size());
		for (const auto &value : json["values"]) {
			values.emplace_back();
			values.back().from_json(value);
		}
	}
};

struct bitset_value_info {
	name_info name {};
	name_info decl_name {};
	uint64_t value {};

	void
	from_json(const nlohmann::json &json) {
		name.from_json(json, "name", "hash");
		decl_name = name;
		value = json["value"].get<uint64_t>();
	}

	[[nodiscard]] auto
	get_value_hex() const -> std::string {
		return to_hex(value);
	}
};

struct bitset_info {
	name_info name {};
	std::vector<bitset_value_info> values {};

	void
	from_json(const nlohmann::json &json) {
		name.from_json(json, "name", "id");
		values.reserve(json["values"].size());
		for (const auto &value : json["values"]) {
			values.emplace_back();
			values.back().from_json(value);
		}
	}
};

struct dump_root {
	std::vector<root_info> roots {};
	std::vector<std::shared_ptr<struct_info>> structs {};
	std::vector<std::shared_ptr<enum_info>> enums {};
	std::vector<std::shared_ptr<bitset_info>> bitsets {};
	ankerl::unordered_dense::map<uint32_t, std::variant<std::shared_ptr<struct_info>, std::shared_ptr<enum_info>, std::shared_ptr<bitset_info>>> lookup {};
	ankerl::unordered_dense::map<rivet::rivet_type_id, std::unordered_set<rivet::structures::rivet_serialized_type>> missing {};

	void
	sanity() {
		std::unordered_set<std::string> struct_names_lower;

		for (auto &struct_ : structs) {
			if (struct_->name.name.empty()) {
				throw std::runtime_error("struct name is empty");
			}

			auto lower_name = std::string(struct_->name.name);
			std::transform(lower_name.begin(), lower_name.end(), lower_name.begin(), [](unsigned char test) { return static_cast<char>(std::tolower(test)); });

			if (struct_names_lower.find(lower_name) != struct_names_lower.end()) {
				throw std::runtime_error("struct name is not unique");
			}

			struct_names_lower.insert(lower_name);

			if (std::find(reserved_keywords.begin(), reserved_keywords.end(), struct_->name.name) != reserved_keywords.end()) {
				throw std::runtime_error("struct name is a reserved keyword");
			}

			if (std::isalpha(struct_->name.name[0]) == 0 && struct_->name.name[0] != '_') {
				throw std::runtime_error("struct name does not start with a letter");
			}

			if (!std::all_of(struct_->name.name.begin(), struct_->name.name.end(), [](unsigned char test) { return std::isalnum(test) != 0 || test == '_'; })) {
				throw std::runtime_error("struct name is not alphanumeric");
			}

			for (auto &field : struct_->fields) {
				if (field.name.name.empty()) {
					throw std::runtime_error("field name is empty");
				}

				if (std::find(reserved_keywords.begin(), reserved_keywords.end(), field.name.name) != reserved_keywords.end()) {
					throw std::runtime_error("field name is a reserved keyword");
				}

				if (std::isalpha(field.name.name[0]) == 0 && field.name.name[0] != '_') {
					throw std::runtime_error("field name does not start with a letter");
				}

				if (!std::all_of(field.name.name.begin(), field.name.name.end(), [](unsigned char test) { return std::isalnum(test) != 0 || test == '_'; })) {
					throw std::runtime_error("field name is not alphanumeric");
				}

				if (field.type == rivet::structures::rivet_serialized_type::bitfield && field.array_type != serialized_array_type::none) {
					throw std::runtime_error("field is an array and a bitfield, this is uncharted territory");
				}

				if (lookup.find(field.type_name.id) == lookup.end()) {
					missing[field.type_name.id].insert(field.type);
					continue;
				}
			}
		}

		for (auto &enum_ : enums) {
			if (!std::all_of(enum_->name.name.begin(), enum_->name.name.end(), [](unsigned char test) { return std::isalnum(test) != 0 || test == '_'; })) {
				throw std::runtime_error("enum name is not alphanumeric");
			}

			if (std::find(reserved_keywords.begin(), reserved_keywords.end(), enum_->name.name) != reserved_keywords.end()) {
				throw std::runtime_error("enum name is a reserved keyword");
			}

			if (!enum_->name.name.empty() && std::isalpha(enum_->name.name[0]) == 0 && enum_->name.name[0] != '_') {
				throw std::runtime_error("enum name does not start with a letter");
			}

			for (auto &value : enum_->values) {
				if (value.name.name.empty()) {
					throw std::runtime_error("enum value name is empty");
				}

				if (std::find(reserved_keywords.begin(), reserved_keywords.end(), value.name.name) != reserved_keywords.end()) {
					throw std::runtime_error("enum value name is a reserved keyword");
				}

				if (std::isalpha(value.name.name[0]) == 0 && value.name.name[0] != '_') {
					throw std::runtime_error("enum value name does not start with a letter");
				}

				if (!std::all_of(value.name.name.begin(), value.name.name.end(), [](unsigned char test) { return std::isalnum(test) != 0 || test == '_'; })) {
					throw std::runtime_error("enum value name is not alphanumeric");
				}
			}
		}

		for (auto &bitset : bitsets) {
			if (!std::all_of(bitset->name.name.begin(), bitset->name.name.end(), [](unsigned char test) { return std::isalnum(test) != 0 || test == '_'; })) {
				throw std::runtime_error("bitset name is not alphanumeric");
			}

			if (std::find(reserved_keywords.begin(), reserved_keywords.end(), bitset->name.name) != reserved_keywords.end()) {
				throw std::runtime_error("bitset name is a reserved keyword");
			}

			if (!bitset->name.name.empty() && std::isalpha(bitset->name.name[0]) == 0 && bitset->name.name[0] != '_') {
				throw std::runtime_error("bitset name does not start with a letter");
			}

			for (auto &value : bitset->values) {
				if (value.name.name.empty()) {
					throw std::runtime_error("bitset value name is empty");
				}

				if (std::find(reserved_keywords.begin(), reserved_keywords.end(), value.name.name) != reserved_keywords.end()) {
					throw std::runtime_error("bitset value name is a reserved keyword");
				}

				if (std::isalpha(value.name.name[0]) == 0 && value.name.name[0] != '_') {
					throw std::runtime_error("bitset value name does not start with a letter");
				}

				if (!std::all_of(value.name.name.begin(), value.name.name.end(), [](unsigned char test) { return std::isalnum(test) != 0 || test == '_'; })) {
					throw std::runtime_error("bitset value name is not alphanumeric");
				}
			}
		}
	}

	void
	fixup() {
		for (auto &struct_ : structs) {
			lookup[struct_->name.id] = struct_;
		}

		for (auto &enum_ : enums) {
			lookup[enum_->name.id] = enum_;

			for (auto &value : enum_->values) {
				// check if alphanum and starts with a letter
				if (!value.friendly_name.name.empty() && (std::isalpha(value.friendly_name.name[0]) != 0 || value.friendly_name.name[0] == '_') &&
					std::all_of(value.friendly_name.name.begin(), value.friendly_name.name.end(), [](unsigned char test) { return std::isalnum(test) != 0 || test == '_' || test == ' '; })) {
					value.name = value.friendly_name;
					std::replace(value.name.name.begin(), value.name.name.end(), ' ', '_');
				} else {
					// remove leading k
					if (value.name.name.size() >= 2 && value.name.name.starts_with('k') && std::isdigit(value.name.name[1]) == 0) {
						value.name.name = value.name.name.substr(1);
					}
				}
			}
		}

		for (auto &bitset : bitsets) {
			lookup[bitset->name.id] = bitset;

			for (auto &value : bitset->values) {
				// remove leading k
				if (value.name.name.size() >= 2 && value.name.name.starts_with('k') && std::isdigit(value.name.name[1]) == 0) {
					value.name.name = value.name.name.substr(1);
				}
			}
		}

		for (auto &struct_ : structs) {
			if (struct_->base_name.id != 0) {
				auto base_type = lookup[struct_->base_name.id];
				if (std::holds_alternative<std::shared_ptr<struct_info>>(base_type)) {
					auto base_struct = std::get<std::shared_ptr<struct_info>>(base_type);
					if (struct_->base_name.name.empty()) {
						struct_->base_name.name = base_struct->name.name;
					}
					base_struct->descendants.emplace_back(struct_->name);
				}
			}

			for (auto &field : struct_->fields) {
				if (field.type_name.name.empty()) {
					if (lookup.find(field.type_name.id) == lookup.end()) {
						continue;
					}

					const auto &type = lookup[field.type_name.id];
					std::visit([&field](auto &&arg) { field.type_name.name = arg->name.name; }, type);
				}
			}
		}
	}

	void
	guess() {
		ankerl::unordered_dense::map<uint32_t, std::unordered_set<std::string>> name_counts {};
		for (auto &struct_ : structs) {
			for (auto &field : struct_->fields) {
				name_counts[field.type_name.id].insert(field.name.name);
			}
		}

		for (auto &enum_info : enums) {
			if (!enum_info->name.name.empty()) {
				continue;
			}

			const auto &field_names = name_counts[enum_info->name.id];

			auto target_hash = enum_info->name.id;

			for (const auto &field_name : field_names) {
				if (rivet::hash::hash_type_id(field_name) == target_hash) {
					enum_info->name.name = field_name;
					break;
				}

				// Platform -> Platforms
				auto plural = field_name + "s";
				if (rivet::hash::hash_type_id(plural) == target_hash) {
					enum_info->name.name = plural;
					break;
				}

				// Country -> Countries
				auto plural2 = field_name + "es";
				if (rivet::hash::hash_type_id(plural2) == target_hash) {
					enum_info->name.name = plural2;
					break;
				}

				// Category -> Categories
				if (field_name.size() > 1) {
					auto plural3 = field_name.substr(0, field_name.size() - 1) + "ies";
					if (rivet::hash::hash_type_id(plural3) == target_hash) {
						enum_info->name.name = plural3;
						break;
					}
				}
			}
		}

		const std::array<std::string, 7> bitset_suffixes = { "", "Flags", "Bits", "Flag", "Bit", "Bitset", "Game" };

		for (auto &bitset_info : bitsets) {
			if (!bitset_info->name.name.empty()) {
				continue;
			}

			const auto &field_names = name_counts[bitset_info->name.id];

			auto target_hash = bitset_info->name.id;

			for (const auto &field_name : field_names) {
				if (rivet::hash::hash_type_id(field_name) == target_hash) {
					bitset_info->name.name = field_name;
					break;
				}

				for (const auto &suffix : bitset_suffixes) {
					// Platform -> Platforms
					auto plural = std::string(field_name).append("s").append(suffix);
					if (rivet::hash::hash_type_id(plural) == target_hash) {
						bitset_info->name.name = plural;
						break;
					}

					// Country -> Countries
					auto plural2 = std::string(field_name).append("es").append(suffix);
					if (rivet::hash::hash_type_id(plural2) == target_hash) {
						bitset_info->name.name = plural2;
						break;
					}

					// Category -> Categories
					if (field_name.size() > 1) {
						auto plural3 = std::string(field_name.substr(0, field_name.size() - 1)).append("ies").append(suffix);
						if (rivet::hash::hash_type_id(plural3) == target_hash) {
							bitset_info->name.name = plural3;
							break;
						}
					}
				}
			}
		}
	}

	void
	from_json(const nlohmann::json &json) {
		roots.reserve(json["root_types"].size());
		for (const auto &root : json["root_types"]) {
			roots.emplace_back();
			roots.back().from_json(root);
		}

		structs.reserve(json["types"].size());
		for (const auto &struct_ : json["types"]) {
			auto ptr = std::make_shared<struct_info>();
			ptr->from_json(struct_);
			structs.emplace_back(ptr);
		}

		enums.reserve(json["enums"].size());
		for (const auto &enum_ : json["enums"]) {
			auto ptr = std::make_shared<enum_info>();
			ptr->from_json(enum_);
			enums.emplace_back(ptr);
		}

		bitsets.reserve(json["bitsets"].size());
		for (const auto &bitset : json["bitsets"]) {
			auto ptr = std::make_shared<bitset_info>();
			ptr->from_json(bitset);
			bitsets.emplace_back(ptr);
		}

		guess();
		fixup();
		sanity();
	}
};
