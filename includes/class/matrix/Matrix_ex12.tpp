#include "Matrix.hpp"

template <typename K>
Matrix<K> Matrix<K>::augmented_matrix_identity(void) const
{
	Matrix<K> augmentedMatrix(this->getRows(), this->getCols() * 2); // c1 instructions (space : O(n^2))
	size_t n = this->getRows();
	for (size_t i = 0; i < n; i++) // * n + c2 instructions
		for (size_t j = 0; j < n; j++) // * n + c3 instructions
			augmentedMatrix[i, j] = this->operator[](i, j); // c4 instructions
	for (size_t i = 0; i < n; i++) // * n + c5 instructions
		augmentedMatrix[i, i + n] = K(1.0f); // c6 instructions
	return (augmentedMatrix);
} // O(n^2) in time, O(n^2) in space

template <typename K>
inline Matrix<K> Matrix<K>::inverse(void) const
{
	if (!isSquare())
		throw NotSquareMatrixException();
	K determinant = this->determinant(); // O(n^3) in time, O(n^2) in space
	if (determinant == K()) // c1 instructions
		throw SingularMatrixException();
	size_t n = this->getCols(); // c2 instructions (space : O(1))
	Matrix<K> augmentedMatrix = this->augmented_matrix_identity(); // O(n^2) in time, O(n^2) in space
	augmentedMatrix = augmentedMatrix.row_echelon(); // O(n^3) in time, O(n^2) in space
	Matrix<K> inverseMatrix = Matrix<K>(n, n); // c9 instructions (space : O(n^2))
	for (size_t i = 0; i < n; i++) // * n + c10 instructions
	{
		for (size_t j = 0; j < n; j++) // * n + c11 instructions
			inverseMatrix[i, j] = augmentedMatrix[i, j + n]; // c12 instructions
	}
	return (inverseMatrix);
} // O(n^3) in time, O(n^2) in space