#include "Zombie.hpp"

Zombie::Zombie()
{}

Zombie::Zombie(std::string _name) : _name(_name)
{
	std::cout << "\033[1;32mCreating \033[0m" << _name << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "\033[1;31mDestroiyng \033[0m" << _name << std::endl;
}

void Zombie::announce(void)
{
	std::cout << _name << " says -> I exist!!!" << std::endl;
}

void Zombie::setName(std::string name)
{
	_name = name;
}