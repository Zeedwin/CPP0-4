#ifndef	WEAPON_H
# define	WEAPON_H

#include <iostream>

class Weapon
{
private:
std::string	_type;
public:
void set_type(std::string weapon);
std::string get_type();
void attack();
	Weapon(std::string weapon);
	Weapon();
	~Weapon();
};




#endif