#include "Point.hpp"

Point::Point() : x(0), y(0)
{
    // std::cout << "Default constructor called" << std::endl;
}

Point::Point(const float x, const float y) : x(x), y(y)
{
    // std::cout << "Float constructor called" << std::endl;
}

Point::Point(const Point &p) : x(p.x), y(p.y)
{
    // std::cout << "Copy constructor called" << std::endl;
}

Point &Point::operator=(const Point &p)
{
    // std::cout << "Assignation operator called" << std::endl;
    if (this != &p)
    {
        (Fixed)this->x = p.x;
        (Fixed)this->y = p.y;
    }
    return *this;
}

Point::~Point()
{
    // std::cout << "Destructor called" << std::endl;
}

Fixed Point::getX() const
{
    return x;
}

Fixed Point::getY() const
{
    return y;
}
