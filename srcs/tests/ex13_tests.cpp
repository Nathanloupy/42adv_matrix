#include "commons.hpp"

void test_matrix_ex13(void)
{
	size_t i = 0;
	{
		std::cout << "Test Matrix ex13 " << ++i << ":" << std::endl;
		Matrix<float> A1(1, 1, {9.0f});
		std::cout << "A1: " << std::endl;
		std::cout << A1;
		std::cout << "rank of A1: " << std::endl;
		std::cout << A1.rank() << std::endl;
	}
	{
		std::cout << "Test Matrix ex13 " << ++i << ":" << std::endl;
		Matrix<float> u(3, 3, {1.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 1.0f});
		std::cout << "u: " << std::endl;
		std::cout << u;
		std::cout << "rank of u: " << std::endl;
		std::cout << u.rank() << std::endl;
	}
	{
		std::cout << "Test Matrix ex13 " << ++i << ":" << std::endl;
		Matrix<float> u(3, 4, {1.0f, 2.0f, -1.0f, 2.0f, 4.0f, 2.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 1.0f});
		std::cout << "u: " << std::endl;
		std::cout << u;
		std::cout << "rank of u: " << std::endl;
		std::cout << u.rank() << std::endl;
	}
	{
		std::cout << "Test Matrix ex13 " << ++i << ":" << std::endl;
		Matrix<float> u(4, 3, {8.0f, 4.0f, 7.0f, 21.0f, 5.0f, 7.0f, 6.0f, 18.0f, -2.0f, 20.0f, 1.0f, 7.0f});
		std::cout << "u: " << std::endl;
		std::cout << u;
		std::cout << "rank of u: " << std::endl;
		std::cout << u.rank() << std::endl;
	}
}

void test_ex13(void)
{
	std::cout << "Ex13 tests : [Matrix] Rank" << std::endl;
	test_matrix_ex13();
	std::cout << "--------------------------------" << std::endl;
}