#pragma once

#include "utils.hpp"
#include <cmath>

template <>
inline float utils::pow(const float &value, const float &exponent)
{
	return std::pow(value, exponent);
}

template <>
inline float utils::abs(const float &value)
{
	return utils::pow(utils::pow(value, 2.0f), 0.5f);
}

template <>
inline float utils::abs(const Complex &value)
{
	return utils::pow(utils::pow(value.real, 2.0f) + utils::pow(value.imaginary, 2.0f), 0.5f);
}

template <typename K>
K lerp(const K &start, const K &end, const float &t)
{
	return end * t + start * (1.0f - t);
}