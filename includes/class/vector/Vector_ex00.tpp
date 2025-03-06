#pragma once

#include "Vector.hpp"

template <typename K>
void Vector<K>::add(const Vector<K> &other)
{
	if (this->_size != other._size) // c1 instructions
	{
		throw IncompatibleSizeException();
	}
	for (size_t i = 0; i < this->_size; i++) // * n + c2 instructions
		(*this)[i] += other[i]; // c3 instructions
} //O(n) in time, O(1) in space

template <typename K>
void Vector<K>::sub(const Vector<K> &other)
{
	if (this->_size != other._size) // c1 instructions
	{
		throw IncompatibleSizeException();
	}
	for (size_t i = 0; i < this->_size; i++) // * n + c2 instructions
	{
		(*this)[i] -= other[i]; // c3 instructions
	}
} //O(n) in time, O(1) in space

template <typename K>
void Vector<K>::scl(const K &scalar)
{
	for (size_t i = 0; i < this->_size; i++) // * n + c2 instructions
	{
		(*this)[i] *= scalar; // c3 instructions
	}
} //O(n) in time, O(1) in space
