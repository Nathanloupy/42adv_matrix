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
		std::vector<Complex> data1 = {Complex(1, 0), Complex(0, 1), Complex(0, 0)};
		Vector<Complex> u(data1);
		std::vector<Complex> data2 = {Complex(0, 0), Complex(1, 0), Complex(0, 1)};
		Vector<Complex> v(data2);
		std::cout << "u: " << std::endl << u;
		std::cout << "v: " << std::endl << v;
		std::cout << "Cross product of u and v: " << std::endl;
		Vector<Complex> result = cross_product(u, v);
		std::cout << result;
	}
}

void test_ex15(void)
{
	std::cout << "Ex15 tests : [Vector/Matrix] Bonus: Complex vector spaces" << std::endl;
	test_vector_ex15();
	std::cout << "--------------------------------" << std::endl;
}