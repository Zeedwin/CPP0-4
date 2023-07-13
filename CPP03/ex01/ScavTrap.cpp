#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap("Bot")
{
	std::cout << "ScavTrap Constructor Called" << std::endl;
	this->_hp = 100;
	this->_energy = 50;
	this->_attackdmg = 30;
	this->gate = false;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor Called" << std::endl << this->_name << " was destroyed !" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap &other) {
	*this = other;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& eq)
{
	this->_hp = eq._hp;
	this->_energy = eq._energy;
	this->_attackdmg = eq._attackdmg;
	this->gate = eq.gate;
	return *this;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name) 
{
	std::cout << "ScavTrap Constructor Called" << std::endl;
	this->_hp = 100;
	this->_energy = 50;
	this->_attackdmg = 30;
	this->gate = false;
}

void ScavTrap::attack(const std::string& target)
{
	if(this->_energy > 0 && this->_hp > 0)
	{
		std::cout << "ScavTrap "<< this->_name << " attacks "<< target << ", causing "<< this->_attackdmg << " points of damage!" << std::endl;
		this->_energy -= 1;
	}
	else if (this->_energy < 1 && this->_hp > 0)
		std::cout << "ScavTrap " << this->_name << " has no energy" << std::endl;
	else if (this->_energy > 0 && this->_hp < 1)
		std::cout << "ScavTrap " << this->_name << " is dead" << std::endl;
}

void ScavTrap::guardGate()
{
	if(gate == false) {
		gate = true;
		std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
	}
	else
	{
		std::cout << "ScavTrap is no longer in Gate keeper mode." << std::endl;
		gate = false;
	}
}