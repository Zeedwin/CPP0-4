#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this ->value = 0;
}

Fixed::Fixed(int value)
{
    std::cout << "Int constructor called" << std::endl;
	this->value = value << this->_bits;
}

Fixed::Fixed(float value)
{
    std::cout << "Float constructor called" << std::endl;
    this->value = (int)(roundf(value * (1 << _bits)));
}

Fixed::Fixed(const Fixed& cpyd)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = cpyd;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other)
{
    std::cout << "Assignation operator called" << std::endl;
    value = other.getRawBits();
    return *this;
}

std::ostream& operator<<(std::ostream& os, const Fixed &cpyd)
{
    os << cpyd.toFloat();
    return os;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits called" << std::endl;
    return (this->value);
}

void Fixed::setRawBits(int bits)
{
    std::cout << "setRawBits called" << std::endl;
    this->value = bits;
}

int Fixed::toInt(void) const
{
    return (this->value >> this->_bits);
}

float Fixed::toFloat(void) const
{
    return ((float)this->value / (1 << this->_bits));
}
