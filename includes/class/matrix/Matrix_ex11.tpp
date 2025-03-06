#pragma once

#include "Matrix.hpp"

template <>
inline float Matrix<float>::determinant_2x2(void) const
{
	
}

template <>
inline float Matrix<float>::determinant_3x3(void) const
{
	return 0;
}

template <>
inline float Matrix<float>::determinant(void) const
{
	if (!isSquare())
		throw NotSquareMatrixException();
	else if (this->getRows() > 4)
		throw InvalidSizeException();
	else if (this->getRows() == 2)
		return (this->determinant_2x2());
	else if (this->getRows() == 3)
		return (this->determinant_3x3());
}
