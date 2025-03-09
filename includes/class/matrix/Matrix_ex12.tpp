#include "Matrix.hpp"

template <typename K>
inline Matrix<K> Matrix<K>::inverse(void) const
{
	if (!isSquare())
		throw NotSquareMatrixException();
	K determinant = this->determinant();
	if (determinant == K())
		throw SingularMatrixException();
	size_t n = this->getCols();
	Matrix<K> augmentedMatrix = Matrix<K>(n, n * 2);
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n; j++)
			augmentedMatrix[i, j] = this->operator[](i, j);
	}
	for (size_t i = 0; i < n; i++)
		augmentedMatrix[i, i + n] = K(1.0f);
	augmentedMatrix = augmentedMatrix.row_echelon();
	Matrix<K> inverseMatrix = Matrix<K>(n, n);
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n; j++)
			inverseMatrix[i, j] = augmentedMatrix[i, j + n];
	}
	return (inverseMatrix);
}