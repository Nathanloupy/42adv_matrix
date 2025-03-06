#include "commons.hpp"

void test_vector_ex01(void)
{
	std::cout << "Test Vector ex01" << std::endl;
	std::vector<float> data1 = {1.0f, 2.0f, 3.0f};
	std::vector<float> data2 = {2.0f, 3.0f, 4.0f};
	std::vector<float> scalars = {2.5f, 4.2f};
	Vector<float> vector1(data1);
	std::cout << "vector1: " << std::endl;
	std::cout << vector1;
	Vector<float> vector2(data2);
	std::cout << "vector2: " << std::endl;
	std::cout << vector2;
	std::cout << "scalars: " << std::endl;
	std::cout << "{ ";
	for (size_t i = 0; i < scalars.size(); i++)
	{
		std::cout << scalars[i] << " ";
	}
	std::cout << "}" << std::endl;
	Vector<float> result = linear_combination({vector1, vector2}, scalars);
	std::cout << "result: " << std::endl;
	std::cout << result << std::endl;
}

void test_matrix_ex01(void)
{
	std::cout << "Test Matrix ex01" << std::endl;
	std::vector<float> data1 = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f};
	std::vector<float> data2 = {2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f};
	std::vector<float> scalars = {2.5f, 4.2f};
	Matrix<float> matrix1(2, 3, data1);
	std::cout << "matrix1: " << std::endl;
	std::cout << matrix1;
	Matrix<float> matrix2(2, 3, data2);
	std::cout << "matrix2: " << std::endl;
	std::cout << matrix2;
	std::cout << "scalars: " << std::endl;
	std::cout << "{ ";
	for (size_t i = 0; i < scalars.size(); i++)
	{
		std::cout << scalars[i] << " ";
	}
	std::cout << "}" << std::endl;
	Matrix<float> result = linear_combination({matrix1, matrix2}, scalars);
	std::cout << "result: " << std::endl;
	std::cout << result;
}

void test_ex01(void)
{
	std::cout << "Ex01 tests : [Vector/Matrix] Linear combination" << std::endl;
	test_vector_ex01();
	test_matrix_ex01();
	std::cout << "--------------------------------" << std::endl;
}