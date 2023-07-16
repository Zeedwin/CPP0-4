#include "WrongCat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongCat::WrongCat()
{
	this->_type = "Wrong Cat";
}

WrongCat::WrongCat( const WrongCat & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongCat::~WrongCat()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongCat &WrongCat::operator=( WrongCat const & rhs )
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

void WrongCat::makeSound() const
{
	std::cout << "Wrong Miau Miau" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */