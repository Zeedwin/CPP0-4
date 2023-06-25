#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
#include <iostream>

class Zombie
{
private:
std::string	_name;
public:
	void	anouncer(void);
	std::string	get_name();
	Zombie(std::string name) : _name(name)
	{
		std::cout << "Constructor Called" << "\n";
	}
	~Zombie()
	{
		std::cout << "Destructor Called" << "\n";
	}
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif