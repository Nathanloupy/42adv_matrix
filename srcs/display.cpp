#include "commons.hpp"

#define FOV 90.0f
#define RATIO 16.0f / 9.0f
#define NEAR 0.1f
#define FAR 100.0f

void display(void)
{
	Matrix<float> projectionMatrix = Matrix<float>::projection(FOV, RATIO, NEAR, FAR);
	projectionMatrix.exportToProj();
	std::cout << "Projection matrix successfully exported to proj file!" << std::endl;
}