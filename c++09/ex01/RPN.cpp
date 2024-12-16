/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <aitaouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 12:14:15 by aitaouss          #+#    #+#             */
/*   Updated: 2024/12/16 15:28:42 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {
    
}
RPN::~RPN() {
    
}

RPN::RPN(const RPN & other) {
    *this = other;
}

RPN & RPN::operator=(const RPN & other) {
    this->rpnStack = other.rpnStack;
    return *this;
}

void    RPN::print_err(std::string error) {
    if (error == "") {
        std::cerr << "Eroor" << std::endl;
        return ;
    }
    std::cerr << "Eroor : " << error << std::endl;
    return ;
}

bool    RPN::operation_stack(std::string str) {
    double N2 = rpnStack.top(); 
    rpnStack.pop();
    double N1 = rpnStack.top(); 
    rpnStack.pop();
    switch (str[0])
    {
    case '+':
        rpnStack.push(N1 + N2);
        break;
    case '-':
        rpnStack.push(N1 - N2);
        break;
    case '*':
        rpnStack.push(N1 * N2);
        break;
    case '/':
        rpnStack.push(N1 / N2);
        break;
    default:
        break;
    }
    return true;
}

void    RPN::polish_function(char *argv1) {
    std::string str;
    std::stringstream ss1(argv1);    

    while (ss1 >> str)
    {
        if (str.length() == 1 && std::isdigit(str[0]))
            rpnStack.push(std::stod(str));

        else if (str.length() == 1 && (str[0] == '+' || str[0] == '/' || str[0] == '*' || str[0] == '-') )
        {
            if (rpnStack.size() >= 2)
            {
                if (!this->operation_stack(str))
                    return ;
            }
        }
        else
        {
            this->print_err("");
            return ;
        }
    }
    if (rpnStack.size() != 1)
    {
        this->print_err("to many operand");
        return ;
    }
    std::cout << rpnStack.top() << std::endl;
    return ;
}