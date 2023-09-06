// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

#include <cstdint>
#include <iosfwd>
#include <memory>
#include <string_view>
#include <unordered_set>
#include <variant>
#include <vector>
#include <optional>

#include <ankerl/unordered_dense.h>

#ifdef RIVET_USE_NLOHMANN
	#include <nlohmann/json.hpp>
#endif

#include <rivet/rivet_array.hpp>
#include <rivet/rivet_keywords.hpp>

#include <rivet/structures/rivet_serialization_type.hpp> // IWYU pragma: export

namespace rivet::structures {

	struct rivet_serialized_header {
		uint32_t zero;
		uint32_t magic;
		rivet_size node_count;
		rivet_size size;
	};

	static_assert(sizeof(rivet_serialized_header) == 16);

	struct rivet_serialized_field {
		rivet_type_id type_id;
		uint32_t meta;

		[[nodiscard]] auto
		get_count() const noexcept -> uint32_t {
			return (meta & 0x00FFFFFF) >> 4;
		}

		[[nodiscard]] auto
		get_type() const noexcept -> rivet_serialized_type {
			return static_cast<rivet_serialized_type>(meta >> 24);
		}

		[[nodiscard]] auto
		get_unknown() const noexcept -> uint32_t {
			return meta & 0x0000000F;
		}
	};

	static_assert(sizeof(rivet_serialized_field) == 8);

	struct rivet_serialized_string {
		rivet_size length;
		rivet_hash hash;
		rivet_checksum checksum;
	};

	static_assert(sizeof(rivet_serialized_string) == 16);

	// this is a circular dependency hell-hole, the order of these declarations is important.
	struct rivet_serialized_object;

	struct RIVET_SHARED rivet_ddl_base {
		std::shared_ptr<rivet_data_array> host_buffer;

		explicit rivet_ddl_base() = default;
		explicit rivet_ddl_base(const std::shared_ptr<const rivet_serialized_object> &serialized);
		virtual ~rivet_ddl_base() = default;
		rivet_ddl_base(const rivet_ddl_base &other) = default;
		rivet_ddl_base(rivet_ddl_base &&other) noexcept = default;
		auto
		operator=(const rivet_ddl_base &other) -> rivet_ddl_base & = default;
		auto
		operator=(rivet_ddl_base &&other) noexcept -> rivet_ddl_base & = default;

		[[nodiscard]] virtual auto
		get_type_id() const noexcept -> rivet_type_id = 0;

		[[nodiscard]] virtual auto
		get_type_name() const noexcept -> std::string_view = 0;

		static auto
		from_substruct([[maybe_unused]] rivet_type_id type_id, [[maybe_unused]] const std::shared_ptr<const rivet_serialized_object> &serialized) -> std::shared_ptr<rivet_ddl_base> {
			return nullptr;
		}
	};

	using rivet_serialized_value = std::variant<uint64_t, int64_t, double, bool, std::nullptr_t, std::string_view, std::shared_ptr<rivet_serialized_object>>;

	using rivet_ddl_ctor = std::function<std::shared_ptr<rivet::structures::rivet_ddl_base>(const std::shared_ptr<const rivet::structures::rivet_serialized_object> &)>;

	auto RIVET_SHARED
	get_ddl_constructors() -> ankerl::unordered_dense::map<rivet_type_id, rivet_ddl_ctor> &;

	template <typename T>
		requires(std::is_base_of_v<rivet_ddl_base, T> && !std::is_same_v<rivet_ddl_base, T>)
	auto
	register_ddl_type() -> void {
		get_ddl_constructors().emplace(T::type_id, [](const std::shared_ptr<const rivet_serialized_object> &serialized) -> std::shared_ptr<rivet_ddl_base> { return std::make_shared<T>(serialized); });
	}

	struct RIVET_SHARED rivet_serialized_object : std::enable_shared_from_this<rivet_serialized_object> {
		ankerl::unordered_dense::map<uint32_t, std::vector<rivet_serialized_value>> values = {};
		ankerl::unordered_dense::map<uint32_t, std::string_view> field_names;
		std::shared_ptr<rivet_data_array> host_buffer;
		rivet_serialized_header header = {};

		explicit rivet_serialized_object() = default;
		explicit rivet_serialized_object(const std::shared_ptr<rivet_data_array> &buffer);

		template <typename T, typename TCast = T>
			requires(std::is_same_v<T, uint64_t> || std::is_same_v<T, int64_t> || std::is_same_v<T, double> || std::is_same_v<T, bool> || std::is_same_v<T, bool> ||
					 std::is_same_v<T, std::string_view> || std::is_same_v<T, std::shared_ptr<rivet_serialized_object>> || std::is_same_v<T, std::shared_ptr<rivet_data_array>>)
		auto
		get_field(rivet_type_id field_id) const noexcept -> TCast {
			auto entry = values.find(field_id);
			if (entry == values.end()) {
				return {};
			}

			if (entry->second.empty()) {
				return {};
			}

			auto variant = entry->second.at(0);
			if (!std::holds_alternative<T>(variant)) {
				return {};
			}

			return static_cast<TCast>(std::get<T>(variant));
		}

		template <typename T, typename TCast = T>
			requires(std::is_same_v<T, uint64_t> || std::is_same_v<T, int64_t> || std::is_same_v<T, double> || std::is_same_v<T, bool> || std::is_same_v<T, bool> ||
					 std::is_same_v<T, std::string_view> || std::is_same_v<T, std::shared_ptr<rivet_serialized_object>> || std::is_same_v<T, std::shared_ptr<rivet_data_array>>)
		auto
		get_field(const std::string_view &name) const noexcept -> TCast {
			return get_field<T, TCast>(rivet::hash::hash_type_id(name));
		}

		template <typename T, typename TCast = T>
			requires(std::is_same_v<T, uint64_t> || std::is_same_v<T, int64_t> || std::is_same_v<T, double> || std::is_same_v<T, bool> || std::is_same_v<T, bool> ||
					 std::is_same_v<T, std::string_view> || std::is_same_v<T, std::shared_ptr<rivet_serialized_object>> || std::is_same_v<T, std::shared_ptr<rivet_data_array>>)
		auto
		get_fields(rivet_type_id field_id) const noexcept -> std::vector<TCast> {
			auto entry = values.find(field_id);
			if (entry == values.end()) {
				return {};
			}

			std::vector<TCast> result;
			for (const auto &variant : entry->second) {
				if (std::holds_alternative<T>(variant)) {
					result.emplace_back(static_cast<TCast>(std::get<T>(variant)));
				}
			}

			return result;
		}

		template <typename T, typename TCast = T>
			requires(std::is_same_v<T, uint64_t> || std::is_same_v<T, int64_t> || std::is_same_v<T, double> || std::is_same_v<T, bool> || std::is_same_v<T, std::string_view> ||
					 std::is_same_v<T, std::shared_ptr<rivet_serialized_object>> || std::is_same_v<T, std::shared_ptr<rivet_data_array>>)
		auto
		get_fields(const std::string_view &name) const noexcept -> std::vector<TCast> {
			return get_fields<T, TCast>(rivet::hash::hash_type_id(name));
		}

		template <typename T, size_t N, typename TCast = T>
			requires(std::is_enum_v<T>)
		auto
		get_enum(rivet_type_id field_id, const std::array<std::string_view, N> &enum_values) const noexcept -> T {
			auto value = values.find(field_id);
			if (value == values.end()) {
				return {};
			}

			if (value->second.empty()) {
				return {};
			}

			auto variant = value->second.at(0);
			if (std::holds_alternative<uint64_t>(variant)) {
				return static_cast<T>(std::get<uint64_t>(variant));
			}

			if (std::holds_alternative<int64_t>(variant)) {
				return static_cast<T>(std::get<int64_t>(variant));
			}

			if (std::holds_alternative<std::string_view>(variant)) {
				auto str = std::get<std::string_view>(variant);
				for (auto i = 0u; i < N; i++) {
					if (str == enum_values.at(i)) {
						return static_cast<T>(i);
					}
				}
			}

			return {};
		}

		template <typename T, size_t N, typename TCast = T>
			requires(std::is_enum_v<T>)
		auto
		get_enum(const std::string_view &name, const std::array<std::string_view, N> &enum_values) const noexcept -> T {
			return get_enum<T, N, TCast>(rivet::hash::hash_type_id(name), enum_values);
		}

		template <typename T, size_t N, typename TCast = T>
			requires(std::is_enum_v<T>)
		auto
		get_enums(rivet_type_id field_id, const std::array<std::string_view, N> &enum_values) const noexcept -> std::vector<T> {
			std::vector<T> result;
			auto value = values.find(field_id);
			if (value == values.end() || value->second.empty()) {
				return result;
			}

			result.reserve(value->second.size());

			for (const auto &enum_value : value->second) {
				if (std::holds_alternative<uint64_t>(enum_value)) {
					result.emplace_back(static_cast<T>(std::get<uint64_t>(enum_value)));
				} else if (std::holds_alternative<int64_t>(enum_value)) {
					result.emplace_back(static_cast<T>(std::get<int64_t>(enum_value)));
				} else if (std::holds_alternative<std::string_view>(enum_value)) {
					auto str = std::get<std::string_view>(enum_value);
					for (auto i = 0u; i < N; i++) {
						if (str == enum_values.at(i)) {
							result.emplace_back(static_cast<T>(i));
							break;
						}
					}
				}
			}

			return result;
		}

		template <typename T, size_t N, typename TCast = T>
			requires(std::is_enum_v<T>)
		auto
		get_enums(const std::string_view &name, const std::array<std::string_view, N> &enum_values) const noexcept -> std::vector<T> {
			return get_enums<T, N, TCast>(rivet::hash::hash_type_id(name), enum_values);
		}

		template <typename T, size_t N, typename TCast = T>
			requires(std::is_enum_v<T>)
		auto
		get_bitset(rivet_type_id field_id, const std::array<std::tuple<std::string_view, uint64_t>, N> &bitset_values) const noexcept -> T {
			auto value = values.find(field_id);
			if (value == values.end()) {
				return {};
			}

			if (value->second.empty()) {
				return {};
			}

			uint64_t result {};

			for (const auto &variant : value->second) {
				if (std::holds_alternative<uint64_t>(variant)) {
					result |= std::get<uint64_t>(variant);
				} else if (std::holds_alternative<int64_t>(variant)) {
					result |= static_cast<uint64_t>(std::get<int64_t>(variant));
				} else if (std::holds_alternative<std::string_view>(variant)) {
					auto str = std::get<std::string_view>(variant);
					for (auto i = 0u; i < N; i++) {
						if (str == std::get<0>(bitset_values.at(i))) {
							result |= std::get<1>(bitset_values.at(i));
							break;
						}
					}
				}
			}

			return static_cast<T>(result);
		}

		template <typename T, size_t N, typename TCast = T>
			requires(std::is_enum_v<T>)
		auto
		get_bitset(const std::string_view &name, const std::array<std::tuple<std::string_view, uint64_t>, N> &bitset_values) const noexcept -> T {
			return get_bitset<T, N, TCast>(rivet::hash::hash_type_id(name), bitset_values);
		}

		template <typename T = rivet_ddl_base>
			requires(std::is_base_of_v<rivet::structures::rivet_ddl_base, T> && !std::is_same_v<rivet::structures::rivet_ddl_base, T>)
		[[nodiscard]] auto
		unwrap_this_into() const noexcept -> std::shared_ptr<T> {
			if (values.size() == 2) {
				auto has_obj = has_field(0x6c33fda5); // "Obj"
				if (has_obj) {
					auto obj = get_field<std::shared_ptr<rivet_serialized_object>>(0x6c33fda5); // "Obj"
					auto type = get_field<std::string_view>(0xbc4e9799);						// "Type"
					auto type_hash = rivet::hash::hash_type_id(type);
					auto instance = T::from_substruct(type_hash, obj);
					if (instance != nullptr) {
						return std::reinterpret_pointer_cast<T>(instance);
					}
				}
			}

			return std::make_shared<T>(shared_from_this());
		}

		template <typename T = rivet_ddl_base>
			requires(std::is_base_of_v<rivet::structures::rivet_ddl_base, T> && !std::is_same_v<rivet::structures::rivet_ddl_base, T>)
		[[nodiscard]] auto
		unwrap_into(rivet_type_id type_id) const noexcept -> std::shared_ptr<T> {
			auto value = get_field<std::shared_ptr<rivet_serialized_object>>(type_id);

			if (value != nullptr) {
				return value->unwrap_this_into<T>();
			}

			return nullptr;
		}

		template <typename T = rivet_ddl_base>
			requires(std::is_base_of_v<rivet::structures::rivet_ddl_base, T> && !std::is_same_v<rivet::structures::rivet_ddl_base, T>)
		[[nodiscard]] auto
		unwrap_into(const std::string_view &type_id) const noexcept -> std::shared_ptr<T> {
			return unwrap_into<T>(rivet::hash::hash_type_id(type_id));
		}

		template <typename T = rivet_ddl_base>
			requires(std::is_base_of_v<rivet::structures::rivet_ddl_base, T> && !std::is_same_v<rivet::structures::rivet_ddl_base, T>)
		[[nodiscard]] auto
		unwrap_into_many(rivet_type_id type_id) const noexcept -> std::vector<std::shared_ptr<T>> {
			auto result = std::vector<std::shared_ptr<T>>();

			auto instance_values = get_fields<std::shared_ptr<rivet_serialized_object>>(type_id);
			for (const auto &value : instance_values) {
				auto instance = value->unwrap_this_into<T>();
				if (instance != nullptr) {
					result.emplace_back(instance);
				}
			}

			return result;
		}

		template <typename T = rivet_ddl_base>
			requires(std::is_base_of_v<rivet::structures::rivet_ddl_base, T> && !std::is_same_v<rivet::structures::rivet_ddl_base, T>)
		[[nodiscard]] auto
		unwrap_into_many(const std::string_view &type_id) const noexcept -> std::vector<std::shared_ptr<T>> {
			return unwrap_into_many<T>(rivet::hash::hash_type_id(type_id));
		}

		[[nodiscard]] auto
		get_field(rivet_type_id field_id) const noexcept -> std::optional<std::vector<rivet::structures::rivet_serialized_value>>;

		[[nodiscard]] auto
		get_field(const std::string_view &name) const noexcept -> std::optional<std::vector<rivet::structures::rivet_serialized_value>>;

		[[nodiscard]] auto
		has_field(rivet_type_id field_id) const noexcept -> bool;

		[[nodiscard]] auto
		has_field(const std::string_view &name) const noexcept -> bool;

		[[nodiscard]] auto
		construct(rivet_type_id type_id) const noexcept -> std::shared_ptr<rivet_ddl_base>;

		[[nodiscard]] auto
		construct(const std::string_view &type_id) const noexcept -> std::shared_ptr<rivet_ddl_base>;

		[[nodiscard]] auto
		get_uint64(rivet_type_id field_id) const noexcept -> uint64_t;

		[[nodiscard]] auto
		get_uint32(rivet_type_id field_id) const noexcept -> uint32_t;

		[[nodiscard]] auto
		get_uint16(rivet_type_id field_id) const noexcept -> uint16_t;

		[[nodiscard]] auto
		get_uint8(rivet_type_id field_id) const noexcept -> uint8_t;

		[[nodiscard]] auto
		get_int64(rivet_type_id field_id) const noexcept -> int64_t;

		[[nodiscard]] auto
		get_int32(rivet_type_id field_id) const noexcept -> int32_t;

		[[nodiscard]] auto
		get_int16(rivet_type_id field_id) const noexcept -> int16_t;

		[[nodiscard]] auto
		get_int8(rivet_type_id field_id) const noexcept -> int8_t;

		[[nodiscard]] auto
		get_double(rivet_type_id field_id) const noexcept -> double;

		[[nodiscard]] auto
		get_float(rivet_type_id field_id) const noexcept -> float;

		[[nodiscard]] auto
		get_bool(rivet_type_id field_id) const noexcept -> bool;

		[[nodiscard]] auto
		get_string(rivet_type_id field_id) const noexcept -> std::string_view;

		[[nodiscard]] auto
		get_uint64s(rivet_type_id field_id) const noexcept -> std::vector<uint64_t>;

		[[nodiscard]] auto
		get_uint32s(rivet_type_id field_id) const noexcept -> std::vector<uint32_t>;

		[[nodiscard]] auto
		get_uint16s(rivet_type_id field_id) const noexcept -> std::vector<uint16_t>;

		[[nodiscard]] auto
		get_uint8s(rivet_type_id field_id) const noexcept -> std::vector<uint8_t>;

		[[nodiscard]] auto
		get_int64s(rivet_type_id field_id) const noexcept -> std::vector<int64_t>;

		[[nodiscard]] auto
		get_int32s(rivet_type_id field_id) const noexcept -> std::vector<int32_t>;

		[[nodiscard]] auto
		get_int16s(rivet_type_id field_id) const noexcept -> std::vector<int16_t>;

		[[nodiscard]] auto
		get_int8s(rivet_type_id field_id) const noexcept -> std::vector<int8_t>;

		[[nodiscard]] auto
		get_doubles(rivet_type_id field_id) const noexcept -> std::vector<double>;

		[[nodiscard]] auto
		get_floats(rivet_type_id field_id) const noexcept -> std::vector<float>;

		[[nodiscard]] auto
		get_bools(rivet_type_id field_id) const noexcept -> std::vector<bool>;

		[[nodiscard]] auto
		get_strings(rivet_type_id field_id) const noexcept -> std::vector<std::string_view>;

		[[nodiscard]] auto
		to_json(int indent = -1, char indent_char = ' ', bool ensure_ascii = false) const -> std::string;

#ifdef RIVET_USE_NLOHMANN
		[[nodiscard]] auto
		to_nlohmann_json() const -> nlohmann::json;
#endif
	};
} // namespace rivet::structures
