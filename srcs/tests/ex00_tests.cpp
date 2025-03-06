#include "commons.hpp"

void test_vector_ex00(void)
{
	size_t i = 0;
	{
		std::cout << "Test Vector ex00 " << ++i << ":" << std::endl;
		std::vector<float> data1 = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f};
		Vector<float> vector1(data1);
		std::cout << "vector1: " << std::endl;
		std::cout << vector1;
		std::vector<float> data2 = {6.0f, 7.0f, 8.0f, 9.0f, 10.0f};
		Vector<float> vector2(data2);
		std::cout << "vector2: " << std::endl;
		std::cout << vector2;
		vector1.add(vector2);
		std::cout << "vector1 + vector2: " << std::endl;
		std::cout << vector1 << std::endl;
	}
	{
		std::cout << "Test Vector ex00 " << ++i << ":" << std::endl;
		std::vector<float> data1 = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f};
		Vector<float> vector1(data1);
		std::cout << "vector1: " << std::endl;
		std::cout << vector1;
		std::vector<float> data2 = {6.0f, 7.0f, 8.0f, 9.0f, 10.0f};
		Vector<float> vector2(data2);
		std::cout << "vector2: " << std::endl;
		std::cout << vector2;
		vector1.sub(vector2);
		std::cout << "vector1 - vector2: " << std::endl;
		std::cout << vector1 << std::endl;
	}
	{
		std::cout << "Test Vector ex00 " << ++i << ":" << std::endl;
		std::vector<float> data1 = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f};
		Vector<float> vector1(data1);
		std::cout << "vector1: " << std::endl;
		std::cout << vector1;
		float scalar = 42.42f;
		vector1.scl(scalar);
		std::cout << "vector1 * " << scalar << ": " << std::endl;
		std::cout << vector1 << std::endl;
	}
}

void test_matrix_ex00(void)
{
	size_t i = 0;
	{
		std::cout << "Test Matrix ex00 " << ++i << ":" << std::endl;
		std::vector<float> data1 = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f};
		Matrix<float> matrix1(2, 3, data1);
		std::cout << "matrix1: " << std::endl;
		std::cout << matrix1;
		std::vector<float> data2 = {6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f};
		Matrix<float> matrix2(2, 3, data2);
		std::cout << "matrix2: " << std::endl;
		std::cout << matrix2;
		matrix1.add(matrix2);
		std::cout << "matrix1 + matrix2: " << std::endl;
		std::cout << matrix1 << std::endl;
	}
	{
		std::cout << "Test Matrix ex00 " << ++i << ":" << std::endl;
		std::vector<float> data1 = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f};
		Matrix<float> matrix1(2, 3, data1);
		std::cout << "matrix1: " << std::endl;
		std::cout << matrix1;
		std::vector<float> data2 = {6.0f, 7.0f, 8.0f, 9.0f, 10.0f, 11.0f};
		Matrix<float> matrix2(2, 3, data2);
		std::cout << "matrix2: " << std::endl;
		std::cout << matrix2;
		matrix1.sub(matrix2);
		std::cout << "matrix1 - matrix2: " << std::endl;
		std::cout << matrix1 << std::endl;
	}
	{
		std::cout << "Test Matrix ex00 " << ++i << ":" << std::endl;
		std::vector<float> data1 = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f};
		Matrix<float> matrix1(2, 3, data1);
		std::cout << "matrix1: " << std::endl;
		std::cout << matrix1;
		float scalar = 42.42f;
		matrix1.scl(scalar);
		std::cout << "matrix1 * " << scalar << ": " << std::endl;
		std::cout << matrix1 << std::endl;
	}
}

void test_ex00(void)
{
	test_vector_ex00();
	test_matrix_ex00();
	std::cout << "--------------------------------" << std::endl;
}