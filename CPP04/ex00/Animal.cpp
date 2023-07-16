#include "Animal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/



Animal::Animal()
{
	std::cout << "Animal Constructor Called" << std::endl;
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
	std::cout << "WrongAnimal Destructor Called" << std::endl;
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