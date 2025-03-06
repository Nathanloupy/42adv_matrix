#include "commons.hpp"

void test_vector_ex02(void)
{
	std::cout << "Test Vector ex02" << std::endl;
	std::vector<float> data1 = {1.0f, 2.0f, 3.0f};
	Vector<float> u(data1);
	std::cout << "u: " << std::endl;
	std::cout << u;
	std::vector<float> data2 = {4.0f, 5.0f, 6.0f};
	Vector<float> v(data2);
	std::cout << "v: " << std::endl;
	std::cout << v;
	float t = 0.6f;
	std::cout << "t: " << t << std::endl;
	Vector<float> result = lerp(u, v, t);
	std::cout << "result: " << std::endl;
	std::cout << result << std::endl;
}

void test_matrix_ex02(void)
{
	std::cout << "Test Matrix ex02" << std::endl;
	std::vector<float> data1 = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f};
	Matrix<float> u(2, 3, data1);
	std::cout << "u: " << std::endl;
	std::cout << u;
	std::vector<float> data2 = {7.0f, 8.0f, 9.0f, 10.0f, 11.0f, 12.0f};
	Matrix<float> v(2, 3, data2);
	std::cout << "v: " << std::endl;
	std::cout << v;
	float t = 0.6f;
	std::cout << "t: " << t << std::endl;
	Matrix<float> result = lerp(u, v, t);
	std::cout << "result: " << std::endl;
	std::cout << result << std::endl;
}

void test_ex02(void)
{
	std::cout << "Ex02 tests : [Vector/Matrix] Linear interpolation" << std::endl;
	test_vector_ex02();
	test_matrix_ex02();
	std::cout << "--------------------------------" << std::endl;
}
