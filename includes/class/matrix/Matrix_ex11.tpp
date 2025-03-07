#pragma once

#include "Matrix.hpp"

template <>
inline float Matrix<float>::determinant(void) const
{
	if (!isSquare())
		throw NotSquareMatrixException();
	else if (this->getRows() > 4)
		throw InvalidSizeException();
	float determinant = 1.0f;
	this->row_echelon_helper(determinant);
	return (determinant);
}
