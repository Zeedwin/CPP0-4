#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>
#include <climits>


class Fixed
{
private:
    int value;
    static const int _bits = 8;

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
        
    bool operator<(const Fixed &b);
    bool operator>(const Fixed &b);
    bool operator<=(const Fixed &b);
    bool operator>=(const Fixed &b);
    bool operator==(const Fixed &b);
    bool operator!=(const Fixed &b);
    
    Fixed operator+(const Fixed &b);
    Fixed operator-(const Fixed &b);
    Fixed operator*(const Fixed &b);
    Fixed operator/(const Fixed &b);
    
    Fixed &operator++(void);
    Fixed &operator--(void);
    Fixed operator++(int);
    Fixed operator--(int);

    static const Fixed &min(const Fixed &a, const Fixed &b);
    static Fixed &min(Fixed &a, Fixed &b);
    static const Fixed &max(const Fixed &a, const Fixed &b);
    static Fixed &max(Fixed &a, Fixed &b);
};

std::ostream& operator<<(std::ostream& os, const Fixed &other);

#endif