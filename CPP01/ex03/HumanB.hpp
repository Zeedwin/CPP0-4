#ifndef	HUMANB_H
# define	HUMANB_H

#include <iostream>


class HumanB
{
private:
std::string	_type;
std::string	_name;
public:
	HumanB(std::string name);
	~HumanB();
};

HumanB::HumanB(std::string name) : _name(name)
{

}

HumanB::~HumanB()
{
}


#endif