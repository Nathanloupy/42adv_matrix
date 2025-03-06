#pragma once

#include "utils.hpp"
#include <cmath>

template <>
inline float utils::abs(const float &value)
{
	return std::pow(std::pow(value, 2.0f), 0.5f);
}

template <>
inline float utils::pow(const float &value, const float &exponent)
{
	return std::pow(value, exponent);
}

