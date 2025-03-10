#pragma once

#include "Vector.hpp"

template <typename K>
Vector<K> cross_product(const Vector<K> &u, const Vector<K> &v)
{
	if (u.getSize() != 3 || v.getSize() != 3)
	{
		throw InvalidSizeException();
	}
	Vector<K> result(3);
	result[0] = u[1] * v[2] - u[2] * v[1];
	result[1] = u[2] * v[0] - u[0] * v[2];
	result[2] = u[0] * v[1] - u[1] * v[0];
	return result;
} //time and space complexity not needed
