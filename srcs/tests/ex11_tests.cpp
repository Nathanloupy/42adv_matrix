#include "commons.hpp"

static void test_matrix_ex11(void)
{
	size_t i = 0;
	{
		std::cout << "Test Matrix ex11 " << ++i << ":" << std::endl;
		Matrix<float> A1(1, 1, {9.0f});
		std::cout << "A1: " << std::endl;
		std::cout << A1;
		std::cout << "determinant of A1: " << std::endl;
		std::cout << A1.determinant() << std::endl;
	}
	{
		std::cout << "Test Matrix ex11 " << ++i << ":" << std::endl;
		Matrix<float> A2(2, 2, {1.0f, -1.0f, -1.0f, 1.0f});
		std::cout << "A2: " << std::endl;
		std::cout << A2;
		std::cout << "determinant of A2: " << std::endl;
		std::cout << A2.determinant() << std::endl;
	}
	{
		std::cout << "Test Matrix ex11 " << ++i << ":" << std::endl;
		Matrix<float> A3(3, 3, {8.0f, 4.0f, 7.0f, 5.0f, 7.0f, 6.0f, -2.0f, 20.0f, 1.0f});
		std::cout << "A3: " << std::endl;
		std::cout << A3;
		std::cout << "determinant of A3: " << std::endl;
		std::cout << A3.determinant() << std::endl;
	}
	{
		std::cout << "Test Matrix ex11 " << ++i << ":" << std::endl;
		Matrix<float> A4(4, 4, {8.0f, 4.0f, 8.0f, 28.0f, 5.0f, 2.5f, 5.0f, -4.0f, -2.0f, 20.0f, 1.0f, 17.0f, 4.0f, 4.0f, 4.0f, 1.0f});
		std::cout << "A4: " << std::endl;
		std::cout << A4;
		std::cout << "determinant of A4: " << std::endl;
		std::cout << A4.determinant() << std::endl;
	}
}

void test_ex11(void)
{
	std::cout << "Ex11 tests : [Matrix] Determinant" << std::endl;
	test_matrix_ex11();
	std::cout << "--------------------------------" << std::endl;
}