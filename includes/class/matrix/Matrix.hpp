#pragma once

#include "commons.hpp"

#include "Vector.hpp"

template <typename K>
class Vector;

template <typename K>
class Matrix
{
	private:
		size_t _rows;
		size_t _cols;
		std::vector<K> _data;

	public:
		Matrix(size_t rows, size_t cols);
		Matrix(const Matrix &other);
		Matrix &operator=(const Matrix &other);
		Matrix(size_t rows, size_t cols, const std::vector<K> &data);
		~Matrix();

		const K &operator[](size_t row, size_t col) const;
		K &operator[](size_t row, size_t col);

		bool isSquare() const;
		size_t getRows() const;
		size_t getCols() const;

		Vector<K> toVector() const;

		// EX00
		void add(const Matrix<K> &other);
		void sub(const Matrix<K> &other);
		void scl(const K &scalar);
};

template <typename K>
std::ostream &operator<<(std::ostream &os, const Matrix<K> &matrix);

// EX01
template <typename K>
Matrix<K> linear_combination(const std::vector<Matrix<K>> &matrices, const std::vector<K> &scalars);

#include "Matrix.tpp"
#include "Matrix_ex00.tpp"
#include "Matrix_ex01.tpp"