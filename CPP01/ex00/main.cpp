#include "Zombie.hpp"

int main()
{
	Zombie	*zombie = newZombie("Lain");
	zombie->anouncer();
	delete zombie;
	randomChump("Zbob");
}

