#include "Fixed.hpp"

int Fixed::getRawBits( void ) const
{
    return storage;
}

Fixed::~Fixed()
{
    // std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed() : storage(0)
{
    // std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &f) : storage(f.storage)
{
    // std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(const int i) : storage(i << bits)
{
    // std::cout << "Int constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &f)
{
    // std::cout << "copy Assignation operator called" << std::endl;
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

Fixed::Fixed(const float f) : storage(roundf(f * (1 << bits)))
{
    // std::cout << "Float constructor called" << std::endl;
}

// Operator functions
bool Fixed::operator>(const Fixed& other) const
{
    return storage > other.storage;
}

bool Fixed::operator<(const Fixed& other) const
{
    return storage < other.storage;
}

bool Fixed::operator>=(const Fixed& other) const
{
    return storage >= other.storage;
}

bool Fixed::operator<=(const Fixed& other) const
{
    return storage <= other.storage;
}

bool Fixed::operator==(const Fixed& other) const
{
    return storage == other.storage;
}

bool Fixed::operator!=(const Fixed& other) const
{
    return storage != other.storage;
}

Fixed Fixed::operator+(const Fixed& other) const
{
    return Fixed(toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed& other) const
{
    return Fixed(toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed& other) const
{
    return Fixed(toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed& other) const
{
    return Fixed(toFloat() / other.toFloat());
}

// pre increment and decrement operators

Fixed& Fixed::operator++()
{
    storage++;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    operator++();
    return tmp;
}

Fixed& Fixed::operator--()
{
    storage--;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    operator--();
    return tmp;
}

// min and max functions
Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    if (a < b)
        return a;
    return b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    if (a > b)
        return a;
    return b;
}

const Fixed &Fixed::max(Fixed const &a, Fixed const &b)
{
    if (a > b)
        return a;
    return b;
}

const Fixed &Fixed::min(Fixed const &a, Fixed const &b)
{
    if (a < b)
        return a;
    return b;
}