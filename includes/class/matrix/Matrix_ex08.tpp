#include "Matrix.hpp"

template <typename K>
K Matrix<K>::trace() const
{
	if (!this->isSquare()) // c1 instructions
	{
		throw NotSquareMatrixException();
	}
	K result = 0; // c2 instructions
	for (size_t i = 0; i < this->getRows(); i++) // * n + c3 instructions
	{
		result += (*this)[i, i]; // c4 instructions
	}
	return result;
} // O(n) in time, O(1) in space