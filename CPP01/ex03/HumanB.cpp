#include "HumanB.hpp"


HumanB::HumanB(std::string name) : _name(name)
{

}

HumanB::HumanB(): _weapon(NULL)
{

}

HumanB::~HumanB()
{
}

void HumanB::set_weapon(Weapon&	weapon)
{
	_weapon = &weapon;
}

void HumanB::attack(void)
{
	std::cout << get_name() << " attacks with their weapon " << _weapon->get_type() << "\n";
}

std::string	HumanB::get_name(void)
{
	return _name;
}