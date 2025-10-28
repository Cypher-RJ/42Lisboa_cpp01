#include "Zombie.hpp"

int	main()
{
	int N = 5;
	std::string name = "Adam";
	std::cout << "\033[1;32mCreating the hord\033[0m" << std::endl;
	Zombie *horde = zombieHorde(N, name);
	for (int i = 0; i < N; i++)
	{
		std::cout << "Zombie -> " << i << std::endl;
		horde[i].announce();
	}
	delete[] horde;
	return 0;
}