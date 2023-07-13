#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap("Bot")
{
	std::cout << "FragTrap Constructor Called" << std::endl;
	this->_hp = 100;
	this->_energy = 50;
	this->_attackdmg = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor Called" << std::endl << this->_name << " was destroyed !" << std::endl;
}

FragTrap::FragTrap(FragTrap &other) {
	*this = other;
}

FragTrap& FragTrap::operator=(const FragTrap& eq)
{
	this->_hp = eq._hp;
	this->_energy = eq._energy;
	this->_attackdmg = eq._attackdmg;
	return *this;
}

FragTrap::FragTrap(std::string name): ClapTrap(name) 
{
	std::cout << "FragTrap Constructor Called" << std::endl;
	this->_hp = 100;
	this->_energy = 100;
	this->_attackdmg = 30;
}

void FragTrap::attack(const std::string& target)
{
	if(this->_energy > 0 && this->_hp > 0)
	{
		std::cout << "FragTrap "<< this->_name << " attacks "<< target << ", causing "<< this->_attackdmg << " points of damage!" << std::endl;
		this->_energy -= 1;
	}
	else if (this->_energy < 1 && this->_hp > 0)
		std::cout << "FragTrap " << this->_name << " has no energy" << std::endl;
	else if (this->_energy > 0 && this->_hp < 1)
		std::cout << "FragTrap " << this->_name << " is dead" << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << this->_name << " is currently requesting a high five" << std::endl;
}