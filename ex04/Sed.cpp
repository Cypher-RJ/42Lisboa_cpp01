#include "Sed.hpp"

Sed::Sed(std::string fileName, std::string s1, std::string s2)
{
	this->fileName = fileName;
	this->s1 = s1;
	this->s2 = s2;
}

void Sed::process()
{
	std::ifstream infile(fileName.c_str());

	if (!infile)
	{
		std::cout << "Error opening file\n";
		return;
	}
	std::ofstream outfile((fileName + ".replace").c_str());

	if (!outfile)
	{
		std::cout << "Error creating output file\n";
		return;
	}

	std::string line;

	while (std::getline(infile, line))
	{
		size_t pos = 0;

		while ((pos = line.find(s1, pos)) != std::string::npos)
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos += s2.length();
		}
		outfile << line;

		if (!infile.eof())
			outfile << "\n";
	}
}