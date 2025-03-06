#include "commons.hpp"

void test_matrix_ex07_mul_vec(void)
{
	std::cout << "Test Matrix ex07 mul_vec" << std::endl;
	std::vector<float> data1 = {1.0f, 2.0f, -1.0f, 3.0f, 1.0f, -2.0f};
	Matrix<float> u(2, 3, data1);
	std::cout << "u: " << std::endl;
	std::cout << u;
	std::vector<float> data2 = {2.0f, -3.0f, 1.0f};
	Vector<float> v(data2);
	std::cout << "v: " << std::endl;
	std::cout << v;
	Vector<float> result = u.mul_vec(v);
	std::cout << "result: " << std::endl;
	std::cout << result;
}

void test_matrix_ex07_mul_mat(void)
{
	std::cout << "Test Matrix ex07 mul_mat" << std::endl;
	Matrix<float> u(2, 3, {1.0f, 2.0f, -1.0f, 3.0f, 1.0f, -2.0f});
	Matrix<float> v(3, 4, {2.0f, 3.0f, 1.0f, -4.0f, 5.0f, 4.0f, 3.0f, 2.0f, 3.0f, 2.0f, -2.0f, -3.0f});
	std::cout << "u: " << std::endl;
	std::cout << u;
	std::cout << "v: " << std::endl;
	std::cout << v;
	Matrix<float> result = u.mul_mat(v);
	std::cout << "result: " << std::endl;
	std::cout << result;
}

void test_matrix_ex07(void)
{
	test_matrix_ex07_mul_vec();
	test_matrix_ex07_mul_mat();
}

void test_ex07(void)
{
	std::cout << "Ex07 tests : [Matrix] Linear map, Matrix multiplication" << std::endl;
	test_matrix_ex07();
	std::cout << "--------------------------------" << std::endl;
}
