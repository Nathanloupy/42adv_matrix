#pragma once

#include "Vector.hpp"
#include <cmath>

template <typename K>
Vector<K> linear_combination(const std::vector<Vector<K>> &vectors, const std::vector<K> &scalars)
{
	if (vectors.size() != scalars.size())
	{
		throw IncompatibleSizeException();
	}
	Vector<K> result(vectors[0].getSize());
	for (size_t i = 0; i < result.getSize(); i++) // * n + 1 instructions
	{
		for (size_t j = 0; j < vectors.size(); j++) // * k + 1 instructions
		{
			if (vectors[j].getSize() != result.getSize()) // 4 instructions
				throw IncompatibleSizeException();
			result[i] += vectors[j][i] * scalars[j]; // 7 instructions
		}
	}
	return result;
} //O(n) in time, O(n) in space