/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 15:37:16 by aitaouss          #+#    #+#             */
/*   Updated: 2024/07/08 15:40:53 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

// colors

#define RESET       "\033[0m"
#define RED         "\033[31m"
#define GREEN       "\033[32m"
#define WHITE       "\033[37m"
#define BLUE_CIEL   "\033[36m"

class Harl 
{
    private:
        void debug(void);
        void error(void);
        void info(void);
        void warning(void);
    public:
        ~Harl();
        void complain(std::string level);
};

#endif