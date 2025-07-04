#pragma once

#include "commons.hpp"

#include "Vector.hpp"

template <typename K>
class Vector;

template <typename K>
class Matrix
{
	private:
		size_t			_rows;
		size_t			_cols;
		std::vector<K>	_data;

		// EX10 utils
		void swapRows(size_t row1, size_t row2);
		Matrix<K> row_echelon_helper(K &determinant) const;

		// EX12 utils
		Matrix<K> augmented_matrix_identity(void) const;

	public:
		Matrix(size_t rows, size_t cols);
		Matrix(const Matrix &other);
		Matrix &operator=(const Matrix &other);
		Matrix(size_t rows, size_t cols, const std::vector<K> &data);
		~Matrix();

		const K &operator()(size_t row, size_t col) const;
		K &operator()(size_t row, size_t col);

		bool	isSquare() const;
		size_t	getRows() const;
		size_t	getCols() const;

		void toVector(Vector<K> &vector) const;

		// EX00
		void add(const Matrix<K> &other);
		void sub(const Matrix<K> &other);
		void scl(const K &scalar);

		// EX07
		Vector<K> mul_vec(const Vector<K> &vec) const;
		Matrix<K> mul_mat(const Matrix<K> &mat) const;

		// EX08
		K trace(void) const;

		// EX09
		Matrix<K> transpose(void) const;

		// EX10
		Matrix<K> row_echelon(void) const;

		// EX11
		K determinant(void) const;

		// EX12
		Matrix<K> inverse(void) const;

		// EX13
		size_t rank(void) const;

		// EX14
		void exportToProj(void) const;
		static Matrix<float> projection(float fov, float ratio, float near, float far);
};

template <typename K>
std::ostream &operator<<(std::ostream &os, const Matrix<K> &matrix);

// EX01
template <typename K>
Matrix<K> linear_combination(const std::vector<Matrix<K>> &matrices, const std::vector<K> &scalars);

// EX02
template <typename K>
Matrix<K> lerp(const Matrix<K> &u, const Matrix<K> &v, const float &t);


#include "Matrix.tpp"
#include "Matrix_ex00.tpp"
#include "Matrix_ex01.tpp"
#include "Matrix_ex02.tpp"
#include "Matrix_ex07.tpp"
#include "Matrix_ex08.tpp"
#include "Matrix_ex09.tpp"
#include "Matrix_ex10.tpp"
#include "Matrix_ex11.tpp"
#include "Matrix_ex12.tpp"
#include "Matrix_ex13.tpp"
#include "Matrix_ex14.tpp"