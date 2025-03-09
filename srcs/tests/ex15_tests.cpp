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
}

void test_ex15(void)
{
	std::cout << "Ex15 tests : [Vector/Matrix] Bonus: Complex vector spaces" << std::endl;
	test_vector_ex15();
	std::cout << "--------------------------------" << std::endl;
}