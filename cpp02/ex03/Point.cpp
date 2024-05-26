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

// Point &Point::operator=(const Point &p)
// {
//     std::cout << "Assignation operator called" << std::endl;
//     return *this;
// }

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

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    Fixed x = point.getX();
    Fixed y = point.getY();
    Fixed xa = a.getX();
    Fixed ya = a.getY();
    Fixed xb = b.getX();
    Fixed yb = b.getY();
    Fixed xc = c.getX();
    Fixed yc = c.getY();

    Fixed a1 = (x - xa) * (yb - ya) - (xb - xa) * (y - ya);
    Fixed a2 = (x - xb) * (yc - yb) - (xc - xb) * (y - yb);
    Fixed a3 = (x - xc) * (ya - yc) - (xa - xc) * (y - yc);

    if ((a1 >= 0 && a2 >= 0 && a3 >= 0) || (a1 <= 0 && a2 <= 0 && a3 <= 0))
        return true;
    return false;
}
