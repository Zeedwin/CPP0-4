#include "Animal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/



Animal::Animal()
{
	this->_type = "Animal";
}

Animal::Animal( const Animal & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Animal::~Animal()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Animal &Animal::operator=( Animal const & rhs )
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

void Animal::makeSound() const
{
	std::cout << "*Abhorent usless sounds*"	<< std::endl;
}

std::string Animal::getType() const
{
	return this->_type;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */