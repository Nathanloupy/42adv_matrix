#pragma once

#include "Vector.hpp"

template <typename K>
float angle_cos(const Vector<K> &u, const Vector<K> &v)
{
	float u_norm = u.norm(); // O(n) in time, O(1) in space
	float v_norm = v.norm(); // O(n) in time, O(1) in space
	float dot_product = utils::abs(u.dot(v)); // O(n) in time, O(1) in space
	return dot_product / (u_norm * v_norm); // c1 instructions
} // O(n) in time, O(1) in space