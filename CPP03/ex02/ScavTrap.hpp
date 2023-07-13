#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
public:
	bool gate; 
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap &other);
	~ScavTrap();
	ScavTrap& operator=(const ScavTrap& eq);
	void attack(const std::string& targetScv);
	void guardGate();
};



#endif