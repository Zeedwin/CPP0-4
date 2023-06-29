#include "Weapon.hpp"

Weapon::Weapon(std::string weapon): _type(weapon)
{

}

Weapon::Weapon(): _type(NULL)
{
	 
}

Weapon::~Weapon()
{
}

std::string	Weapon::get_type(void)
{
	return _type;
}

void Weapon::set_type(std::string weapon)
{
	_type = weapon;
}