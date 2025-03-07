#pragma once

#include "utils.hpp"
#include <cmath>

template <>
inline float utils::abs(const float &value)
{
	return std::pow(std::pow(value, 2.0f), 0.5f);
}

template <>
inline Complex utils::abs(const Complex &value)
{
	return Complex(std::pow(std::pow(value.real, 2.0f) + std::pow(value.imaginary, 2.0f), 0.5f), 0);
}

template <>
inline float utils::pow(const float &value, const float &exponent)
{
	return std::pow(value, exponent);
}

