#pragma once

#include "Matrix.hpp"

template <typename K>
Matrix<K> linear_combination(const std::vector<Matrix<K>> &matrices, const std::vector<K> &scalars)
{
	if (matrices.size() != scalars.size())
	{
		throw IncompatibleSizeException();
	}
	Matrix<K> result(matrices[0].getRows(), matrices[0].getCols());
	for (size_t i = 0; i < result.getRows(); i++)
	{
		for (size_t j = 0; j < result.getCols(); j++)
		{
			for (size_t l = 0; l < matrices.size(); l++)
			{
				if (matrices[l].getRows() != result.getRows() || matrices[l].getCols() != result.getCols())
				{
					throw IncompatibleSizeException();
				}
				result[i, j] += matrices[l][i, j] * scalars[l];
			}
		}
	}
	return result;
}
