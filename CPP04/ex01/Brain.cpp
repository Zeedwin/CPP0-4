#include "Brain.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Brain::Brain(std::string idea)
{
	std::cout << "Brain Constructor Called" << std::endl;
	for (int i = 0; i <= 100; i++)
	{
		this->ideas[i] = idea;
	}
}

Brain::Brain()
{
	std::cout << "Brain Constructor Called" << std::endl;
	for (int i = 0; i <= 100; i++)
	{
		this->ideas[i] = "Default Idea";
	}
}

Brain::Brain( const Brain & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Brain::~Brain()
{
	std::cout << "Brain Destructor Called : " << this->ideas[0] << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Brain &				Brain::operator=( Brain const & rhs )
{
	if ( this != &rhs )
	{
		for (int i = 0; i <= 100; i++)
		{
			this->ideas[i] = rhs.ideas[i];
		}
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */