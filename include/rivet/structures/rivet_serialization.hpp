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
		none,
		boolean,
		file,
		tuid,
		json,
		unknown19,
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

	struct rivet_ddl_base {
		RIVET_DEFINE_TYPE_ID(define, "Rivet DDL Base");
		std::shared_ptr<rivet_data_array> host_buffer;

		explicit rivet_ddl_base(const std::shared_ptr<const rivet_serialized_object> &serialized);
	};

	using rivet_serialized_value = std::variant<uint64_t, int64_t, double, bool, std::monostate, std::string_view, std::shared_ptr<rivet_serialized_object>, std::shared_ptr<rivet_data_array>>;

	// this is exported in src/rivet/ddl/serialization.cpp. UPDATE THIS COMMENT IF YOU MOVE IT
	extern ankerl::unordered_dense::map<rivet_type_id, std::function<std::shared_ptr<rivet_ddl_base>(const std::shared_ptr<const rivet_serialized_object> &)>> ddl_constructors;

	struct RIVET_SHARED rivet_serialized_object : std::enable_shared_from_this<rivet_serialized_object> {
		ankerl::unordered_dense::map<uint32_t, std::vector<rivet_serialized_value>> values = {};
		std::shared_ptr<rivet_data_array> host_buffer;

		rivet_serialized_object() = default;

		explicit rivet_serialized_object(const std::shared_ptr<rivet_data_array> &buffer): host_buffer(buffer) { }

		[[nodiscard]] auto RIVET_INLINE
		get_field(const rivet_type_id &field_id) const noexcept -> std::optional<std::vector<rivet::structures::rivet_serialized_value>> {
			auto entry = values.find(field_id);
			if (entry == values.end()) {
				return std::nullopt;
			}

			return entry->second;
		}

		[[nodiscard]] auto RIVET_INLINE
		get_field(const std::string_view &name) const noexcept -> std::optional<std::vector<rivet::structures::rivet_serialized_value>> {
			return get_field(rivet::hash::hash_type_id(name));
		}

		[[nodiscard]] auto RIVET_INLINE
		has_field(const rivet_type_id &field_id) const noexcept -> bool {
			return values.find(field_id) != values.end();
		}

		[[nodiscard]] auto RIVET_INLINE
		has_field(const std::string_view &name) const noexcept -> bool {
			return has_field(rivet::hash::hash_type_id(name));
		}

		template <typename T>
			requires(std::is_base_of_v<rivet::structures::rivet_ddl_base, T> && !std::is_same_v<rivet::structures::rivet_ddl_base, T>)
		[[nodiscard]] auto
		unwrap_into() const noexcept -> std::shared_ptr<rivet_ddl_base> {
			return std::make_shared<T>(shared_from_this());
		}

		[[nodiscard]] auto
		unwrap_into(rivet_type_id type_id) const noexcept -> std::shared_ptr<rivet_ddl_base> {
			if (ddl_constructors.contains(type_id)) {
				return ddl_constructors[type_id](shared_from_this());
			}

			return nullptr;
		}
	};

	rivet_ddl_base::rivet_ddl_base(const std::shared_ptr<const rivet_serialized_object> &serialized): host_buffer(serialized->host_buffer) { }
} // namespace rivet::structures
