#include "commons.hpp"

static void test_matrix_ex09(void)
{
	size_t i = 0;
	{
		std::cout << "Test Matrix ex09 " << ++i << ":" << std::endl;
		Matrix<float> u(3, 3, {1.0f, -2.0f, 3.0f, -4.0f, 5.0f, -6.0f, -7.0f, -8.0f, -9.0f});
		std::cout << "u: " << std::endl;
		std::cout << u;
		std::cout << "transpose of u: " << std::endl;
		std::cout << u.transpose();
	}
	{
		std::cout << "Test Matrix ex09 " << ++i << ":" << std::endl;
		Matrix<float> u(3, 2, {1.0f, -2.0f, 3.0f, -4.0f, 5.0f, -6.0f});
		std::cout << "u: " << std::endl;
		std::cout << u;
		std::cout << "transpose of u: " << std::endl;
		std::cout << u.transpose();
	}
	{
		std::cout << "Test Matrix ex09 " << ++i << ":" << std::endl;
		Matrix<float> u(2, 3, {1.0f, -2.0f, 3.0f, -4.0f, 5.0f, -6.0f});
		std::cout << "u: " << std::endl;
		std::cout << u;
		std::cout << "transpose of u: " << std::endl;
		std::cout << u.transpose();
	}
	{
		std::cout << "Test Matrix ex09 " << ++i << ":" << std::endl;
		Matrix<float> u(4, 3, {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f});
		std::cout << "u: " << std::endl;
		std::cout << u;
		std::cout << "transpose of u: " << std::endl;
		std::cout << u.transpose();
	}
}

void test_ex09(void)
{
	std::cout << "Ex09 tests : [Matrix] Transpose" << std::endl;
	test_matrix_ex09();
	std::cout << "--------------------------------" << std::endl;
}