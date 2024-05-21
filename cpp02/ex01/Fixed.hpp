#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <iomanip>

class Fixed
{
    private:
        int storage;
        static const int bits = 8;
    public:
        Fixed();
        Fixed(const Fixed &f);
        Fixed(const int i);
        Fixed(const float f);
        float toFloat( void ) const;
        int toInt( void ) const;
        Fixed &operator=(const Fixed &f);
        int getRawBits( void ) const;
        friend std::ostream& operator<<(std::ostream& os, const Fixed& obj);
        ~Fixed();
};

#endif