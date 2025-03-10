#include "Matrix.hpp"

#include <fstream>

template <>
inline void Matrix<float>::exportToProj(void) const
{
	std::ofstream file("proj");
	if (!file.is_open())
	{
		throw std::runtime_error("Failed to open file");
	}
	for (size_t i = 0; i < this->getRows(); i++)
	{
		for (size_t j = 0; j < this->getCols(); j++)
		{
			file << (*this)(i, j);
			if (j < this->getCols() - 1)
				file << ", ";
		}
		file << "\n";
	}
	file.close();
}

template <>
inline Matrix<float> Matrix<float>::projection(float fov, float ratio, float near, float far)
{
	float fov_rad = fov * (M_PI / 180.0f);
	float tangent = tanf(fov_rad / 2.0f);
	float top = near * tangent;
	float right = top * ratio;
	Matrix<float> projection(4, 4);
	projection(0, 0) = near / right;
	projection(1, 1) = near / top;
	projection(2, 2) = -(far + near) / (far - near);
	projection(3, 2) = -(2.0f * far * near) / (far - near);
	projection(2, 3) = -1.0f;
	return projection;
}

