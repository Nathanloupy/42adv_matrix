#pragma once
#include "Matrix.hpp"

template <typename K>
Matrix<K>::Matrix(size_t rows, size_t cols) : _rows(rows),
											  _cols(cols)
{
	this->_data.reserve(rows * cols);
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
	if (this->_rows * this->_cols != data.size())
	{
		throw IncompatibleSizeException();
	}
	this->_data.resize(this->_rows * this->_cols);
	for (size_t i = 0; i < this->_rows; i++)
	{
		for (size_t j = 0; j < this->_cols; j++)
		{
			(*this)[i, j] = data[i * this->_cols + j];
		}
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
const K &Matrix<K>::operator[](size_t row, size_t col) const
{
	if (row >= this->_rows || col >= this->_cols)
	{
		throw std::out_of_range("Index out of bounds");
	}
	return this->_data.at(col * this->_rows + row);
}

template <typename K>
K &Matrix<K>::operator[](size_t row, size_t col)
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
Vector<K> Matrix<K>::toVector() const
{
	Vector<K> vector(this->_rows * this->_cols);
	for (size_t i = 0; i < this->_rows; i++)
	{
		for (size_t j = 0; j < this->_cols; j++)
			vector[i * this->_cols + j] = (*this)[i, j];
	}
	return vector;
}

template <typename K>
std::ostream &operator<<(std::ostream &os, const Matrix<K> &matrix)
{
	std::cout << "matrix.getRows(): " << matrix.getRows() << std::endl;
	std::cout << "matrix.getCols(): " << matrix.getCols() << std::endl;
	for (size_t i = 0; i < matrix.getRows(); i++)
	{
		os << "[ ";
		for (size_t j = 0; j < matrix.getCols(); j++)
		{
			std::cout << "i: " << i << std::endl;
			std::cout << "j: " << j << std::endl;
			std::cout << "matrix[i, j]: " << matrix[i, j] << std::endl;
			os << matrix[i, j] << " ";
		}
		os << "]" << "\n";
	}
	return os;
}