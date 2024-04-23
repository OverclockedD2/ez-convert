#pragma once

#include <string>
#include <exception>

namespace converter {
	std::string int_to_binary(int integer) {
		if (integer == 0) return "00";

		std::string binary;
		bool signed_bit = false;

		if (integer < 0) {
			signed_bit = true;
			integer = -integer;
		}

		while (integer > 0) {
			binary = std::to_string((integer % 2)) + binary;
			integer = integer / 2;
		}

		return (signed_bit == 1 ? "1" : "0") + binary;
	}
	int binary_to_int(std::string binary) {
		if (binary.length() > 1) {
			int output = 0;
			bool signed_bit = binary[0] == '1' ? 1 : 0;

			binary = binary.substr(1);

			if (binary == "0") return 0;

			for (unsigned int i = 0; i < binary.length(); i++) {
				if (binary[i] == '1') {
					output += pow(2, binary.length() - i - 1);
				}
				else if (not (binary[i] == '0')) {
					throw std::exception("[ZEROES & ONES] ERROR: INVALID CHARACTER IN INPUT STRING!");
				}
			}
			return (signed_bit == 1 ? -output : output);
		}
		else {
			throw std::exception("[ZEROES & ONES] ERROR: INPUT STRING TOO SHORT!");
		}
	}
	std::string long_to_binary(long integer) {
		if (integer == 0) return "00";

		std::string binary;
		bool signed_bit = false;

		if (integer < 0) {
			signed_bit = true;
			integer = -integer;
		}

		while (integer > 0) {
			binary = std::to_string((integer % 2)) + binary;
			integer = integer / 2;
		}

		return (signed_bit == 1 ? "1" : "0") + binary;
	}
	long binary_to_long(std::string binary) {
		if (binary.length() > 1) {
			long output = 0;
			bool signed_bit = binary[0] == '1' ? 1 : 0;

			binary = binary.substr(1);

			if (binary == "0") return 0;

			for (unsigned int i = 0; i < binary.length(); i++) {
				if (binary[i] == '1') {
					output += pow(2, binary.length() - i - 1);
				}
				else if (not (binary[i] == '0')) {
					throw std::exception("[ZEROES & ONES] ERROR: INVALID CHARACTER IN INPUT STRING!");
				}
			}
			return (signed_bit == 1 ? -output : output);
		}
		else {
			throw std::exception("[ZEROES & ONES] ERROR: INPUT STRING TOO SHORT!");
		}
	}
	std::string long_long_to_binary(long long integer) {
		if (integer == 0) return "00";

		std::string binary;
		bool signed_bit = false;

		if (integer < 0) {
			signed_bit = true;
			integer = -integer;
		}

		while (integer > 0) {
			binary = std::to_string((integer % 2)) + binary;
			integer = integer / 2;
		}

		return (signed_bit == 1 ? "1" : "0") + binary;
	}
	long long binary_to_long_long(std::string binary) {
		if (binary.length() > 1) {
			long long output = 0;
			bool signed_bit = binary[0] == '1' ? 1 : 0;

			binary = binary.substr(1);

			if (binary == "0") return 0;

			for (unsigned int i = 0; i < binary.length(); i++) {
				if (binary[i] == '1') {
					output += pow(2, binary.length() - i - 1);
				}
				else if (not (binary[i] == '0')) {
					throw std::exception("[ZEROES & ONES] ERROR: INVALID CHARACTER IN INPUT STRING!");
				}
			}
			return (signed_bit == 1 ? -output : output);
		}
		else {
			throw std::exception("[ZEROES & ONES] ERROR: INPUT STRING TOO SHORT!");
		}
	}
}
