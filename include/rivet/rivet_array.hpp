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
	template<typename T, const int Alignment = RIVET_ALIGNMENT>
	struct rivet_array {
		std::shared_ptr<uint8_t[]> ptr = nullptr;
		rivet_size64 length = 0;
		rivet_off64 offset = 0;

		struct iterator {
			using iterator_category [[maybe_unused]] = std::forward_iterator_tag;
			using difference_type [[maybe_unused]] = std::ptrdiff_t;
			using value_type = T;
			using pointer = value_type *;
			using reference = value_type &;

			explicit iterator(pointer ptr) : array_ptr(ptr) {}

			reference operator*() const noexcept { return *array_ptr; }

			pointer operator->() const noexcept { return array_ptr; }

			iterator &operator++() noexcept {
				array_ptr++;
				return *this;
			}

			iterator operator++(int) noexcept { // NOLINT(cert-dcl21-cpp)
				iterator tmp = *this;
				array_ptr++;
				return tmp;
			}

			friend bool operator==(const iterator &lhs, const iterator &rhs) noexcept { return lhs.array_ptr == rhs.array_ptr; };

			friend bool operator!=(const iterator &lhs, const iterator &rhs) noexcept { return lhs.array_ptr != rhs.array_ptr; };

			pointer array_ptr;
		};

	private:
		void alloc(rivet_size64 size) noexcept {
#ifdef _WIN32
			ptr = std::make_shared<uint8_t[]>(normalize_value(size) + Alignment + 1);
			if (!is_aligned()) {
				offset = Alignment - (reinterpret_cast<intptr_t>(this->ptr.get()) % Alignment);
			}
#else
			ptr = std::shared_ptr<uint8_t[]>(new (std::align_val_t(Alignment)) uint8_t[normalize_value(size)]);
#endif
		}

		template<typename U = T>
		static RIVET_INLINE rivet_size64 normalize_value(rivet_size64 index) noexcept {
			return index * sizeof(U);
		}

		template<typename U = T>
		static RIVET_INLINE rivet_size64 compact_value(rivet_size64 index) noexcept {
			return index / sizeof(U);
		}

	public:
		rivet_array() : ptr(nullptr) { }

		rivet_array(T *ptr, rivet_size64 size) : length(size) {
			alloc(size);

			if (ptr != nullptr) {
				std::copy_n(ptr, length, data());
			}
		}

		rivet_array(T *ptr, rivet_size64 size, const T &default_value) : rivet_array(ptr, size) {
			auto buffer = data();
			for (auto i = 0; i < length; ++i) {
				buffer[i] = default_value;
			}
		}

		rivet_array(std::shared_ptr<uint8_t[]> ptr, rivet_size64 length, rivet_off64 offset) : ptr(std::move(ptr)),
																							   length(length),
																							   offset(offset) {}

		[[nodiscard]] RIVET_INLINE T *data() const noexcept { return reinterpret_cast<T *>(ptr.get() + offset); }

		[[maybe_unused]] [[nodiscard]] RIVET_INLINE bool is_aligned() const noexcept {
			return (reinterpret_cast<intptr_t>(ptr.get()) % Alignment) == 0;
		}

		[[nodiscard]] RIVET_INLINE rivet_size64 size() const noexcept { return length; }

		[[nodiscard]] RIVET_INLINE rivet_size64 byte_size() const noexcept { return size() * sizeof(T); }

		[[maybe_unused]] [[nodiscard]] RIVET_INLINE bool empty() const noexcept { return size() <= 0 || ptr == nullptr; }

		[[maybe_unused]] RIVET_INLINE T &operator[](rivet_size64 index) const { return get(index); }

		[[nodiscard]] iterator begin() const noexcept { return iterator(data()); }

		[[nodiscard]] iterator end() const noexcept { return iterator(data() + size()); }

		[[maybe_unused]] T &get(rivet_size64 index) const {
			if (index >= size()) {
				throw index_out_of_range();
			}

			return data()[index];
		}

		template<typename U>
		[[maybe_unused]] U get(rivet_size64 index) const {
			if (index >= size()) {
				throw index_out_of_range();
			}

			if (sizeof(T) * index + sizeof(U) > byte_size()) {
				throw index_out_of_range();
			}

			return reinterpret_cast<U *>(data() + index)[0];
		}

		[[maybe_unused]] void set(rivet_size64 index, T value) {
			if (index >= size()) {
				throw index_out_of_range();
			}

			data()[index] = value;
		}

		template<typename U>
		[[maybe_unused]] U set(rivet_size64 index, U value) {
			if (index >= size()) {
				throw index_out_of_range();
			}

			if (sizeof(T) * index + sizeof(U) > byte_size()) {
				throw index_out_of_range();
			}

			reinterpret_cast<U *>(data() + index)[0] = value;
		}

		[[maybe_unused]] [[nodiscard]] std::shared_ptr<rivet_array<T, Alignment>>
		slice(rivet_size64 index, rivet_size64 count) const {
			if (index >= size()) {
				throw index_out_of_range();
			}

			if (index + count > size()) {
				throw index_out_of_range();
			}

			return std::make_shared<rivet_array<T, Alignment>>(ptr, count, offset + index);
		}

		[[maybe_unused]] [[nodiscard]] std::shared_ptr<rivet_array<T, Alignment>> slice(rivet_size64 index) const {
			return slice(index, size() - index);
		}

		template<typename U>
		[[maybe_unused]] std::shared_ptr<rivet_array<U, Alignment>>
		slice(rivet_size64 index, rivet_size64 count) const {
			auto normalized_offset = offset + normalize_value(index);
			auto normalized_index = normalize_value(index);

			if (normalized_index > byte_size()) {
				throw index_out_of_range();
			}

			if (normalized_index + normalized_offset > byte_size()) {
				throw index_out_of_range();
			}

			return std::make_shared<rivet_array<U, Alignment>>(ptr, count, normalized_offset);
		}

		template<typename U>
		[[maybe_unused]] std::shared_ptr<rivet_array<U, Alignment>> cast() const {
			return std::make_shared<rivet_array<U, Alignment>>(ptr, compact_value<U>(normalize_value(length)), offset);
		}

		[[maybe_unused]] void
		copy_to(std::shared_ptr<rivet_array<T, Alignment>> &array, rivet_size64 index, rivet_size64 count,
				rivet_size64 output_index = 0) {
			if (count > array->size() - output_index) {
				throw index_out_of_range();
			}

			if (index >= size()) {
				throw index_out_of_range();
			}

			if (index + count > size()) {
				throw index_out_of_range();
			}

			std::copy_n((data() + index), count, (array->data() + output_index));
		}

		template<typename U = T>
		requires(sizeof(U) <= 2 && std::is_same_v<U, T> && std::is_integral_v<U>)
		[[maybe_unused]] void ensure_null_terminated() noexcept {
			auto buffer = ptr;
			if (buffer[byte_size() - 1] != 0) {
				length += 1;
				alloc(length);
				std::copy_n(buffer.get(), byte_size() - sizeof(U), data());
				data()[byte_size() - sizeof(U)] = static_cast<U>(0);
			}
		}

		template<typename U = T>
		requires(sizeof(U) == 1 && std::is_same_v<U, T> && std::is_integral_v<U>)
		[[maybe_unused]] std::string to_string() noexcept {
			ensure_null_terminated<U>();
			return std::string(reinterpret_cast<char *>(data()), byte_size());
		}

		template<typename U = T>
		requires(sizeof(U) <= 2 && std::is_integral_v<U>)
		[[maybe_unused]] std::wstring to_wstring() noexcept {
			if (sizeof(U) == 1) {
				return std::wstring(to_string());
			}

			ensure_null_terminated<U>();
			return std::wstring(reinterpret_cast<wchar_t *>(data()), byte_size() >> 1);
		}

		template<typename U = T>
		requires(sizeof(U) == 1 && std::is_integral_v<U>)
		[[maybe_unused]] [[nodiscard]] std::string_view to_string_view() const noexcept {
			ensure_null_terminated<U>();
			return std::string_view(reinterpret_cast<char *>(data()), byte_size());
		}

		template<typename U = T>
		requires(sizeof(U) <= 2 && std::is_integral_v<U>)
		[[maybe_unused]] [[nodiscard]] std::wstring_view to_wstring_view() const noexcept {
			if (sizeof(U) == 1) {
				return std::wstring_view(to_string_view());
			}

			ensure_null_terminated<U>();
			return std::wstring_view(reinterpret_cast<wchar_t *>(data()), byte_size() >> 1);
		}

		template<typename U = T>
		requires(sizeof(U) == 1 && std::is_integral_v<U>)
		[[maybe_unused]] [[nodiscard]] std::stringstream to_string_stream() const noexcept {
			ensure_null_terminated();
			return std::stringstream(reinterpret_cast<char *>(data()), std::ios::in | std::ios::out);
		}

		template<typename U = T>
		requires(sizeof(U) <= 2 && std::is_integral_v<U>)
		[[maybe_unused]] [[nodiscard]] std::wstringstream to_wstring_stream() const noexcept {
			ensure_null_terminated();
			return std::wstringstream(reinterpret_cast<wchar_t *>(data()), std::ios::in | std::ios::out);
		}

		[[maybe_unused]] [[nodiscard]] std::string to_cstring(rivet_size64 index = 0) const noexcept {
			return std::string(reinterpret_cast<char *>(data()) + normalize_value(index));
		}

		[[maybe_unused]] [[nodiscard]] std::wstring to_wcstring(rivet_size64 index = 0) const noexcept {
			return std::wstring(reinterpret_cast<wchar_t *>(data()) + (normalize_value(index) >> 1));
		}

		[[maybe_unused]] [[nodiscard]] std::string_view to_cstring_view(rivet_size64 index = 0) const noexcept {
			return std::string_view(reinterpret_cast<char *>(data()) + normalize_value(index));
		}

		[[maybe_unused]] [[nodiscard]] std::wstring_view to_wstring_view(rivet_size64 index = 0) const noexcept {
			return std::wstring_view(reinterpret_cast<wchar_t *>(data()) + (normalize_value(index) >> 1));
		}

		[[maybe_unused]] [[nodiscard]] std::iostream to_stream() const noexcept {
			return std::iostream(reinterpret_cast<char *>(data()), std::ios::in | std::ios::out, byte_size());
		}

		[[maybe_unused]] std::vector<T> to_vector() const noexcept { return std::vector<T>(data(), data() + size()); }

		[[maybe_unused]] static std::shared_ptr<rivet_array<uint8_t, Alignment>>
		from_file(const std::filesystem::path &path) noexcept {
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

		[[maybe_unused]] static std::shared_ptr<rivet_array<T, Alignment>> from_vector(std::vector<T> &vector) noexcept {
			return std::make_shared<rivet_array<T, Alignment>>(vector.data(), vector.size());
		}
	};

	using rivet_data_array = rivet_array<uint8_t>;
} // namespace rivet
