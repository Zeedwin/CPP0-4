#ifndef	HUMANA_H
# define	HUMANA_H

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
private:
std::string _name;
Weapon& _weapon;
public:
void set_name(std::string name);
void attack(void);
std::string get_name();
	HumanA(std::string name, Weapon& weapon);
	~HumanA();
};




#endif