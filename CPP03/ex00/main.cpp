#include "ClapTrap.hpp"

int main()
{
	 ClapTrap	L("Lain");

	L.attack("PresentDay");
	L.takeDamage(5);
	L.beRepaired(10);
	L.takeDamage(24);
	L.beRepaired(1);
	L.takeDamage(10);
	L.beRepaired(100);
}