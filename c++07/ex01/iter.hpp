/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 00:48:44 by aitaouss          #+#    #+#             */
/*   Updated: 2024/10/07 10:54:17 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

template <typename I, typename F>
void    iter(I& arr, size_t len, F funct)
{
    for(size_t i = 0; i < len; ++i)
    {
        funct(arr[i]);
    }
}

void    printelement(size_t i)
{
    std::cout << i << std::endl;
}
