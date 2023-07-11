#include "Fixed.hpp"

Fixed::Fixed(): _fxpoint(0)
{
	std::cout << "Default Constructor Called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor Called" << std::endl;
}

Fixed::Fixed(const Fixed& fx)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = fx;
}

Fixed& Fixed::operator=(const Fixed& fx)
{
    std::cout << "Copy assignement operator called" << std::endl;
    _fxpoint = fx.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->_fxpoint;
}

void Fixed::setRawBits(const int bit)
{
    std::cout << "setRawBits called" << std::endl;
    this->_fxpoint = bit;
}