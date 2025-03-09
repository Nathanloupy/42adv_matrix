#include "Matrix.hpp"

template <typename K>
inline Matrix<K> Matrix<K>::inverse(void) const
{
	if (!isSquare())
		throw NotSquareMatrixException();
	K determinant = this->determinant();
	if (determinant == K())
		throw SingularMatrixException();
	//...
}