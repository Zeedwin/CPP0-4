#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <climits>
#include <cmath>


class Fixed
{
private:
    static const int _bits = 8;
    int value;

public:
    Fixed();
    Fixed(int value);
    Fixed(float value);
    Fixed(const Fixed& other);
    ~Fixed();

    Fixed& operator=(const Fixed& other);

    int getRawBits(void) const;
    void setRawBits(const int value);
    float toFloat(void) const;
    int toInt(void) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed &other);

#endif