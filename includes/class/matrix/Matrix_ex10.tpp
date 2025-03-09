#include "Matrix.hpp"
#include <cmath>

template <typename K>
void Matrix<K>::swapRows(size_t row1, size_t row2)
{
	for (size_t j = 0; j < this->getCols(); j++)
	{
		K temp = (*this)[row1, j];
		(*this)[row1, j] = (*this)[row2, j];
		(*this)[row2, j] = temp;
	}
}

template <typename K>
inline Matrix<K> Matrix<K>::row_echelon_helper(K &determinant) const
{
	Matrix<K> rowEchelonMatrix(*this);
	size_t m = rowEchelonMatrix.getRows();
	size_t n = rowEchelonMatrix.getCols();

	size_t lead = 0;
	K pivot = K();
	K factor = K();

	for (size_t r = 0; r < m; r++)
	{
		if (lead >= n)
			break;

		size_t i = r;
		while (i < m && utils::abs(rowEchelonMatrix[i, lead]) < 1e-5f)
			i++;
		
		if (i == m)
		{
			determinant = K();
			lead++;
			r--;
			continue;
		}

		if (i != r)
		{
			rowEchelonMatrix.swapRows(r, i);
			determinant = determinant * -1.0f;
		}

		pivot = rowEchelonMatrix[r, lead];
		determinant = determinant * pivot;

		for (size_t j = lead; j < n; j++)
			rowEchelonMatrix[r, j] = rowEchelonMatrix[r, j] / pivot;
		
		for (size_t l = 0; l < m; l++)
		{
			if (l != r)
			{
				factor = rowEchelonMatrix[l, lead];
				for (size_t j = lead; j < n; j++)
					rowEchelonMatrix[l, j] = factor * rowEchelonMatrix[r, j];
			}
		}
		lead++;
	}
	return (rowEchelonMatrix);
}

//TODO: calculate complexity

template <typename K>
inline Matrix<K> Matrix<K>::row_echelon(void) const
{
	K determinant = K(1.0f);
	return (this->row_echelon_helper(determinant));
}