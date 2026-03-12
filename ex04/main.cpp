#include "Sed.hpp"

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Usage: ./Sed <filename> <s1> <s2>\n";
		return 1;
	}

	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	if (s1.empty())
	{
		std::cout << "Error: s1 cannot be empty\n";
		return 1;
	}

	Sed replacer(filename, s1, s2);
	replacer.process();

	return 0;
}