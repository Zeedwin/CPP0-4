#ifndef	HUMANB_H
# define	HUMANB_H

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
private:
std::string	_name;
Weapon*	_weapon;
public:
void set_name(std::string name);
void attack(void);
std::string get_name();
void set_weapon(Weapon& weapon);
	HumanB(std::string name);
	HumanB();
	~HumanB();
};



#endif