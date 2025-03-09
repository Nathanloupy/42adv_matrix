#include "Matrix.hpp"

template <typename K>
inline size_t Matrix<K>::rank(void) const
{
	Matrix<K> rowEchelonMatrix = this->row_echelon();
	size_t rank = 0;
	for (size_t i = 0; i < rowEchelonMatrix.getRows(); i++)
	{
		for (size_t j = 0; j < rowEchelonMatrix.getCols(); j++)
		{
			if (rowEchelonMatrix[i, j] != K())
			{
				rank++;
				break;
			}
		}
	}
	return (rank);
}
