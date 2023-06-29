#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon)
{

}

HumanA::~HumanA()
{
}

void HumanA::attack(void)
{
	std::cout << get_name() << " attacks with their weapon " << _weapon.get_type() << "\n";
}

std::string	HumanA::get_name(void)
{
	return _name;
}