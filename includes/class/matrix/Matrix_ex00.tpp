#pragma once

#include "Matrix.hpp"

template <typename K>
void Matrix<K>::add(const Matrix<K> &other)
{
	if (this->_rows != other._rows || this->_cols != other._cols) // c1 instructions
	{
		throw IncompatibleSizeException();
	}
	for (size_t i = 0; i < this->_rows; i++) // * n + c2 instructions
	{
		for (size_t j = 0; j < this->_cols; j++) // * m + c3 instructions
		{
			this->operator[](i, j) += other.operator[](i, j); // c4 instructions
		}
	}
} //O(nm) in time, O(1) in space

template <typename K>
void Matrix<K>::sub(const Matrix<K> &other)
{
	if (this->_rows != other._rows || this->_cols != other._cols) // c1 instructions
	{
		throw IncompatibleSizeException();
	}
	for (size_t i = 0; i < this->_rows; i++) // * n + c2 instructions
	{
		for (size_t j = 0; j < this->_cols; j++) // * m + c3 instructions
		{
			this->operator[](i, j) -= other.operator[](i, j); // c4 instructions
		}
	}
} //O(nm) in time, O(1) in space

template <typename K>
void Matrix<K>::scl(const K &scalar)
{
	for (size_t i = 0; i < this->_rows; i++) // * n + c1 instructions
	{
		for (size_t j = 0; j < this->_cols; j++) // * m + c2 instructions
		{
			(*this)[i, j] *= scalar; // c3 instructions
		}
	}
} //O(nm) in time, O(1) in space
