#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <iomanip>

class Fixed
{
    private:
        static const int bits = 8;
        int storage;
    public:
        Fixed();
        Fixed(const Fixed &f);
        Fixed(const int i);
        Fixed(const float f);
        float toFloat( void ) const;
        int toInt( void ) const;
        Fixed &operator=(const Fixed &f);
        int getRawBits( void ) const;
        ~Fixed();
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif