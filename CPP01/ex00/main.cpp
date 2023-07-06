#include "Zombie.hpp"

int main()
{
	Zombie	*zombie = newZombie("Lain");
	zombie->announce();
	delete zombie;
	randomChump("Zbob");
}

