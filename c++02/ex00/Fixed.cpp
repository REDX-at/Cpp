#include "Fixed.hpp"

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return storage;
}

void    Fixed::setRawBits(int const raw)
{
    std::cout << "Set raw bits function Called" << std::endl;
    storage = raw;
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

Fixed &Fixed::operator=(const Fixed &f)
{
    std::cout << "Assignation operator called" << std::endl;
    storage = f.storage;
    return *this;
}
