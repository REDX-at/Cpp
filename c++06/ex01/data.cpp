/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 22:14:02 by aitaouss          #+#    #+#             */
/*   Updated: 2024/10/03 22:14:58 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "data.hpp"

Data::Data() : _data("default"), n(37)
{
    std::cout << "Data constructor" << std::endl;
}

Data::~Data()
{
    std::cout << "Data destructor" << std::endl;
}

Data::Data(Data const & src)
{
    *this = src;
}

Data & Data::operator=(Data const & rhs)
{
    if (this != &rhs)
    {
        this->_data = rhs._data;
        this->n = rhs.n;
    }
    return *this;
}
