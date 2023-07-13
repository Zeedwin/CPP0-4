#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _hp(10), _energy(10), _name("Bot")
{
	std::cout << "Defautl Constructor Called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _hp(10), _energy(10), _name(name), _attackdmg(0)
{
	std::cout << "Constructor Called" << std::endl;
}

ClapTrap::~ClapTrap(){
	std::cout << "Destructor Called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap &other) {
	*this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& eq)
{
	this->_hp = eq._hp;
	this->_energy = eq._energy;
	this->_attackdmg = eq._attackdmg;
    std::cout << "Assignation operator called" << std::endl;
    return *this;
}

void ClapTrap::attack(const std::string& target)
{
	if(this->_energy > 0 && this->_hp > 0)
	{
		std::cout << "ClapTrap "<< this->_name << " attacks "<< target << ", causing "<< this->_attackdmg << " points of damage!" << std::endl;
		this->_energy -= 1;
	}
	else if (this->_energy < 1 && this->_hp > 0)
		std::cout << "ClapTrap " << this->_name << " has no energy" << std::endl;
	else if (this->_energy > 0 && this->_hp < 1)
		std::cout << "ClapTrap " << this->_name << " is dead" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hp >= (int)amount)
	{
		std::cout << "ClapTrap "<< this->_name << " took "<< amount << " points of damage!" << std::endl;
		this->_hp -= amount;
	}
	else
	{
		std::cout << "ClapTrap "<< this->_name << " is already dead" << std::endl;
		this->_hp = 0;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if(this->_hp <= 0)
		std::cout << "ClapTrap "<< this->_name << " is dead and cannot be repaired!" << std::endl;
	else if(this->_energy > 0 && this->_hp > 0)
	{
		std::cout << "ClapTrap "<< this->_name << " has been repaired for " << amount << " hitpoints" <<std::endl;
		this->_energy -= 1;
		this->_hp += amount;
	}
}