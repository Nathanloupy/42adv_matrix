#include "Matrix.hpp"

template <typename K>
Matrix<K> Matrix<K>::transpose(void) const
{
	Matrix<K> result(this->getCols(), this->getRows()); // c1 instructions
	for (size_t i = 0; i < this->getRows(); i++) // * m + c2 instructions
	{
		for (size_t j = 0; j < this->getCols(); j++) // * n + c3 instructions
			result[j, i] = (*this)[i, j]; // c4 instructions
	}
	return result;
} // O(nm) in time, O(nm) in space