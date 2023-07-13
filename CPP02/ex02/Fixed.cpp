#include "Fixed.hpp"

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	if ((Fixed)a < (Fixed)b)
		return (a);
	return (b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	if ((Fixed)a > (Fixed)b)
		return (a);
	return (b);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}
Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

Fixed::Fixed(void)
{
	this->value = 0;
}

Fixed::Fixed(int value)
{
	this->value = value << this->_bits;
}

Fixed::Fixed(float value)
{
	this->value = (int)roundf(value * (1 << this->_bits));
}

Fixed::Fixed(const Fixed &other)
{
	*this = other;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	this->value = other.value;
	return (*this);
}

bool Fixed::operator<(const Fixed &b)
{
	return (this->value < b.value);
}
bool Fixed::operator>(const Fixed &b)
{
	return (this->value > b.value);
}
bool Fixed::operator<=(const Fixed &b)
{
	return (this->value <= b.value);
}
bool Fixed::operator>=(const Fixed &b)
{
	return (this->value >= b.value);
}
bool Fixed::operator==(const Fixed &b)
{
	return (this->value == b.value);
}
bool Fixed::operator!=(const Fixed &b)
{
	return (this->value != b.value);
}

Fixed Fixed::operator+(const Fixed &b)
{
	Fixed result;

	result.setRawBits(this->value + b.value);
	return (result);
}
Fixed Fixed::operator-(const Fixed &b)
{
	Fixed result;

	result.setRawBits(this->value - b.value);
	return (result);
}
Fixed Fixed::operator*(const Fixed &b)
{
	Fixed result;

	result.setRawBits(this->value * b.value / (1 << this->_bits));
	return (result);
}
Fixed Fixed::operator/(const Fixed &b)
{
	Fixed result;

	result.setRawBits(this->value / b.value * (1 << this->_bits));
	return (result);
}

Fixed &Fixed::operator++(void)
{
	this->value += 1;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);

	this->value += 1;
	return (tmp);
}

Fixed &Fixed::operator--(void)
{
	this->value -= 1;
	return (*this);
}


Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);

	this->value -= 1;
	return (tmp);
}

int Fixed::getRawBits(void) const
{
	return (this->value);
}

void Fixed::setRawBits(int raw)
{
	this->value = raw;
}

std::ostream &operator<<(std::ostream &outp, const Fixed &value)
{
	out << value.toFloat();
	return (outp);
}

int Fixed::toInt(void) const
{
	return (this->value >> this->_bits);
}

float Fixed::toFloat(void) const
{
	return ((float)this->value / (1 << this->_bits));
}


Fixed::~Fixed(void)
{
}