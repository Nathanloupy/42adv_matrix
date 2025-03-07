#include "Matrix.hpp"

template <>
inline Matrix<float> Matrix<float>::inverse(void) const
{
	if (!isSquare())
		throw NotSquareMatrixException();
	float determinant = this->determinant();
	if (determinant == 0)
		throw SingularMatrixException();
	// ...
	Matrix<float> inverseMatrix(this->getRows(), this->getCols());
	return (inverseMatrix);
}
