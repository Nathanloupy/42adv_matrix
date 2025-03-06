#pragma once

namespace utils
{
	template <typename K>
	K abs(const K &value);

	template <typename K>
	K pow(const K &value, const float &exponent);
}

#include "utils.tpp"
