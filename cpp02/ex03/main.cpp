#include "Point.hpp"

int main()
{
    Point a(0.0f, 0.0f);
    Point b(10.0f, 0.0f);
    Point c(0.0f, 10.0f);

    Point point(5.0f, 5.0f);

    bool inside = bsp(a, b, c, point);

    std::cout << "Point (" << point.getX() << ", " << point.getY() << ") is ";
    if (!inside) {
        std::cout << "not ";
    }
    std::cout << "inside the triangle." << std::endl;
    return 0;
}
