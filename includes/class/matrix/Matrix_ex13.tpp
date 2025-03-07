#include "Matrix.hpp"

template <>
inline size_t Matrix<float>::rank(void) const
{
	Matrix<float> rowEchelonMatrix = this->row_echelon();
	size_t rank = 0;
	for (size_t i = 0; i < rowEchelonMatrix.getRows(); i++)
	{
		for (size_t j = 0; j < rowEchelonMatrix.getCols(); j++)
		{
			if (rowEchelonMatrix[i, j] != 0)
			{
				rank++;
				break;
			}
		}
	}
	return (rank);
}

