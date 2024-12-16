/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 12:14:17 by aitaouss          #+#    #+#             */
/*   Updated: 2024/12/16 15:22:14 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <fstream>
#include <sstream>
#include <string>
#include <map>

class RPN {
    private:
        std::stack<double> rpnStack;
    public:
        RPN();
        ~RPN();
        RPN(const RPN & other);
        RPN & operator=(const RPN & other);
        void    polish_function(char *argv1);
        void    print_err(std::string error);
        bool    operation_stack(std::string str);
};