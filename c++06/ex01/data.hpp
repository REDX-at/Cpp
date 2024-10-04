/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 22:12:41 by aitaouss          #+#    #+#             */
/*   Updated: 2024/10/03 22:14:01 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Serializer.hpp"

class Data
{
    private:
        std::string _data;
        int n;
    public:
        Data();
        ~Data();
        Data(Data const & src);
        Data & operator=(Data const & rhs);
};

