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

        bool operator>(const Fixed& other) const;
        bool operator<(const Fixed& other) const;
        bool operator>=(const Fixed& other) const;
        bool operator<=(const Fixed& other) const;
        bool operator==(const Fixed& other) const;
        bool operator!=(const Fixed& other) const;

        Fixed& operator++();
        Fixed operator++(int);
        Fixed& operator--();
        Fixed operator--(int);

        Fixed operator+(const Fixed& other) const;
        Fixed operator-(const Fixed& other) const;
        Fixed operator*(const Fixed& other) const;
        Fixed operator/(const Fixed& other) const;

        static Fixed &min(Fixed &a, Fixed &b);
        static Fixed &max(Fixed &a, Fixed &b);
        static const Fixed &max(Fixed const &a, Fixed const &b);
        static const Fixed &min(Fixed const &a, Fixed const &b);

};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);

#endif
