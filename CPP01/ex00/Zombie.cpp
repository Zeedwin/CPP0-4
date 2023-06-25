#include "Zombie.hpp"

void Zombie::anouncer(void)
{
	std::cout << get_name() << ": BraiiiiiiinnnzzzZ..." << "\n";
}

std::string	Zombie::get_name()
{
	return _name;
}
