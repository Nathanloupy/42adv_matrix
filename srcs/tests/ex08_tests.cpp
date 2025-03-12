#include "commons.hpp"

static void test_matrix_ex08(void)
{
	std::cout << "Test Matrix ex08 trace" << std::endl;
	Matrix<float> u(3, 3, {1.0f, -2.0f, 3.0f, -4.0f, 5.0f, -6.0f, -7.0f, -8.0f, -9.0f});
	std::cout << "u: " << std::endl;
	std::cout << u;
	std::cout << "trace: " << u.trace() << std::endl;
}

void test_ex08(void)
{
	std::cout << "Ex08 tests : [Matrix] Trace" << std::endl;
	test_matrix_ex08();
	std::cout << "--------------------------------" << std::endl;
}