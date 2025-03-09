#pragma once

#include "Vector.hpp"

template <typename K>
float Vector<K>::norm_1() const
{
	float result = 0; // c1 instructions
	for (size_t i = 0; i < this->getSize(); i++) // * n + c2 instructions
	{
		result += utils::abs(this->_data[i]); // c3 instructions
	}
	return result;
} //O(n) in time, O(1) in space

template <typename K>
float Vector<K>::norm() const
{
	float sum_of_squares = 0; // c1 instructions
	for (size_t i = 0; i < this->getSize(); i++) // * n + c2 instructions
	{
		sum_of_squares += utils::pow(utils::abs(this->_data[i]), 2.0f); // c3 instructions
	}
	return utils::pow(sum_of_squares, 0.5f); // c4 instructions
} //O(n) in time, O(1) in space

template <typename K>
float Vector<K>::norm_inf() const
{
	float result = 0; // c1 instructions
	for (size_t i = 0; i < this->getSize(); i++) // * n + c2 instructions
	{
		if (utils::abs(this->_data[i]) > result) // c3 instructions
			result = utils::abs(this->_data[i]); // c4 instructions
	}
	return result;
} //O(n) in time, O(1) in space

