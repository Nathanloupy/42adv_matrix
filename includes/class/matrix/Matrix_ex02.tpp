#pragma once

#include "Matrix.hpp"

template <typename K>
Matrix<K> lerp(const Matrix<K> &u, const Matrix<K> &v, const float &t)
{
	if (u.getRows() != v.getRows() || u.getCols() != v.getCols()) // c1 instructions
	{
		throw IncompatibleSizeException();
	}
	Matrix<K> result(u.getRows(), u.getCols()); // c2 instructions (space : O(nm))
	for (size_t i = 0; i < u.getRows(); i++) // * n + c3 instructions
	{
		for (size_t j = 0; j < u.getCols(); j++) // * m + c4 instructions
		{
			result(i, j) = v(i, j) * t + u(i, j) * (1 - t); // c5 instructions
		}
	}
	return result;
} // O(nm) in time, O(nm) in space
