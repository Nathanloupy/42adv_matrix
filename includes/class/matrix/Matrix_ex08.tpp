#include "Matrix.hpp"

template <typename K>
K Matrix<K>::trace() const
{
	if (!this->isSquare()) // c1 instructions
	{
		throw NotSquareMatrixException();
	}
	K result = K(); // c2 instructions (space : O(1))
	for (size_t i = 0; i < this->getRows(); i++) // * n + c3 instructions
	{
		result = result + (*this)[i, i]; // c4 instructions
	}
	return result;
} // O(n) in time, O(1) in space