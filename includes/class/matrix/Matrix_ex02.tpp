#pragma once

#include "Matrix.hpp"

template <typename K>
Matrix<K> lerp(const Matrix<K> &u, const Matrix<K> &v, const float &t)
{
	if (u.getRows() != v.getRows() || u.getCols() != v.getCols()) // c1 instructions
	{
		throw IncompatibleSizeException();
	}
	Matrix<K> result(u.getRows(), u.getCols());
	for (size_t i = 0; i < u.getRows(); i++) // * n + c2 instructions
	{
		for (size_t j = 0; j < u.getCols(); j++) // * m + c3 instructions
		{
			result[i, j] = t * u[i, j] + (1 - t) * v[i, j]; // c4 instructions
		}
	}
	return result;
} // O(nm) in time, O(nm) in space
