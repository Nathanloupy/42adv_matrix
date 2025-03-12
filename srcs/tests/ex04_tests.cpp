#include "commons.hpp"

static void test_vector_ex04(void)
{
	std::vector<float> data = {21.0f, -21.0f, -42.0f};
	Vector<float> v(data);
	std::cout << "v : " << std::endl;
	std::cout << v;
	std::cout << "v.norm_1() : " << v.norm_1() << std::endl;
	std::cout << "v.norm() : " << v.norm() << std::endl;
	std::cout << "v.norm_inf() : " << v.norm_inf() << std::endl;
}

void test_ex04(void)
{
	std::cout << "Ex04 tests : [Vector] Norm" << std::endl;
	test_vector_ex04();
	std::cout << "--------------------------------" << std::endl;
}