#pragma once

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
public:
	bool gate; 
	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap &other);
	~FragTrap();
	FragTrap& operator=(const FragTrap& eq);
	void attack(const std::string& targetScv);
	void highFivesGuys(void);
};
