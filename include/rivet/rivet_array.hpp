// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

#include <algorithm>
#include <cstddef>
#include <cstdint>
#include <iterator>
#include <filesystem>
#include <fstream>
#include <memory>
#include <new>
#include <sstream>
#include <string>
#include <vector>
#include <utility>

#include <rivet/rivet_keywords.hpp>
#include <rivet/exceptions.hpp>

namespace rivet {
	template<typename T, const int Alignment>
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

			explicit iterator(pointer ptr) : array_ptr(ptr) { }

			reference operator*() const { return *array_ptr; }

			pointer operator->() { return array_ptr; }

			iterator &operator++() {
				array_ptr++;
				return *this;
			}

			iterator operator++(int) { // NOLINT(cert-dcl21-cpp)
				iterator tmp = *this;
				++(*this);
				return tmp;
			}

			friend bool operator==(const iterator &a, const iterator &b) { return a.array_ptr == b.array_ptr; };

			friend bool operator!=(const iterator &a, const iterator &b) { return a.array_ptr != b.array_ptr; };

			pointer array_ptr;
		};

	private:
		void alloc(rivet_size64 size) {
#ifdef _WIN32
			ptr = std::make_shared<uint8_t[]>(normalize_value(size) + Alignment + 1);
			if (!is_aligned()) {
				offset = Alignment - (reinterpret_cast<intptr_t>(this->ptr.get()) % Alignment);
			}
#else
			ptr = std::shared_ptr<T[]>(new (std::align_val_t(Alignment)) T[size]);
#endif
		}

		template<typename U = T>
		static RIVET_INLINE rivet_size64 normalize_value(rivet_size64 index) {
			return index * sizeof(U);
		}

		template<typename U = T>
		static RIVET_INLINE rivet_size64 compact_value(rivet_size64 index) {
			return index / sizeof(U);
		}

	public:
		rivet_array() {
			length = 0;
			offset = 0;
			ptr = nullptr;
		}

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

		rivet_array(std::shared_ptr<uint8_t[]> ptr, rivet_size64 length, rivet_off64 offset) : ptr(std::move(ptr)), length(length), offset(offset) { }

		RIVET_DELETE_COPY(rivet_array)

		[[nodiscard]] RIVET_INLINE T *data() const { return reinterpret_cast<T *>(ptr.get() + offset); }

		[[maybe_unused]] [[nodiscard]] RIVET_INLINE bool is_aligned() const {
			return reinterpret_cast<intptr_t>(ptr.get() + offset) % Alignment;
		}

		[[nodiscard]] RIVET_INLINE rivet_size64 size() const { return length; }

		[[nodiscard]] RIVET_INLINE rivet_size64 byte_size() const { return size() * sizeof(T); }

		[[maybe_unused]] [[nodiscard]] RIVET_INLINE bool empty() const { return size() <= 0 || ptr == nullptr; }

		[[maybe_unused]] RIVET_INLINE T &operator[](rivet_size64 index) const { return get(index); }

		[[nodiscard]] iterator begin() const { return iterator(data()); }

		[[nodiscard]] iterator end() const { return iterator(data() + size()); }

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

			if (sizeof(T) * index + sizeof(U) >= byte_size()) {
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

			if (sizeof(T) * index + sizeof(U) >= byte_size()) {
				throw index_out_of_range();
			}

			reinterpret_cast<U *>(data() + index)[0] = value;
		}

		[[maybe_unused]] [[nodiscard]] std::shared_ptr<rivet_array<T, Alignment>> slice(rivet_size64 index, rivet_size64 count) const {
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
		[[maybe_unused]] std::shared_ptr<rivet_array<U, Alignment>> slice(rivet_size64 index, rivet_size64 count) const {
			auto normalized_offset = offset + normalize_value(index);
			auto normalized_index = normalize_value(index);

			if(normalized_index > byte_size()) {
				throw index_out_of_range();
			}

			if(normalized_index + normalized_offset > byte_size()) {
				throw index_out_of_range();
			}

			return std::make_shared<rivet_array<U, Alignment>>(ptr, count, normalized_offset);
		}

		template<typename U>
		[[maybe_unused]] std::shared_ptr<rivet_array<U, Alignment>> cast() const {
			return std::make_shared<rivet_array<U, Alignment>>(ptr, compact_value<U>(normalize_value(length)), offset);
		}

		[[maybe_unused]] void copy_to(std::shared_ptr<rivet_array<T, Alignment>> &array, rivet_size64 index, rivet_size64 count) {
			if (count >= array->size()) {
				throw index_out_of_range();
			}

			if (index >= size()) {
				throw index_out_of_range();
			}

			if (index + count >= size()) {
				throw index_out_of_range();
			}

			std::copy_n((data() + index), count, array->data());
		}

		template<typename U = T>
		requires(sizeof(U) <= 2 && std::is_same<U, T>::value && std::is_integral<U>::value)
		[[maybe_unused]] void ensure_null_terminated() {
			auto buffer = ptr;
			if (buffer[size() - 1] != 0) {
				length += 1;
				alloc(length);
				std::copy_n(buffer.get(), size() - 1, data());
				data()[size() - 1] = static_cast<U>(0);
			}
		}

		template<typename U = T>
		requires(sizeof(U) == 1 && std::is_same<U, T>::value && std::is_integral<U>::value)
		[[maybe_unused]] std::string to_string() {
			return std::string(reinterpret_cast<char *>(data()), size());
		}

		template<typename U = T>
		requires(sizeof(U) == 1 && std::is_same<U, T>::value && std::is_integral<U>::value)
		[[maybe_unused]] std::string to_cstring() {
			return std::string(reinterpret_cast<char *>(data()));
		}

		template<typename U = T>
		requires(sizeof(U) <= 2 && std::is_same<U, T>::value && std::is_integral<U>::value)
		[[maybe_unused]] std::wstring to_wstring() {
			if (sizeof(U) == 1) {
				return std::wstring(to_string());
			}

			return std::wstring(reinterpret_cast<wchar_t *>(data()), size());
		}

		template<typename U = T>
		requires(sizeof(U) <= 2 && std::is_same<U, T>::value && std::is_integral<U>::value)
		[[maybe_unused]] std::wstring to_wcstring() {
			if (sizeof(U) == 1) {
				return std::wstring(to_cstring());
			}

			return std::wstring(reinterpret_cast<wchar_t *>(data()));
		}

		template<typename U = T>
		requires(sizeof(U) == 1 && std::is_same<U, T>::value && std::is_integral<U>::value)
		[[maybe_unused]] std::stringstream to_string_stream() {
			return std::stringstream(reinterpret_cast<char *>(data()), std::ios::in | std::ios::out);
		}


		template<typename U = T>
		requires(sizeof(U) == 2 && std::is_same<U, T>::value && std::is_integral<U>::value)
		[[maybe_unused]] std::wstringstream to_wstring_stream() {
			return std::wstringstream(reinterpret_cast<wchar_t *>(data()), std::ios::in | std::ios::out);
		}

		[[maybe_unused]] std::iostream to_stream() {
			return std::iostream(reinterpret_cast<char *>(data()), std::ios::in | std::ios::out, byte_size());
		}

		[[maybe_unused]] std::vector<T> to_vector() { return std::vector<T>(data(), data() + size()); }

		[[maybe_unused]] static std::shared_ptr<rivet_array<uint8_t, Alignment>> from_file(const std::filesystem::path &path) {
			std::ifstream file(path, std::ios::binary | std::ios::in);
			auto size = static_cast<rivet_size64>(std::filesystem::file_size(path));
			auto bytes = std::make_shared<rivet_array<uint8_t, Alignment>>(nullptr, size);
			file.seekg(0, std::ios::beg);
			file.read(reinterpret_cast<char *>(bytes->data()), static_cast<std::streamsize>(size));
			file.close();
			return bytes;
		}

		[[maybe_unused]] static std::shared_ptr<rivet_array<T, Alignment>> from_vector(std::vector<T> &vector) {
			return std::make_shared<rivet_array<T, Alignment>>(vector.data(), vector.size());
		}
	};

	using rivet_data_array = rivet_array<uint8_t, RIVET_ALIGNMENT>;
}