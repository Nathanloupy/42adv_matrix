#include "Matrix.hpp"

template <typename K>
inline size_t Matrix<K>::rank(void) const
{
	Matrix<K> rowEchelonMatrix = this->row_echelon(); // O(n^3) in time, O(n^2) in space
	size_t rank = 0; // c1 instructions (space : O(1))
	for (size_t i = 0; i < rowEchelonMatrix.getRows(); i++) // * n + c2 instructions
	{
		for (size_t j = 0; j < rowEchelonMatrix.getCols(); j++) // * n + c3 instructions
		{
			if (rowEchelonMatrix(i, j) != K()) // c4 instructions
			{
				rank++; // c5 instructions
				break;
			}
		}
	}
	return (rank);
} // O(n^3) in time, O(n^2) in space
