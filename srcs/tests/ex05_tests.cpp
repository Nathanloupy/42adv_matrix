#include "commons.hpp"

static void test_vector_ex05(void)
{
	Vector<float> u({1, 2, 3});
	Vector<float> v({4, 5, 6});
	std::cout << "u : " << std::endl;
	std::cout << u;
	std::cout << "v : " << std::endl;
	std::cout << v;
	std::cout << "angle_cos(u, v) : " << angle_cos(u, v) << std::endl;
}

void test_ex05(void)
{
	std::cout << "Ex05 tests : [Vector] Cosine" << std::endl;
	test_vector_ex05();
	std::cout << "--------------------------------" << std::endl;
}
