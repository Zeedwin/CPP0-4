#include "Zombie.hpp"

int main()
{
	Zombie	*zombie = spawnZombie(10, "Lain");
	for (size_t i = 0; i < 10; i++)
		zombie[i].anouncer();
	delete[] zombie;
}