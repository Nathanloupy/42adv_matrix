#pragma once

#include "Matrix.hpp"

template <typename K>
Matrix<K> linear_combination(const std::vector<Matrix<K>> &matrices, const std::vector<K> &scalars)
{
	if (matrices.size() != scalars.size()) // c1 instructions
	{
		throw IncompatibleSizeException();
	}
	Matrix<K> result(matrices[0].getRows(), matrices[0].getCols()); // c2 instructions (space : O(nm))
	for (size_t i = 0; i < result.getRows(); i++) // * n + c3 instructions
	{
		for (size_t j = 0; j < result.getCols(); j++) // * m + c4 instructions
		{
			for (size_t l = 0; l < matrices.size(); l++) // * k + c5 instructions
			{
				if (matrices[l].getRows() != result.getRows() || matrices[l].getCols() != result.getCols()) // c6 instructions
				{
					throw IncompatibleSizeException();
				}
				result[i, j] = result[i, j] + matrices[l][i, j] * scalars[l]; // c7 instructions
			}
		}
	}
	return result;
} //O(nm) in time, O(nm) in space
