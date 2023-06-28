#ifndef	HUMANA_H
# define	HUMANA_H

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
private:
std::string _name;
Weapon& type;
public:
void set_name(std::string name);
	HumanA(std::string name, Weapon& weapon);
	~HumanA();
};

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), type(weapon)
{

}

HumanA::~HumanA()
{
}


#endif