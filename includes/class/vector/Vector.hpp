#pragma once

#include "commons.hpp"
#include "Matrix.hpp"

template <typename K>
class Matrix;

template <typename K>
class Vector
{
	private:
		size_t _size;
		std::vector<K> _data;

	public:
		Vector(size_t size);
		Vector(const Vector &other);
		Vector(const std::vector<K> &data);
		Vector &operator=(const Vector &other);
		~Vector();

		const K &operator[](size_t index) const;
		K &operator[](size_t index);

		size_t getSize() const;

		void toMatrix(Matrix<K> &matrix) const;

		// EX00
		void add(const Vector<K> &other);
		void sub(const Vector<K> &other);
		void scl(const K &scalar);

		// EX03
		K dot(const Vector<K> &v) const;

		// EX04
		float norm_1() const;
		float norm() const;
		float norm_inf() const;
};

template <typename K>
std::ostream &operator<<(std::ostream &os, const Vector<K> &vector);

// EX01
template <typename K>
Vector<K> linear_combination(const std::vector<Vector<K>> &vectors, const std::vector<K> &scalars);

// EX02
template <typename K>
Vector<K> lerp(const Vector<K> &u, const Vector<K> &v, const float &t);

// EX05
template <typename K>
float angle_cos(const Vector<K> &u, const Vector<K> &v);

// EX06
template <typename K>
Vector<K> cross_product(const Vector<K> &u, const Vector<K> &v);

#include "Vector.tpp"
#include "Vector_ex00.tpp"
#include "Vector_ex01.tpp"
#include "Vector_ex02.tpp"
#include "Vector_ex03.tpp"
#include "Vector_ex04.tpp"
#include "Vector_ex05.tpp"
#include "Vector_ex06.tpp"