// SPDX-FileCopyrightText: 2025-2026 Neptuwunium
//
// SPDX-License-Identifier: EUPL-1.2

#pragma once

#define WIN32_LEAN_AND_MEAN
#include <windows.h>

#include <psapi.h>
#include <algorithm>
#include <array>
#include <cstdint>
#include <string_view>
#include <vector>

namespace rivet_hook {
	struct signature_byte {
		bool any { false };	 // if true, any value is accepted
		uint8_t value { 0 }; // value to match

		auto
		operator==(uint8_t byte) const -> bool {
			return any || value == byte; // if any is true, any value is accepted
		}
	};

	struct hex_signature {
		std::array<signature_byte, 128> signature; // signature to match
		uint32_t size { 0 };					   // size of the signature
	};

	constexpr auto
	parse_octet(const char &value) -> uint8_t {
		if (value >= '0' && value <= '9') { // if the value is a number
			return value - '0';
		}
		if (value >= 'A' && value <= 'F') { // if the value is an uppercase letter
			return 10 + value - 'A';
		}
		if (value >= 'a' && value <= 'f') { // if the value is a lowercase letter
			return 10 + value - 'a';
		}

		return 0;
	}

	constexpr auto
	parse_signature(const std::string_view &hex_string) -> hex_signature {
		hex_signature signature;
		for (size_t index = 0; index < hex_string.size(); index += 2) {
			if (hex_string[index] == ' ') { // if the value is a space
				index -= 1;
				continue;
			}

			if (hex_string[index] == '?' && hex_string[index + 1] == '?') { // if the value is a wildcard
				signature.signature[signature.size++].any = true;
			} else { // if the value is a hex value
				signature.signature[signature.size++].value = (parse_octet(hex_string[index]) << 4) | parse_octet(hex_string[index + 1]);
			}
		}

		return signature;
	}

#define MAKE_SIGNATURE(codename, signature) const hex_signature constexpr codename##_SIGNATURE = parse_signature(signature);

} // namespace rivet_hook
