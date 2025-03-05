#include "commons.hpp"

void test_matrix_base(void)
{
	size_t i = 0;
	{
		std::cout << "Test Matrix base " << ++i << ":" << std::endl;
		Matrix<float> matrix(2, 5);
		std::cout << "matrix number of rows: " << matrix.getRows() << std::endl;
		std::cout << "matrix number of cols: " << matrix.getCols() << std::endl;
		std::cout << "matrix is square: " << matrix.isSquare() << std::endl;
		std::cout << std::endl;
	}
	{
		std::cout << "Test Matrix base " << ++i << ":" << std::endl;
		std::vector<float> data = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f};
		std::cout << "std::vector to construct matrix from: " << std::endl;
		std::cout << "{ ";
		for (float value : data)
			std::cout << value << " ";
		std::cout << "}" << std::endl;
		Matrix<float> matrix(2, 3, data);
		std::cout << "matrix: " << std::endl;
		std::cout << matrix;
		Matrix<float> matrix2(3, 2, data);
		std::cout << "matrix2: " << std::endl;
		std::cout << matrix2;
		std::cout << "matrix is square: " << matrix.isSquare() << ", matrix2 is square: " << matrix2.isSquare() << std::endl;
		std::cout << std::endl;
	}
	{
		std::cout << "Test Matrix base " << ++i << ":" << std::endl;
		std::vector<float> data = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f};
		Matrix<float> matrix(2, 3, data);
		std::cout << "matrix: " << std::endl;
		std::cout << matrix;
		Vector<float> vector(6);
		matrix.toVector(vector);
		std::cout << "vector result from matrix: " << std::endl;
		std::cout << vector << std::endl;
	}
}

void test_vector_base(void)
{
	size_t i = 0;
	{
		std::cout << "Test Vector base " << ++i << ":" << std::endl;
		Vector<float> vector(5);
		std::cout << "vector size: " << vector.getSize() << std::endl;
		std::cout << std::endl;
	}
	{
		std::cout << "Test Vector base " << ++i << ":" << std::endl;
		std::vector<float> data = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f};
		std::cout << "std::vector to construct vector from: " << std::endl;
		std::cout << "{ ";
		for (float value : data)
			std::cout << value << " ";
		std::cout << "}" << std::endl;
		Vector<float> vector(data);
		std::cout << "vector: " << std::endl;
		std::cout << vector;
		std::cout << std::endl;
	}
	{
		std::cout << "Test Vector base " << ++i << ":" << std::endl;
		std::vector<float> data = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f};
		Vector<float> vector(data);
		std::cout << "vector: " << std::endl;
		std::cout << vector;
		Matrix<float> matrix(2, 3);
		vector.toMatrix(matrix);
		std::cout << "matrix result for a 2 x 3: " << std::endl;
		std::cout << matrix;
		Matrix<float> matrix2(3, 2);
		vector.toMatrix(matrix2);
		std::cout << "matrix2 result for a 3 x 2: " << std::endl;
		std::cout << matrix2;
	}
}

void test_base(void)
{
	test_matrix_base();
	test_vector_base();
	std::cout << "--------------------------------" << std::endl;
}