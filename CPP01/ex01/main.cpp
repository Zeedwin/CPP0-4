#include "Zombie.hpp"

int main()
{
	Zombie	*zombie = zombieHorde(10, "Lain");
	for (size_t i = 0; i < 10; i++)
		zombie[i].announce();
	delete[] zombie;
}