#pragma once

#include "Matrix.hpp"

template <typename K>
inline K Matrix<K>::determinant(void) const
{
	if (!isSquare())
		throw NotSquareMatrixException();
	else if (this->getRows() > 4)
		throw InvalidSizeException();
	K determinant = K(1.0f);
	this->row_echelon_helper(determinant);
	return (determinant);
}
