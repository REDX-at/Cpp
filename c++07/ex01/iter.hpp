/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 00:48:44 by aitaouss          #+#    #+#             */
/*   Updated: 2024/10/06 01:04:37 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

template <typename I, typename F>
void    iter(I& arr, int len, F funct){
    for(int i = 0; i < len; ++i){
        funct(arr[i]);
    }
}

void    printelement(int i){
    std::cout << i << std::endl;
}
