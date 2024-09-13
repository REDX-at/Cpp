/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 08:40:13 by aitaouss          #+#    #+#             */
/*   Updated: 2024/07/22 08:46:24 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    Fixed xp = point.getX();
    Fixed yp = point.getY();
    Fixed xa = a.getX();
    Fixed ya = a.getY();
    Fixed xb = b.getX();
    Fixed yb = b.getY();
    Fixed xc = c.getX();
    Fixed yc = c.getY();

    // vector calculated like this : v = (xb - xa , yb - ya) From Point to point Like A > B.
    // vector calculated like this : v = (xp - xa , yp - ya) From Point to point Like A > P.
    // It give us the vectorial product of the two vectors : a1 = (xp - xa) * (yb - ya) - (xb - xa) * (yp - ya)
    Fixed a1 = (xp - xa) * (yb - ya) - (xb - xa) * (yp - ya);
    Fixed a2 = (xp - xb) * (yc - yb) - (xc - xb) * (yp - yb);
    Fixed a3 = (xp - xc) * (ya - yc) - (xa - xc) * (yp - yc);

    if ((a1 > 0 && a2 > 0 && a3 > 0) || (a1 < 0 && a2 < 0 && a3 < 0))
        return true;
    return false;
}
