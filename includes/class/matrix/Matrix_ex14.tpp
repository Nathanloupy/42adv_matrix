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
			file << (*this)[i, j];
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
	float tan_half_fov = tan(fov_rad / 2.0f);
	float z_range = far - near;
	Matrix<float> projection(4, 4);
	projection[0, 0] = 1.0f / (ratio * tan_half_fov);
	projection[1, 1] = 1.0f / tan_half_fov;
	projection[2, 2] = -(far + near) / z_range;
	projection[2, 3] = -2.0f * near * far / z_range;
	projection[3, 2] = -1.0f;
	return projection;
}

