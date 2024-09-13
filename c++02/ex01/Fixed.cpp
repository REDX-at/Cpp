#include "Fixed.hpp"

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return storage;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed() : storage(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &f) : storage(f.storage)
{
    std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(const int i) : storage(i << bits)
{
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float f) : storage(roundf(f * (1 << bits)))
{
    std::cout << "Float constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &f)
{
    std::cout << "copy Assignation operator called" << std::endl;
    storage = f.storage;
    return *this;
}

int Fixed::toInt( void ) const
{
    return storage >> bits;
}

float Fixed::toFloat( void ) const
{
    return (float)storage / (1 << bits);
}

std::ostream& operator<<(std::ostream& os, const Fixed& obj)
{
    os << obj.toFloat();
    return os;
}
