/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 20:25:29 by aitaouss          #+#    #+#             */
/*   Updated: 2024/10/03 20:28:42 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

class Serializer
{
    private:
        Serializer();
    public:
        static uinptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);       
}