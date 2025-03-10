#include "Matrix.hpp"
#include <cmath>

template <typename K>
void Matrix<K>::swapRows(size_t row1, size_t row2)
{
	for (size_t j = 0; j < this->getCols(); j++) // * n + c1 instructions
	{
		K temp = (*this)(row1, j); // c2 instructions
		(*this)(row1, j) = (*this)(row2, j); // c3 instructions
		(*this)(row2, j) = temp; // c4 instructions
	}
} //O(n) in time, O(1) in space

template <typename K>
inline Matrix<K> Matrix<K>::row_echelon_helper(K &determinant) const
{
	Matrix<K> rowEchelonMatrix(*this); //O(nm) in time, O(nm) in space

	size_t m = rowEchelonMatrix.getRows();
	size_t n = rowEchelonMatrix.getCols();
	size_t lead = 0;
	size_t i = 0;
	K pivot = K();
	K factor = K();
	// c1 instructions for the 6 variables (space : O(1))

	for (size_t r = 0; r < m; r++) // * m + c2 instructions
	{
		if (lead >= n) // c3 instructions
			break;

		i = r; // c4 instructions
		while (i < m && utils::abs(rowEchelonMatrix(i, lead)) < 1e-5f) // * m + c5 instructions (worst case : m)
			i++;
		
		if (i == m)
		{
			determinant = K();
			lead++;
			r--;
			continue;
		} // c6 instructions

		if (i != r) // c7 instructions
		{
			rowEchelonMatrix.swapRows(r, i); // O(n) in time, O(1) in space
			determinant = determinant * -1.0f; // c8 instructions
		}

		pivot = rowEchelonMatrix(r, lead); // c9 instructions
		determinant = determinant * pivot; // c10 instructions

		for (size_t j = lead; j < n; j++) // * n + c11 instructions
			rowEchelonMatrix(r, j) = rowEchelonMatrix(r, j) / pivot; // c12 instructions
		
		for (size_t l = 0; l < m; l++) // * m + c13 instructions
		{
			if (l != r) // c14 instructions
			{
				factor = rowEchelonMatrix(l, lead); // c15 instructions
				for (size_t j = lead; j < n; j++) // * n + c16 instructions
					rowEchelonMatrix(l, j) = rowEchelonMatrix(l, j) - factor * rowEchelonMatrix(r, j); // c17 instructions
			}
		}
		lead++; // c18 instructions
	}
	return (rowEchelonMatrix);
} // O(nm^2) in time, O(nm) in space

template <typename K>
inline Matrix<K> Matrix<K>::row_echelon(void) const
{
	K determinant = K(1.0f); // c1 instructions (space : O(1))
	return (this->row_echelon_helper(determinant)); // O(nm^2) in time, O(nm) in space
} // O(nm^2) in time, O(nm) in space