#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog()
{
	std::cout << "Dog Constructor Called" << std::endl;
	 this->_type = "Dog";
}

Dog::Dog( const Dog & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog()
{
	std::cout << "Dog Destructor Called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog &Dog::operator=( Dog const & rhs )
{
	if ( this != &rhs )
	{
		this->_type = rhs._type;
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/
void Dog::makeSound() const
{
	std::cout << "BARK BARK!" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */