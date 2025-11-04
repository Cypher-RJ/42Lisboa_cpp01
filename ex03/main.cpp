#include "HumanA.hpp"
#include "HumanB.hpp"

int main() {
	{
		Weapon club = Weapon("crude spiked club");

		HumanA john("John", club);
		john.attack();
		club.setType("Lucille");
		john.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");

		HumanB james("James");
		james.attack();
		james.setWeapon(club);
		james.attack();
		club.setType("Lucille");
	james.attack();
	}
	return 0;
}
