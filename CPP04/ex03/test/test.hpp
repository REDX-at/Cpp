/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 19:05:01 by aitaouss          #+#    #+#             */
/*   Updated: 2024/09/04 19:13:36 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string.h>
class   body
{
    public:
        virtual void    whatimi();
};

class   hand : public body
{
    public:
        void    whatimi();
};

class   foot : public body
{
    public:
        void    whatimi();
};
