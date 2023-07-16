#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat()
{
	std::cout << "Cat Constructor Called" << std::endl;
	this->_type = "Cat";
	this->br = new Brain("Miau");
}

Cat::Cat( const Cat & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat()
{
	std::cout << "Cat Destructor Called" << std::endl;
	delete this->br;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat &Cat::operator=( Cat const & rhs )
{
	if ( this != &rhs )
	{
		this->_type = rhs._type;
		this->br = rhs.br;
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/
void Cat::makeSound() const
{
	std::cout << "Miau Miau" << std::endl;
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */