#include "commons.hpp"

void test_vector_ex15(void)
{
	size_t i = 0;
	{
		std::cout << "Test Vector ex15 " << ++i << ":" << std::endl;
		std::vector<Complex> data = {Complex(1, 2), Complex(3, 4), Complex(5, 6)};
		Vector<Complex> v1(data);
		std::cout << "v1: " << std::endl;
		std::cout << v1;
		std::vector<Complex> data2 = {Complex(5, 3), Complex(-2, 0), Complex(8, -1)};
		Vector<Complex> v2(data2);
		std::cout << "v2: " << std::endl;
		std::cout << v2;
		std::cout << "v1 = v1 + v2: " << std::endl;
		v1.add(v2);
		std::cout << v1;
	}
	{
		std::cout << "Test Vector ex15 " << ++i << ":" << std::endl;
		std::vector<Complex> data = {Complex(1, 2), Complex(3, 4), Complex(5, 6)};
		Vector<Complex> u(data);
		std::cout << "u: " << std::endl;
		std::cout << u;
		std::vector<Complex> data2 = {Complex(5, 3), Complex(-2, 0), Complex(8, -1)};
		Vector<Complex> v(data2);
		std::cout << "v: " << std::endl;
		std::cout << v;
		std::cout << "u = u - v: " << std::endl;
		u.sub(v);
		std::cout << u;
	}
	{
		std::cout << "Test Vector ex15 " << ++i << ":" << std::endl;
		std::vector<Complex> data = {Complex(1, 2), Complex(3, 4), Complex(5, 6)};
		Vector<Complex> u(data);
		std::cout << "u: " << std::endl;
		std::cout << u;
		std::cout << "u * 2: " << std::endl;
		u.scl(2);
		std::cout << u;
	}
	{
		std::cout << "Test Vector ex15 " << ++i << ":" << std::endl;
		std::vector<Complex> data = {Complex(1, 2), Complex(3, 4), Complex(5, 6)};
		Vector<Complex> u(data);
		std::cout << "u: " << std::endl;
		std::cout << u;
		std::cout << "u * (2 + i): " << std::endl;
		u.scl(Complex(2, 1));
		std::cout << u;
	}
	{
		std::cout << "Test Vector ex15 " << ++i << ":" << std::endl;
		std::vector<Complex> data1 = {Complex(1, 2), Complex(3, 4), Complex(5, 6)};
		Vector<Complex> v1(data1);
		std::vector<Complex> data2 = {Complex(5, 3), Complex(-2, 0), Complex(8, -1)};
		Vector<Complex> v2(data2);
		std::vector<Complex> scalars = {Complex(2, 1), Complex(3, -1)};
		std::vector<Vector<Complex>> vectors = {v1, v2};
		std::cout << "v1: " << std::endl << v1;
		std::cout << "v2: " << std::endl << v2;
		std::cout << "Linear combination with scalars (2+i) and (3-i): " << std::endl;
		Vector<Complex> result = linear_combination(vectors, scalars);
		std::cout << result;
	}
	{
		std::cout << "Test Vector ex15 " << ++i << ":" << std::endl;
		std::vector<Complex> data1 = {Complex(1, 2), Complex(3, 4), Complex(5, 6)};
		Vector<Complex> u(data1);
		std::vector<Complex> data2 = {Complex(5, 3), Complex(-2, 0), Complex(8, -1)};
		Vector<Complex> v(data2);
		std::cout << "u: " << std::endl << u;
		std::cout << "v: " << std::endl << v;
		std::cout << "Lerp from u to v with t = 0.5: " << std::endl;
		Vector<Complex> result = lerp(u, v, 0.5f);
		std::cout << result;
	}
	{
		std::cout << "Test Vector ex15 " << ++i << ":" << std::endl;
		std::vector<Complex> data1 = {Complex(1, 2), Complex(3, 4), Complex(5, 6)};
		Vector<Complex> u(data1);
		std::vector<Complex> data2 = {Complex(5, 3), Complex(-2, 0), Complex(8, -1)};
		Vector<Complex> v(data2);
		std::cout << "u: " << std::endl << u;
		std::cout << "v: " << std::endl << v;
		std::cout << "Dot product of u and v: " << std::endl;
		Complex result = u.dot(v);
		std::cout << result << std::endl;
	}
	{
		std::cout << "Test Vector ex15 " << ++i << ":" << std::endl;
		std::vector<Complex> data = {Complex(1, 2), Complex(3, 4), Complex(5, 6)};
		Vector<Complex> u(data);
		std::cout << "u: " << std::endl << u;
		std::cout << "Norm_1 of u: " << u.norm_1() << std::endl;
		std::cout << "Norm_2 of u: " << u.norm() << std::endl;
		std::cout << "Norm_inf of u: " << u.norm_inf() << std::endl;
	}
	{
		std::cout << "Test Vector ex15 " << ++i << ":" << std::endl;
		std::vector<Complex> data1 = {Complex(1, 0), Complex(0, 1)};
		Vector<Complex> u(data1);
		std::vector<Complex> data2 = {Complex(1, 0), Complex(1, 0)};
		Vector<Complex> v(data2);
		std::cout << "u: " << std::endl << u;
		std::cout << "v: " << std::endl << v;
		std::cout << "Cosine of angle between u and v: " << angle_cos(u, v) << std::endl;
	}
	{
		std::cout << "Test Vector ex15 " << ++i << ":" << std::endl;
		std::vector<Complex> data1 = {Complex(5, 2), Complex(3, 4), Complex(-1, 8)};
		Vector<Complex> u(data1);
		std::vector<Complex> data2 = {Complex(1, 3), Complex(-4, 2), Complex(0, 4)};
		Vector<Complex> v(data2);
		std::cout << "u: " << std::endl << u;
		std::cout << "v: " << std::endl << v;
		std::cout << "Cross product of u and v: " << std::endl;
		Vector<Complex> result = cross_product(u, v);
		std::cout << result;
	}
}

void test_matrix_ex15(void)
{
	size_t i = 0;
	{
		std::cout << "Test Matrix ex15 " << ++i << ":" << std::endl;
		std::vector<Complex> data1 = {
			Complex(1, 2), Complex(3, 4), Complex(5, 6), 
			Complex(7, 8), Complex(9, 0), Complex(-1, -2)
		};
		Matrix<Complex> u(2, 3, data1);
		
		std::vector<Complex> data2 = {
			Complex(5, 3), Complex(-2, 0), Complex(8, -1), 
			Complex(4, 2), Complex(0, 5), Complex(3, 3)
		};
		Matrix<Complex> v(2, 3, data2);
		
		std::cout << "u: " << std::endl << u;
		std::cout << "v: " << std::endl << v;
		std::cout << "u + v: " << std::endl;
		Matrix<Complex> result = u;
		result.add(v);
		std::cout << result;
	}
	{
		std::cout << "Test Matrix ex15 " << ++i << ":" << std::endl;
		std::vector<Complex> data1 = {
			Complex(1, 2), Complex(3, 4), 
			Complex(5, 6), Complex(7, 8)
		};
		Matrix<Complex> u(2, 2, data1);
		
		std::vector<Complex> data2 = {
			Complex(0.5, 0.3), Complex(-0.2, 1.0), 
			Complex(0.8, -1.1), Complex(0.4, 0.2)
		};
		Matrix<Complex> v(2, 2, data2);
		
		std::cout << "u: " << std::endl << u;
		std::cout << "v: " << std::endl << v;
		std::cout << "u - v: " << std::endl;
		Matrix<Complex> result = u;
		result.sub(v);
		std::cout << result;
	}
	{
		std::cout << "Test Matrix ex15 " << ++i << ":" << std::endl;
		std::vector<Complex> data = {
			Complex(2, 0), Complex(0, 3), Complex(-1, 1),
			Complex(4, -2), Complex(0, 0), Complex(2, 5),
			Complex(1, 1), Complex(-3, 0), Complex(2, -2)
		};
		Matrix<Complex> u(3, 3, data);
		Complex scalar(2, 3);
		
		std::cout << "u: " << std::endl << u;
		std::cout << "scalar: " << scalar << std::endl;
		std::cout << "u * scalar: " << std::endl;
		Matrix<Complex> result = u;
		result.scl(scalar);
		std::cout << result;
	}
	{
		std::cout << "Test Matrix ex15 " << ++i << ":" << std::endl;
		std::vector<Complex> data1 = {
			Complex(3, 1), Complex(2, 5), 
			Complex(0, 4), Complex(1, 0)
		};
		Matrix<Complex> u(2, 2, data1);
		
		std::vector<Complex> data2 = {
			Complex(7, 3), Complex(0, 2), 
			Complex(4, -1), Complex(8, 6)
		};
		Matrix<Complex> v(2, 2, data2);
		
		std::cout << "u: " << std::endl << u;
		std::cout << "v: " << std::endl << v;
		std::cout << "Linear interpolation of u and v with t=0.5: " << std::endl;
		Matrix<Complex> result = lerp(u, v, 0.5f);
		std::cout << result;
	}
	{
		std::cout << "Test Matrix ex15 " << ++i << ":" << std::endl;
		std::vector<Complex> data1 = {
			Complex(1, 0), Complex(0, 1), 
			Complex(2, 3), Complex(4, 0)
		};
		Matrix<Complex> u(2, 2, data1);
		
		std::vector<Complex> data2 = {
			Complex(3, 2), Complex(0, 5), 
			Complex(1, 1), Complex(2, 2)
		};
		Matrix<Complex> v(2, 2, data2);
		
		std::cout << "u: " << std::endl << u;
		std::cout << "v: " << std::endl << v;
		std::cout << "u * v: " << std::endl;
		Matrix<Complex> result = u.mul_mat(v);
		std::cout << result;
	}
	{
		std::cout << "Test Matrix ex15 " << ++i << ":" << std::endl;
		std::vector<Complex> data = {
			Complex(2, 2), Complex(3, 1), Complex(0, 0),
			Complex(1, 4), Complex(5, 5), Complex(2, -1),
			Complex(-2, 3), Complex(0, 2), Complex(4, 7)
		};
		Matrix<Complex> u(3, 3, data);
		std::cout << "u: " << std::endl << u;
		std::cout << "Trace of u: " << std::endl;
		Complex result = u.trace();
		std::cout << result << std::endl;
	}
	{
		std::cout << "Test Matrix ex15 " << ++i << ":" << std::endl;
		std::vector<Complex> data = {
			Complex(1, 2), Complex(3, 4), 
			Complex(5, 6), Complex(7, 8),
			Complex(9, 0), Complex(-1, -2)
		};
		Matrix<Complex> u(3, 2, data);
		std::cout << "u: " << std::endl << u;
		std::cout << "Transpose of u: " << std::endl;
		Matrix<Complex> result = u.transpose();
		std::cout << result;
	}
	{
		std::cout << "Test Matrix ex15 " << ++i << ":" << std::endl;
		std::vector<Complex> data = {
			Complex(1, 1), Complex(2, 0), Complex(3, 2),
			Complex(4, -1), Complex(5, 3), Complex(6, 0)
		};
		Matrix<Complex> u(2, 3, data);
		std::cout << "u: " << std::endl << u;
		std::cout << "Row echelon form of u: " << std::endl;
		Matrix<Complex> result = u.row_echelon();
		std::cout << result;
	}
	{
		std::cout << "Test Matrix ex15 " << ++i << ":" << std::endl;
		std::vector<Complex> data = {
			Complex(3, 0), Complex(1, 2),
			Complex(2, 1), Complex(4, -1)
		};
		Matrix<Complex> u(2, 2, data);
		std::cout << "u: " << std::endl << u;
		std::cout << "Determinant of u: " << std::endl;
		Complex result = u.determinant();
		std::cout << result << std::endl;
	}
	{
		std::cout << "Test Matrix ex15 " << ++i << ":" << std::endl;
		std::vector<Complex> data = {
			Complex(2, 1), Complex(3, 0),
			Complex(1, -1), Complex(4, 2)
		};
		Matrix<Complex> u(2, 2, data);
		std::cout << "u: " << std::endl << u;
		std::cout << "Inverse of u: " << std::endl;
		try {
			Matrix<Complex> result = u.inverse();
			std::cout << result;
			std::cout << "u * u^-1 (should be identity):" << std::endl;
			Matrix<Complex> identity = u.mul_mat(result);
			std::cout << identity;
		} catch (const std::exception& e) {
			std::cout << "Exception: " << e.what() << std::endl;
		}
	}
	{
		std::cout << "Test Matrix ex15 " << ++i << ":" << std::endl;
		std::vector<Complex> data = {
			Complex(1, 0), Complex(2, 1), Complex(3, 2),
			Complex(0, 1), Complex(1, 1), Complex(2, 0),
			Complex(0, 0), Complex(0, 0), Complex(0, 0)
		};
		Matrix<Complex> u(3, 3, data);
		std::cout << "u: " << std::endl << u;
		std::cout << "Rank of u: " << std::endl;
		size_t rank = u.rank();
		std::cout << rank << std::endl;
	}
	{
		std::cout << "Test Matrix ex15 " << ++i << ":" << std::endl;
		std::vector<Complex> matrix_data = {
			Complex(1, 1), Complex(0, 2), Complex(3, 0),
			Complex(2, 1), Complex(4, 3), Complex(1, 2)
		};
		Matrix<Complex> matrix(2, 3, matrix_data);
		
		std::vector<Complex> vector_data = {
			Complex(2, 1), Complex(0, 1), Complex(3, 2)
		};
		Vector<Complex> vec(vector_data);
		
		std::cout << "Matrix: " << std::endl << matrix;
		std::cout << "Vector: " << std::endl << vec;
		std::cout << "Matrix * Vector: " << std::endl;
		Vector<Complex> result = matrix.mul_vec(vec);
		std::cout << result;
	}
}

void test_ex15(void)
{
	std::cout << "Ex15 tests : [Vector/Matrix] Bonus: Complex vector spaces" << std::endl;
	test_vector_ex15();
	test_matrix_ex15();
	std::cout << "--------------------------------" << std::endl;
}