#pragma once

#include "Vector.hpp"

template <typename K>
Vector<K> lerp(const Vector<K> &u, const Vector<K> &v, const float &t)
{
	if (u.getSize() != v.getSize()) // c1 instructions
	{
		throw IncompatibleSizeException();
	}
	Vector<K> result(u.getSize()); // c2 instructions (space : O(n))
	for (size_t i = 0; i < u.getSize(); i++) // * n + c3 instructions
	{
		result[i] = v[i] * t + u[i] * (1 - t); // c4 instructions
	}
	return result;
} //O(n) in time, O(n) in space
