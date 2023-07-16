#include "WrongAnimal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongAnimal::WrongAnimal()
{
	this->_type = "Wrong Animal";
}

WrongAnimal::WrongAnimal( const WrongAnimal & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongAnimal::~WrongAnimal()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongAnimal &WrongAnimal::operator=( WrongAnimal const & rhs )
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
void WrongAnimal::makeSound() const
{
	std::cout << "Wrong Animal Sound" << std::endl;
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */