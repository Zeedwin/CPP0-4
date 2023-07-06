#include "Zombie.hpp"

void	randomChump(std::string	name)
{
	Zombie	rzombie(name);
	rzombie.announce();
}