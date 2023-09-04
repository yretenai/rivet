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

#include <ankerl/unordered_dense.h>

#ifdef RIVET_USE_NLOHMANN
	#include <nlohmann/json.hpp>
#endif

#include <rivet/rivet_array.hpp>
#include <rivet/rivet_keywords.hpp>

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

		virtual auto
		from_substruct(const std::string_view &type, const std::shared_ptr<const rivet_serialized_object> &serialized) -> std::shared_ptr<rivet_ddl_base> = 0;
	};

	using rivet_serialized_value = std::variant<uint64_t, int64_t, double, bool, std::nullptr_t, std::string_view, std::shared_ptr<rivet_serialized_object>>;

	using rivet_ddl_ctor = std::function<std::shared_ptr<rivet::structures::rivet_ddl_base>(const std::shared_ptr<const rivet::structures::rivet_serialized_object> &)>;

	extern ankerl::unordered_dense::map<rivet_type_id, rivet_ddl_ctor> ddl_constructors;

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
		get_field(const rivet_type_id &field_id) const noexcept -> std::optional<TCast> {
			auto entry = values.find(field_id);
			if (entry == values.end()) {
				return std::nullopt;
			}

			if (entry->second.empty()) {
				return std::nullopt;
			}

			auto variant = entry->second.at(0);
			if (!std::holds_alternative<T>(variant)) {
				return std::nullopt;
			}

			return static_cast<TCast>(std::get<T>(variant));
		}

		template <typename T, typename TCast = T>
			requires(std::is_same_v<T, uint64_t> || std::is_same_v<T, int64_t> || std::is_same_v<T, double> || std::is_same_v<T, bool> || std::is_same_v<T, bool> ||
					 std::is_same_v<T, std::string_view> || std::is_same_v<T, std::shared_ptr<rivet_serialized_object>> || std::is_same_v<T, std::shared_ptr<rivet_data_array>>)
		auto
		get_field(const std::string_view &name) const noexcept -> std::optional<TCast> {
			return get_field<T, TCast>(rivet::hash::hash_type_id(name));
		}

		template <typename T, typename TCast = T>
			requires(std::is_same_v<T, uint64_t> || std::is_same_v<T, int64_t> || std::is_same_v<T, double> || std::is_same_v<T, bool> || std::is_same_v<T, bool> ||
					 std::is_same_v<T, std::string_view> || std::is_same_v<T, std::shared_ptr<rivet_serialized_object>> || std::is_same_v<T, std::shared_ptr<rivet_data_array>>)
		auto
		get_fields(const rivet_type_id &field_id) const noexcept -> std::vector<TCast> {
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
			requires(std::is_same_v<T, uint64_t> || std::is_same_v<T, int64_t> || std::is_same_v<T, double> || std::is_same_v<T, bool> || std::is_same_v<T, bool> ||
					 std::is_same_v<T, std::string_view> || std::is_same_v<T, std::shared_ptr<rivet_serialized_object>> || std::is_same_v<T, std::shared_ptr<rivet_data_array>>)
		auto
		get_fields(const std::string_view &name) const noexcept -> std::vector<TCast> {
			return get_fields<T, TCast>(rivet::hash::hash_type_id(name));
		}

		template <typename T>
			requires(std::is_base_of_v<rivet::structures::rivet_ddl_base, T> && !std::is_same_v<rivet::structures::rivet_ddl_base, T>)
		[[nodiscard]] auto
		unwrap_into(rivet_type_id type_id) const noexcept -> std::shared_ptr<rivet_ddl_base> {
			if (values.size() == 2 && ddl_constructors.contains(type_id)) {
				auto obj = get_field<std::shared_ptr<rivet_serialized_object>>(0x6c33fda5); // "Obj"
				auto type = get_field<std::string_view>(0xbc4e9799);						// "Type"
				auto instance = T::from_substruct(type.value(), obj.value());
				if (instance != nullptr) {
					return instance;
				}
			}

			return std::make_shared<T>(shared_from_this());
		}

		[[nodiscard]] auto RIVET_INLINE
		get_field(const rivet_type_id &field_id) const noexcept -> std::optional<std::vector<rivet::structures::rivet_serialized_value>>;

		[[nodiscard]] auto RIVET_INLINE
		get_field(const std::string_view &name) const noexcept -> std::optional<std::vector<rivet::structures::rivet_serialized_value>>;

		[[nodiscard]] auto RIVET_INLINE
		has_field(const rivet_type_id &field_id) const noexcept -> bool;

		[[nodiscard]] auto RIVET_INLINE
		has_field(const std::string_view &name) const noexcept -> bool;

		[[nodiscard]] auto
		unwrap_into(rivet_type_id type_id) const noexcept -> std::shared_ptr<rivet_ddl_base>;

		[[nodiscard]] auto RIVET_INLINE
		to_json(int indent = -1, char indent_char = ' ', bool ensure_ascii = false) const -> std::string;

#ifdef RIVET_USE_NLOHMANN
		[[nodiscard]] auto RIVET_INLINE
		to_nlohmann_json() const -> nlohmann::json;
#endif
	};
} // namespace rivet::structures
