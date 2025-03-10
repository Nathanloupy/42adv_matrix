#pragma once

void display(void);
namespace utils
{
	template <typename K>
	K pow(const K &value, const float &exponent);

	template <typename K>
	float abs(const K &value);
}

template <typename K>
K lerp(const K &start, const K &end, const float &t);

#include "utils.tpp"
