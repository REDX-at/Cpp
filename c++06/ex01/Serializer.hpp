/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 20:25:29 by aitaouss          #+#    #+#             */
/*   Updated: 2024/10/04 17:03:25 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <cstdint>

class Data;

class Serializer
{
    private:
        Serializer();
        ~Serializer();
        Serializer(const Serializer & src);
        Serializer &operator=(const Serializer & src);
    public:
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};