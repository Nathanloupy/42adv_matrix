#include "commons.hpp"

void test_matrix_ex12(void)
{
	size_t i = 0;
	{
		std::cout << "Test Matrix ex12 " << ++i << ":" << std::endl;
		std::vector<float> data = {1.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 1.0f};
		Matrix<float> matrix = Matrix<float>(3, 3, data);
		Matrix<float> inverse = matrix.inverse();
		std::cout << "Matrix : " << std::endl;
		std::cout << matrix;
		std::cout << "Inverse : " << std::endl;
		std::cout << inverse;
	}
	{
		std::cout << "Test Matrix ex12 " << ++i << ":" << std::endl;
		std::vector<float> data = {2.0f, 0.0f, 0.0f, 0.0f, 2.0f, 0.0f, 0.0f, 0.0f, 2.0f};
		Matrix<float> matrix = Matrix<float>(3, 3, data);
		Matrix<float> inverse = matrix.inverse();
		std::cout << "Matrix : " << std::endl;
		std::cout << matrix;
		std::cout << "Inverse : " << std::endl;
		std::cout << inverse;
	}
	{
		std::cout << "Test Matrix ex12 " << ++i << ":" << std::endl;
		std::vector<float> data = {8.0f, 4.0f, 7.0f, 5.0f, 7.0f, 6.0f, -2.0f, 20.0f, 1.0f};
		Matrix<float> matrix = Matrix<float>(3, 3, data);
		Matrix<float> inverse = matrix.inverse();
		std::cout << "Matrix : " << std::endl;
		std::cout << matrix;
		std::cout << "Inverse : " << std::endl;
		std::cout << inverse;
	}
}

void test_ex12(void)
{
	std::cout << "Ex12 tests : [Matrix] Inverse" << std::endl;
	test_matrix_ex12();
	std::cout << "--------------------------------" << std::endl;
}