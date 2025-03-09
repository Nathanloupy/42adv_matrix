#pragma once

#include "Vector.hpp"

template <typename K>
K Vector<K>::dot(const Vector<K> &v) const
{
	if (this->getSize() != v.getSize()) // c1 instructions
	{
		throw IncompatibleSizeException();
	}
	K result = 0;
	for (size_t i = 0; i < this->getSize(); i++) // * n + c2 instructions
	{
		result = result + this->_data[i] * v[i]; // c3 instructions
	}
	return result;
} //O(n) in time, O(1) in space
