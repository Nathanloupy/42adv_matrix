#pragma once

#include "Vector.hpp"

template <typename K>
float angle_cos(const Vector<K> &u, const Vector<K> &v)
{
	float u_norm = u.norm();
	float v_norm = v.norm();
	float dot_product = u.dot(v);
	return dot_product / (u_norm * v_norm);
}
