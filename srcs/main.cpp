#include "commons.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Usage: " << argv[0] << " <test_number>" << std::endl;
		std::cerr << "Available tests: " << std::endl;
		std::cerr << "- base" << std::endl;
		std::cerr << "- ex00" << std::endl;
		std::cerr << "- ex01" << std::endl;
		return (EXIT_FAILURE);
	}
	std::string test_name(argv[1]);
	if (test_name == "base")
		test_base();
	else if (test_name == "ex00")
		test_ex00();
	else if (test_name == "ex01")
		test_ex01();
	//do a pointer functions table
	return (EXIT_SUCCESS);
}