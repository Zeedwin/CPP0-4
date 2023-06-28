#ifndef	WEAPON_H
# define	WEAPON_H

#include <iostream>

class Weapon
{
private:
std::string	_weapon;
public:
void set_weapon(std::string weapon);
void attack();
	Weapon(std::string weapon);
	~Weapon();
};

Weapon::Weapon(std::string weapon): _weapon(weapon)
{

}

Weapon::~Weapon()
{
}


#endif