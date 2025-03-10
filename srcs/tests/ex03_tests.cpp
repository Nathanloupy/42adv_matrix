#include "commons.hpp"

void test_vector_ex03(void)
{
	std::vector<float> data1 = {1.0f, 2.0f, 3.0f};
	Vector<float> u(data1);
	std::cout << "u: " << std::endl;
	std::cout << u;
	std::vector<float> data2 = {4.0f, 5.0f, 6.0f};
	Vector<float> v(data2);
	std::cout << "v: " << std::endl;
	std::cout << v;
	float result = u.dot(v);
	std::cout << "result: " << result << std::endl;
}

void test_ex03(void)
{
	std::cout << "Ex03 tests : [Vector] Dot product" << std::endl;
	test_vector_ex03();
	std::cout << "--------------------------------" << std::endl;
}
