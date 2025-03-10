#pragma once

#include "Matrix.hpp"

template <typename K>
Vector<K> Matrix<K>::mul_vec(const Vector<K> &vec) const
{
	if (vec.getSize() != this->getCols()) // c1 instructions
	{
		throw IncompatibleSizeException();
	}
	Vector<K> result(this->getRows()); // c2 instructions (space : O(n))
	for (size_t i = 0; i < this->getRows(); i++) // * n + c3 instructions
	{
		for (size_t j = 0; j < this->getCols(); j++) // * m + c4 instructions
		{
			result[i] = result[i] + (*this)(i, j) * vec[j]; // c5 instructions
		}
	}
	return result;
} // O(nm) in time, O(n) in space

template <typename K>
Matrix<K> Matrix<K>::mul_mat(const Matrix<K> &mat) const
{
	if (this->getCols() != mat.getRows()) // c1 instructions
	{
		throw IncompatibleSizeException();
	}
	Matrix<K> result(this->getRows(), mat.getCols()); // c2 instructions (space : O(np))
	for (size_t i = 0; i < this->getRows(); i++) // * n + c3 instructions
	{
		for (size_t j = 0; j < mat.getCols(); j++) // * m + c4 instructions
		{
			for (size_t l = 0; l < this->getCols(); l++) // * p + c5 instructions
			{
				result(i, j) = result(i, j) + (*this)(i, l) * mat(l, j); // c6 instructions
			}
		}
	}
	return result;
} // O(nmp) in time, O(np) in space
