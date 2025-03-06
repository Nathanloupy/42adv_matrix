#pragma once

#include "Vector.hpp"

template <typename K>
Vector<K> lerp(const Vector<K> &u, const Vector<K> &v, const float &t)
{
	if (u.getSize() != v.getSize()) // c1 instructions
	{
		throw IncompatibleSizeException();
	}
	Vector<K> result(u.getSize());
	for (size_t i = 0; i < u.getSize(); i++) // * n + c2 instructions
	{
		result[i] = t * u[i] + (1 - t) * v[i]; // c3 instructions
	}
	return result;
} //O(n) in time, O(n) in space
