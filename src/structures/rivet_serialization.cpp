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

	rivet_serialized_object::rivet_serialized_object(const std::shared_ptr<rivet_data_array> &buffer): host_buffer(buffer) { }

	[[nodiscard]] auto RIVET_INLINE
	rivet_serialized_object::get_field(const rivet_type_id &field_id) const noexcept -> std::optional<std::vector<rivet::structures::rivet_serialized_value>> {
		auto entry = values.find(field_id);
		if (entry == values.end()) {
			return std::nullopt;
		}

		return entry->second;
	}

	[[nodiscard]] auto RIVET_INLINE
	rivet_serialized_object::get_field(const std::string_view &name) const noexcept -> std::optional<std::vector<rivet::structures::rivet_serialized_value>> {
		return get_field(rivet::hash::hash_type_id(name));
	}

	[[nodiscard]] auto RIVET_INLINE
	rivet_serialized_object::has_field(const rivet_type_id &field_id) const noexcept -> bool {
		return values.find(field_id) != values.end();
	}

	[[nodiscard]] auto RIVET_INLINE
	rivet_serialized_object::has_field(const std::string_view &name) const noexcept -> bool {
		return has_field(rivet::hash::hash_type_id(name));
	}

	[[nodiscard]] auto
	rivet_serialized_object::unwrap_into(rivet_type_id type_id) const noexcept -> std::shared_ptr<rivet_ddl_base> {
		if (ddl_constructors.contains(type_id)) { // no polymorphic handling because ddl constructors will only have root types.
			return ddl_constructors[type_id](shared_from_this());
		}

		return nullptr;
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
