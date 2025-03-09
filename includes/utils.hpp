#pragma once

namespace utils
{
	template <typename K>
	K pow(const K &value, const float &exponent);

	template <typename K>
	float abs(const K &value);
}

#include "utils.tpp"
