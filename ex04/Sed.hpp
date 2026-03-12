#ifndef SED_HPP
#define SED_HPP

#include <iostream>
#include <string>
#include <fstream>

class Sed
{
	private:
		std::string fileName;
		std::string s1;
		std::string s2;

	public:
		Sed(std::string fileName, std::string s1, std::string s2);
		void process();
};

#endif