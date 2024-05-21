#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int storage;
        static const int bits = 8;
    public:
        Fixed();
        Fixed(const Fixed &f);
        Fixed &operator=(const Fixed &f);
        int getRawBits( void ) const;
        ~Fixed();
};

#endif
