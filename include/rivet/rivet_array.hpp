// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

#include <algorithm>
#include <cstdint>
#include <filesystem>
#include <fstream>
#include <iterator>
#include <memory>
#include <new>
#include <string>
#include <type_traits>
#include <utility>
#include <vector>

#include <rivet/exceptions.hpp>
#include <rivet/rivet_keywords.hpp>

#ifndef RIVET_ALIGNMENT
	#define RIVET_ALIGNMENT 16
#endif

namespace rivet {
	template <typename T, const int Alignment = RIVET_ALIGNMENT> struct rivet_array {
		std::shared_ptr<uint8_t[]> ptr = nullptr; // NOLINT(*-avoid-c-arrays)
		rivet_size64 length = 0;
		rivet_off64 offset = 0;

		struct iterator {
			using iterator_category [[maybe_unused]] = std::forward_iterator_tag;
			using difference_type [[maybe_unused]] = std::ptrdiff_t;
			using value_type = T;
			using pointer = value_type *;
			using reference = value_type &;

			explicit iterator(pointer ptr): array_ptr(ptr) { }

			auto
			operator*() const noexcept -> reference {
				return *array_ptr;
			}

			auto
			operator->() const noexcept -> pointer {
				return array_ptr;
			}

			auto
			operator++() noexcept -> iterator & {
				array_ptr++;
				return *this;
			}

			auto
			operator++(int) noexcept -> iterator { // NOLINT(cert-dcl21-cpp)
				iterator tmp = *this;
				array_ptr++;
				return tmp;
			}

			friend auto
			operator==(const iterator &lhs, const iterator &rhs) noexcept -> bool {
				return lhs.array_ptr == rhs.array_ptr;
			};

			friend auto
			operator!=(const iterator &lhs, const iterator &rhs) noexcept -> bool {
				return lhs.array_ptr != rhs.array_ptr;
			};

			pointer array_ptr;
		};

	private:
		void
		alloc(rivet_size64 size) noexcept {
#ifdef _WIN32
			ptr = std::make_shared<uint8_t[]>(normalize_value(size) + Alignment + 1); // NOLINT(*-avoid-c-arrays)
			if (!is_aligned()) {
				offset = Alignment - (reinterpret_cast<intptr_t>(this->ptr.get()) % Alignment);
			}
#else
			ptr = std::shared_ptr<uint8_t[]>(new (std::align_val_t(Alignment)) uint8_t[normalize_value(size)]);
#endif
		}

		template <typename U = T>
		static RIVET_INLINE auto
		normalize_value(rivet_size64 index) noexcept -> rivet_size64 {
			return index * sizeof(U);
		}

		template <typename U = T>
		static RIVET_INLINE auto
		compact_value(rivet_size64 index) noexcept -> rivet_size64 {
			return index / sizeof(U);
		}

	public:
		rivet_array(): ptr(nullptr) { }

		rivet_array(T *ptr, rivet_size64 size): length(size) {
			alloc(size);

			if (ptr != nullptr) {
				std::copy_n(ptr, length, data());
			}
		}

		rivet_array(T *ptr, rivet_size64 size, const T &default_value): rivet_array(ptr, size) {
			auto buffer = data();
			for (auto i = 0; i < length; ++i) {
				buffer[i] = default_value;
			}
		}

		rivet_array(std::shared_ptr<uint8_t[]> ptr, rivet_size64 length, rivet_off64 offset): ptr(std::move(ptr)), length(length), offset(offset) { } // NOLINT(*-avoid-c-arrays)

		[[nodiscard]] RIVET_INLINE auto
		data() const noexcept -> T * {
			return reinterpret_cast<T *>(ptr.get() + offset); // NOLINT(*-pro-bounds-pointer-arithmetic)
		}

		[[maybe_unused, nodiscard]] RIVET_INLINE auto
		is_aligned() const noexcept -> bool {
			return (reinterpret_cast<intptr_t>(ptr.get()) % Alignment) == 0;
		}

		[[nodiscard]] RIVET_INLINE auto
		size() const noexcept -> rivet_size64 {
			return length;
		}

		[[nodiscard]] RIVET_INLINE auto
		byte_size() const noexcept -> rivet_size64 {
			return size() * sizeof(T);
		}

		[[maybe_unused, nodiscard]] RIVET_INLINE auto
		empty() const noexcept -> bool {
			return size() <= 0 || ptr == nullptr;
		}

		[[maybe_unused]] RIVET_INLINE auto
		operator[](rivet_size64 index) const -> T & {
			return get(index);
		}

		[[nodiscard]] auto
		begin() const noexcept -> iterator {
			return iterator(data());
		}

		[[nodiscard]] auto
		end() const noexcept -> iterator {
			return iterator(data() + size());
		}

		[[maybe_unused]] auto
		get(rivet_size64 index) const -> T & {
			if (index >= size()) {
				throw index_out_of_range("rivet_array::get: index out of range");
			}

			return data()[index];
		}

		template <typename U>
		[[maybe_unused]] auto
		get(rivet_size64 index) const -> U {
			if (index >= size()) {
				throw index_out_of_range("rivet_array::get: index out of range");
			}

			if (sizeof(T) * index + sizeof(U) > byte_size()) {
				throw index_out_of_range("rivet_array::get: index out of range");
			}

			return reinterpret_cast<U *>(data() + index)[0]; // NOLINT(*-pro-bounds-pointer-arithmetic)
		}

		[[maybe_unused]] void
		set(rivet_size64 index, T value) {
			if (index >= size()) {
				throw index_out_of_range("rivet_array::set: index out of range");
			}

			data()[index] = value;
		}

		template <typename U>
		[[maybe_unused]] void
		set(rivet_size64 index, U value) {
			if (index >= size()) {
				throw index_out_of_range("rivet_array::set: index out of range");
			}

			if (sizeof(T) * index + sizeof(U) > byte_size()) {
				throw index_out_of_range("rivet_array::set: index out of range");
			}

			reinterpret_cast<U *>(data() + index)[0] = value; // NOLINT(*-pro-bounds-pointer-arithmetic)
		}

		[[maybe_unused, nodiscard]] auto
		slice(rivet_size64 index, rivet_size64 count) const -> std::shared_ptr<rivet_array<T, Alignment>> {
			if (index >= size()) {
				throw index_out_of_range("rivet_array::slice: index out of range");
			}

			if (index + count > size()) {
				throw index_out_of_range("rivet_array::slice: index out of range");
			}

			return std::make_shared<rivet_array<T, Alignment>>(ptr, count, offset + index);
		}

		[[maybe_unused, nodiscard]] auto
		slice(rivet_size64 index) const -> std::shared_ptr<rivet_array<T, Alignment>> {
			return slice(index, size() - index);
		}

		template <typename U>
		[[maybe_unused]] auto
		slice(rivet_size64 index, rivet_size64 count) const -> std::shared_ptr<rivet_array<U, Alignment>> {
			auto normalized_offset = normalize_value(index);
			auto normalized_index = normalize_value(index);

			if (normalized_index > byte_size()) {
				throw index_out_of_range("rivet_array::slice: index out of range");
			}

			if (normalized_index + normalized_offset > byte_size()) {
				throw index_out_of_range("rivet_array::slice: index out of range");
			}

			return std::make_shared<rivet_array<U, Alignment>>(ptr, count, offset + normalized_offset);
		}

		template <typename U>
		[[maybe_unused]] auto
		cast() const -> std::shared_ptr<rivet_array<U, Alignment>> {
			return std::make_shared<rivet_array<U, Alignment>>(ptr, compact_value<U>(normalize_value(length)), offset);
		}

		[[maybe_unused]] void
		copy_to(std::shared_ptr<rivet_array<T, Alignment>> &array, rivet_size64 index, rivet_size64 count, rivet_size64 output_index = 0) {
			if (count > array->size() - output_index) {
				throw index_out_of_range("rivet_array::copy_to: index out of range");
			}

			if (index >= size()) {
				throw index_out_of_range("rivet_array::copy_to: index out of range");
			}

			if (index + count > size()) {
				throw index_out_of_range("rivet_array::copy_to: index out of range");
			}

			std::copy_n((data() + index), count, (array->data() + output_index));
		}

		template <typename U = T>
			requires(sizeof(U) <= 2 && std::is_same_v<U, T> && std::is_integral_v<U>)
		[[maybe_unused]] void
		ensure_null_terminated() noexcept {
			auto buffer = ptr;
			if (buffer[byte_size() - 1] != 0) {
				length += 1;
				alloc(length);
				std::copy_n(buffer.get(), byte_size() - sizeof(U), data());
				data()[byte_size() - sizeof(U)] = static_cast<U>(0);
			}
		}

		template <typename U = T>
			requires(sizeof(U) == 1 && std::is_same_v<U, T> && std::is_integral_v<U>)
		[[maybe_unused]] auto
		to_string() noexcept -> std::string {
			ensure_null_terminated<U>();
			return std::string(reinterpret_cast<char *>(data()), byte_size());
		}

		template <typename U = T>
			requires(sizeof(U) <= 2 && std::is_integral_v<U>)
		[[maybe_unused]] auto
		to_wstring() noexcept -> std::wstring {
			if (sizeof(U) == 1) {
				return std::wstring(to_string());
			}

			ensure_null_terminated<U>();
			return std::wstring(reinterpret_cast<wchar_t *>(data()), byte_size() >> 1);
		}

		template <typename U = T>
			requires(sizeof(U) == 1 && std::is_integral_v<U>)
		[[maybe_unused, nodiscard]] auto
		to_string_view() const noexcept -> std::string_view {
			ensure_null_terminated<U>();
			return std::string_view(reinterpret_cast<char *>(data()), byte_size());
		}

		template <typename U = T>
			requires(sizeof(U) <= 2 && std::is_integral_v<U>)
		[[maybe_unused, nodiscard]] auto
		to_wstring_view() const noexcept -> std::wstring_view {
			if (sizeof(U) == 1) {
				return std::wstring_view(to_string_view());
			}

			ensure_null_terminated<U>();
			return std::wstring_view(reinterpret_cast<wchar_t *>(data()), byte_size() >> 1);
		}

		template <typename U = T>
			requires(sizeof(U) == 1 && std::is_integral_v<U>)
		[[maybe_unused, nodiscard]] auto
		to_string_stream() const noexcept -> std::stringstream {
			ensure_null_terminated();
			return std::stringstream(reinterpret_cast<char *>(data()), std::ios::in | std::ios::out);
		}

		template <typename U = T>
			requires(sizeof(U) <= 2 && std::is_integral_v<U>)
		[[maybe_unused, nodiscard]] auto
		to_wstring_stream() const noexcept -> std::wstringstream {
			ensure_null_terminated();
			return std::wstringstream(reinterpret_cast<wchar_t *>(data()), std::ios::in | std::ios::out);
		}

		[[maybe_unused, nodiscard]] auto
		to_cstring(rivet_size64 index = 0) const noexcept -> std::string {
			return std::string(reinterpret_cast<char *>(data()) + normalize_value(index));
		}

		[[maybe_unused, nodiscard]] auto
		to_wcstring(rivet_size64 index = 0) const noexcept -> std::wstring {
			return std::wstring(reinterpret_cast<wchar_t *>(data()) + (normalize_value(index) >> 1));
		}

		[[maybe_unused, nodiscard]] auto
		to_cstring_view(rivet_size64 index = 0) const noexcept -> std::string_view {
			return std::string_view(reinterpret_cast<char *>(data()) + normalize_value(index));
		}

		[[maybe_unused, nodiscard]] auto
		to_wstring_view(rivet_size64 index = 0) const noexcept -> std::wstring_view {
			return std::wstring_view(reinterpret_cast<wchar_t *>(data()) + (normalize_value(index) >> 1));
		}

		[[maybe_unused, nodiscard]] auto
		to_stream() const noexcept -> std::iostream {
			return std::iostream(reinterpret_cast<char *>(data()), std::ios::in | std::ios::out, byte_size());
		}

		[[maybe_unused]] auto
		to_vector() const noexcept -> std::vector<T> {
			return std::vector<T>(data(), data() + size());
		}

		[[maybe_unused]] static auto
		from_file(const std::filesystem::path &path) noexcept -> std::shared_ptr<rivet_array<uint8_t, Alignment>> {
			std::ifstream file(path, std::ios::binary | std::ios::in);
			if (!file.is_open()) {
				return nullptr;
			}

			auto size = static_cast<rivet_size64>(std::filesystem::file_size(path));
			auto bytes = std::make_shared<rivet_array<uint8_t, Alignment>>(nullptr, size);
			file.seekg(0, std::ios::beg);
			file.read(reinterpret_cast<char *>(bytes->data()), static_cast<std::streamsize>(size));
			file.close();
			return bytes;
		}

		[[maybe_unused]] static auto
		from_vector(std::vector<T> &vector) noexcept -> std::shared_ptr<rivet_array<T, Alignment>> {
			return std::make_shared<rivet_array<T, Alignment>>(vector.data(), vector.size());
		}
	};

	using rivet_data_array = rivet_array<uint8_t>;
} // namespace rivet
