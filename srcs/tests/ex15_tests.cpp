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
	}
}

void test_ex15(void)
{
	std::cout << "Ex15 tests : [Vector/Matrix] Bonus: Complex vector spaces" << std::endl;
	test_vector_ex15();
	std::cout << "--------------------------------" << std::endl;
}