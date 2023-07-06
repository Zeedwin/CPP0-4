#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Constructor Called" << "\n";
}

Zombie::Zombie(std::string name) : _name(name)
{
	std::cout << "Constructor Called" << "\n";
}

Zombie::~Zombie()
{
		std::cout << "Destructor " << get_name() << " Called" << "\n";
}

void Zombie::announce(void)
{
	std::cout << get_name() << ": BraiiiiiiinnnzzzZ..." << "\n";
}

std::string	Zombie::get_name()
{
	return _name;
}

void	Zombie::set_name(std::string name) 
{
	this->_name = name;
}
