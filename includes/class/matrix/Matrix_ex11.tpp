#pragma once

#include "Matrix.hpp"

template <typename K>
inline K Matrix<K>::determinant(void) const
{
	if (!isSquare()) // c1 instructions
		throw NotSquareMatrixException();
	else if (this->getRows() > 4) // c2 instructions
		throw InvalidSizeException();
	K determinant = K(1.0f); // c3 instructions (space : O(1))
	this->row_echelon_helper(determinant); // O(n^3) in time, O(n^2) in space
	return (determinant);
} // O(n^3) in time, O(n^2) in space (because here m = n)
