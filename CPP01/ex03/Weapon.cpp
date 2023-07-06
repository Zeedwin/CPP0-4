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

std::string	Weapon::get_Type(void)
{
	return _type;
}

void Weapon::set_Type(std::string weapon)
{
	_type = weapon;
}