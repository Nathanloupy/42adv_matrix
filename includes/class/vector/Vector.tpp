#pragma once

#include "Vector.hpp"

template <typename K>
Vector<K>::Vector(size_t size) :
	_size(size)
{
	this->_data.resize(size);
}

template <typename K>
Vector<K>::Vector(const Vector &other) :
	_size(other._size),
	_data(other._data)
{
}

template <typename K>
Vector<K>::Vector(const std::vector<K> &data) :
	_size(data.size()),
	_data(data)
{
}

template <typename K>
Vector<K> &Vector<K>::operator=(const Vector &other)
{
	if (this->_size != other._size)
	{
		throw IncompatibleSizeException();
	}
	this->_data = other._data;
	return *this;
}

template <typename K>
Vector<K>::~Vector()
{
}

template <typename K>
size_t Vector<K>::getSize() const
{
	return this->_size;
}

template <typename K>
const K &Vector<K>::operator[](size_t index) const
{
	if (index >= this->_size)
	{
		throw std::out_of_range("Index out of bounds");
	}
	return this->_data.at(index);
}

template <typename K>
K &Vector<K>::operator[](size_t index)
{
	if (index >= this->_size)
	{
		throw std::out_of_range("Index out of bounds");
	}
	return this->_data[index];
}

template <typename K>
Matrix<K> Vector<K>::toMatrix(size_t rows, size_t cols) const
{
	if (rows * cols != this->_size)
	{
		throw IncompatibleSizeException();
	}
	Matrix<K> matrix(rows, cols);
	for (size_t j = 0; j < cols; j++)
	{
		for (size_t i = 0; i < rows; i++)
		{
			matrix[i, j] = (*this)[j * rows + i];
		}
	}
	return matrix;
}

template <typename K>
std::ostream &operator<<(std::ostream &os, const Vector<K> &vector)
{
	for (size_t i = 0; i < vector.getSize(); i++)
	{
		os << "[ " << vector[i] << " ]" << "\n";
	}
	return os;
}