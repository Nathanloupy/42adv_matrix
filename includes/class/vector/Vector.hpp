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
};

template <typename K>
std::ostream &operator<<(std::ostream &os, const Vector<K> &vector);

// EX01
template <typename K>
Vector<K> linear_combination(const std::vector<Vector<K>> &vectors, const std::vector<K> &scalars);

// EX02
template <typename K>
Vector<K> lerp(const Vector<K> &u, const Vector<K> &v, const float &t);

#include "Vector.tpp"
#include "Vector_ex00.tpp"
#include "Vector_ex01.tpp"
#include "Vector_ex02.tpp"