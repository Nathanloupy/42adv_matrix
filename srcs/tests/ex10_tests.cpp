#include "commons.hpp"

void test_matrix_ex10(void)
{
	static int i = 0;
	{
		std::cout << "Test Matrix ex10 " << ++i << ":" << std::endl;
		Matrix<float> u(1, 1, {9.0f});
		std::cout << "u: " << std::endl;
		std::cout << u;
		std::cout << "row_echelon of u: " << std::endl;
		std::cout << u.row_echelon();
	}
	{
		std::cout << "Test Matrix ex10 " << ++i << ":" << std::endl;
		Matrix<float> u(3, 3, {1.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 1.0f});
		std::cout << "u: " << std::endl;
		std::cout << u;
		std::cout << "row_echelon of u: " << std::endl;
		std::cout << u.row_echelon();
	}
	{
		std::cout << "Test Matrix ex10 " << ++i << ":" << std::endl;
		Matrix<float> u(2, 2, {1.0f, 3.0f, 2.0f, 4.0f});
		std::cout << "u: " << std::endl;
		std::cout << u;
		std::cout << "row_echelon of u: " << std::endl;
		std::cout << u.row_echelon();
	}
	{
		std::cout << "Test Matrix ex10 " << ++i << ":" << std::endl;
		Matrix<float> u(3, 5, {8.0f, 4.0f, 8.0f, 5.0f, 2.5f, 5.0f, -2.0f, 20.0f, 1.0f, 4.0f, 4.0f, 4.0f, 28.0f, -4.0f, 17.0f});
		std::cout << "u: " << std::endl;
		std::cout << u;
		std::cout << "row_echelon of u: " << std::endl;
		std::cout << u.row_echelon();
	}
}

void test_ex10(void)
{
	std::cout << "Ex10 tests : [Matrix] Row Echelon Form" << std::endl;
	test_matrix_ex10();
	std::cout << "--------------------------------" << std::endl;
}