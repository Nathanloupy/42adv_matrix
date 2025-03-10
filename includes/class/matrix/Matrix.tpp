#pragma once
#include "Matrix.hpp"

template <typename K>
Matrix<K>::Matrix(size_t rows, size_t cols) : _rows(rows),
											  _cols(cols)
{
	if (rows == 0 || cols == 0)
	{
		throw InvalidSizeException();
	}
	this->_data.resize(rows * cols);
}

template <typename K>
Matrix<K>::Matrix(const Matrix &other) : _rows(other._rows),
										 _cols(other._cols),
										 _data(other._data)
{
}

template <typename K>
Matrix<K>::Matrix(size_t rows, size_t cols, const std::vector<K> &data) : _rows(rows),
																		  _cols(cols)
{
	if (rows == 0 || cols == 0)
	{
		throw InvalidSizeException();
	}
	if (this->_rows * this->_cols != data.size())
	{
		throw IncompatibleSizeException();
	}
	this->_data.resize(this->_rows * this->_cols);
	for (size_t j = 0; j < this->_cols; j++)
	{
		for (size_t i = 0; i < this->_rows; i++)
			(*this)(i, j) = data[j * this->_rows + i];
	}
}

template <typename K>
Matrix<K> &Matrix<K>::operator=(const Matrix &other)
{
	if (this->_rows != other._rows || this->_cols != other._cols)
	{
		throw IncompatibleSizeException();
	}
	this->_data = other._data;
	return *this;
}

template <typename K>
Matrix<K>::~Matrix()
{
}

template <typename K>
size_t Matrix<K>::getRows() const
{
	return this->_rows;
}

template <typename K>
size_t Matrix<K>::getCols() const
{
	return this->_cols;
}

template <typename K>
const K &Matrix<K>::operator()(size_t row, size_t col) const
{
	if (row >= this->_rows || col >= this->_cols)
	{
		throw std::out_of_range("Index out of bounds");
	}
	return this->_data.at(col * this->_rows + row);
}

template <typename K>
K &Matrix<K>::operator()(size_t row, size_t col)
{
	if (row >= this->_rows || col >= this->_cols)
	{
		throw std::out_of_range("Index out of bounds");
	}
	return this->_data[col * this->_rows + row];
}

template <typename K>
bool Matrix<K>::isSquare() const
{
	return this->_rows == this->_cols;
}

template <typename K>
void Matrix<K>::toVector(Vector<K> &vector) const
{
	if (vector.getSize() != this->_rows * this->_cols)
	{
		throw IncompatibleSizeException();
	}
	for (size_t j = 0; j < this->_cols; j++)
	{
		for (size_t i = 0; i < this->_rows; i++)
			vector[j * this->_rows + i] = (*this)(i, j);
	}
}

template <typename K>
std::ostream &operator<<(std::ostream &os, const Matrix<K> &matrix)
{
	for (size_t i = 0; i < matrix.getRows(); i++)
	{
		os << "[ ";
		for (size_t j = 0; j < matrix.getCols(); j++)
		{
			os << matrix(i, j) << " ";
		}
		os << "]" << "\n";
	}
	return os;
}