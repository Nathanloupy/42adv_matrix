#pragma once

#include "Matrix.hpp"

template <typename K>
void Matrix<K>::add(const Matrix<K> &other)
{
	if (this->_rows != other._rows || this->_cols != other._cols) // 7 instructions
	{
		throw IncompatibleSizeException();
	}
	for (size_t i = 0; i < this->_rows; i++) // * n + 1 instructions
	{
		for (size_t j = 0; j < this->_cols; j++) // * m + 1 instructions
		{
			this->operator[](i, j) += other.operator[](i, j); // 12 instructions
		}
	}
} //O(nm) in time, O(1) in space

template <typename K>
void Matrix<K>::sub(const Matrix<K> &other)
{
	if (this->_rows != other._rows || this->_cols != other._cols) // 7 instructions
	{
		throw IncompatibleSizeException();
	}
	for (size_t i = 0; i < this->_rows; i++) // * n + 1 instructions
	{
		for (size_t j = 0; j < this->_cols; j++) // * m + 1 instructions
		{
			this->operator[](i, j) -= other.operator[](i, j); // 12 instructions
		}
	}
} //O(nm) in time, O(1) in space

template <typename K>
void Matrix<K>::scl(const K &scalar)
{
	for (size_t i = 0; i < this->_rows; i++) // * n + 1 instructions
	{
		for (size_t j = 0; j < this->_cols; j++) // * m + 1 instructions
		{
			(*this)[i, j] *= scalar; // 7 instructions
		}
	}
} //O(nm) in time, O(1) in space
