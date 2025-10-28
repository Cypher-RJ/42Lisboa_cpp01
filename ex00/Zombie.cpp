#include "Zombie.hpp"

Zombie::Zombie(std::string _name) : _name(_name)
{
	std::cout << "Creating " << _name << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Destroiyng " << _name << std::endl;
}

void Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}