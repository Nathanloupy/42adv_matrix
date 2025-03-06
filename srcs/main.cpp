#include "commons.hpp"

int main(int argc, char **argv)
{
	void (*tests[])(void) = {test_base, test_ex00, test_ex01, test_ex02, test_ex03, test_ex04, test_ex05, test_ex06};
	std::string test_names[] = {"base", "ex00", "ex01", "ex02", "ex03", "ex04", "ex05", "ex06"};
	if (argc != 2)
	{
		std::cerr << "Usage: " << argv[0] << " <test_number>" << std::endl;
		std::cerr << "Available tests: " << std::endl;
		for (size_t i = 0; i < sizeof(test_names) / sizeof(std::string); i++)
			std::cerr << "- " << test_names[i] << std::endl;
		return (EXIT_FAILURE);
	}
	std::string test_name(argv[1]);
	for (size_t i = 0; i < sizeof(test_names) / sizeof(std::string); i++)
	{
		if (test_name == test_names[i])
		{
			try
			{
				tests[i]();
				return (EXIT_SUCCESS);
			}
			catch (const std::exception &e)
			{
				std::cerr << e.what() << std::endl;
				return (EXIT_FAILURE);
			}
		}
	}
	std::cerr << "Invalid test number." << std::endl;
	return (EXIT_FAILURE);
}