#include "commons.hpp"

static void test_vector_ex06(void)
{
	Vector<float> u({4.0f, 2.0f, -3.0f});
	Vector<float> v({-2.0f, -5.0f, 16.0f});
	std::cout << "u : " << std::endl;
	std::cout << u;
	std::cout << "v : " << std::endl;
	std::cout << v;
	std::cout << "cross_product(u, v) : " << std::endl;
	std::cout << cross_product(u, v);
}

void test_ex06(void)
{
	std::cout << "Ex06 tests : [Vector - R3] Cross Product" << std::endl;
	test_vector_ex06();
	std::cout << "--------------------------------" << std::endl;
}
