#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>
#include <climits>
#include <cmath>

class Fixed
{
private:
int _fxpoint;
static const int _bits = 8;
public:
	Fixed();
	Fixed(const Fixed& fx);
	Fixed& operator=(const Fixed& other);
	~Fixed();
	int getRawBits() const;
	void setRawBits(const int bit);
};


#endif